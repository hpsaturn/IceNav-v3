/**
 * @file main_scr.h
 * @author Jordi Gauchía (jgauchia@jgauchia.com)
 * @brief  LVGL - Splash screen
 * @version 0.1
 * @date 2022-10-16
 */
int heading = 0;
int last_heading = 0;

#define MIN_ZOOM 6
#define MAX_ZOOM 18
#define DEF_ZOOM 16
int zoom = DEF_ZOOM;

#define UPDATE_MAINSCR_PERIOD 10
void update_main_screen(lv_timer_t *t);

static lv_obj_t *compass_heading;
static lv_obj_t *compass_img;
static lv_obj_t *latitude;
static lv_obj_t *longitude;
static lv_obj_t *zoom_label;

static lv_timer_t *timer_main_scr;

/**
 * @brief Draw map event
 * 
 * @param event 
 */
static void drawmap(lv_event_t *event)
{
    if (!is_map_draw && act_tile == MAP)
    {
        draw_png(SD, "/MAP/17/66147/48885.png",0,64);
        debug->println("read map");
        is_map_draw = true;
    }
}

/**
 * @brief Create a main screen
 *
 */
void create_main_scr()
{
    mainScreen = lv_obj_create(NULL);

    // Main Screen Tiles
    tiles = lv_tileview_create(mainScreen);
    lv_obj_t *compass = lv_tileview_add_tile(tiles, 0, 0, LV_DIR_RIGHT);
    lv_obj_t *map = lv_tileview_add_tile(tiles, 1, 0, LV_DIR_LEFT | LV_DIR_RIGHT);
    lv_obj_t *sat_track = lv_tileview_add_tile(tiles, 2, 0, LV_DIR_LEFT);
    lv_obj_set_size(tiles, 240, 300);
    lv_obj_set_pos(tiles, 0, 20);

    // Compass Tile
#ifdef ENABLE_COMPASS
    compass_heading = lv_label_create(compass);
    lv_obj_set_size(compass_heading, 150, 48);
    lv_obj_set_align(compass_heading, LV_ALIGN_CENTER);
    lv_obj_set_y(compass_heading, 35);
    lv_obj_set_style_text_font(compass_heading, &lv_font_montserrat_48, 0);

    LV_IMG_DECLARE(arrow);
    lv_obj_t *arrow_img = lv_img_create(compass);
    lv_img_set_src(arrow_img, &arrow);
    lv_obj_align(arrow_img, LV_ALIGN_CENTER, 0, -20);

    LV_IMG_DECLARE(bruj);
    compass_img = lv_img_create(compass);
    lv_img_set_src(compass_img, &bruj);
    lv_obj_align(compass_img, LV_ALIGN_CENTER, 0, 15);
    lv_img_set_pivot(compass_img, 100, 100);
#endif

    LV_IMG_DECLARE(position);
    lv_obj_t *pos_img = lv_img_create(tiles);
    lv_img_set_src(pos_img, &position);
    lv_obj_set_pos(pos_img, 5, 10);

    latitude = lv_label_create(tiles);
    lv_obj_set_size(latitude, 200, 20);
    lv_obj_set_style_text_font(latitude, &lv_font_montserrat_16, 0);
    lv_obj_set_pos(latitude, 45, 7);

    longitude = lv_label_create(tiles);
    lv_obj_set_size(longitude, 200, 20);
    lv_obj_set_style_text_font(longitude, &lv_font_montserrat_16, 0);
    lv_obj_set_pos(longitude, 45, 23);

    // Map Tile 
    

    lv_group_add_obj(group, tiles);
    lv_group_add_obj(group, mainScreen);

    timer_main_scr = lv_timer_create(update_main_screen, UPDATE_MAINSCR_PERIOD, NULL);
    lv_timer_ready(timer_main_scr);

    lv_obj_add_event_cb(map, drawmap, LV_EVENT_DRAW_MAIN_END, NULL);
}

/**
 * @brief Update Main Screen
 *
 */
void update_main_screen(lv_timer_t *t)
{
    switch (act_tile)
    {
    case COMPASS:
#ifdef ENABLE_COMPASS
        heading = read_compass();
        lv_label_set_text_fmt(compass_heading, "%5d\xC2\xB0", heading);
        lv_img_set_angle(compass_img, heading * 10);
#endif
        lv_label_set_text(latitude, Latitude_formatString(GPS.location.lat()));
        lv_label_set_text(longitude, Longitude_formatString(GPS.location.lng()));
        break;
    case MAP:
        break;
    case SATTRACK:
        break;
    default:
        break;
    }
}
