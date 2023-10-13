/**
 * @file compass.h
 * @author Jordi Gauchía (jgauchia@jgauchia.com)
 * @brief  Compass screen events
 * @version 0.1.6
 * @date 2023-06-14
 */

bool widget_selected = false;

/**
 * @brief Update compass heading label
 *
 * @param event
 */
static void update_heading(lv_event_t *event)
{
#ifdef ENABLE_COMPASS
    lv_obj_t *compass = lv_event_get_target(event);
    lv_label_set_text_fmt(compass, "%5d\xC2\xB0", heading);
    lv_img_set_angle(compass_img, -(heading * 10));
#endif
}

/**
 * @brief Update latitude label
 *
 * @param event
 */
static void update_latitude(lv_event_t *event)
{
    lv_obj_t *lat = lv_event_get_target(event);
    lv_label_set_text_static(lat, Latitude_formatString(GPS.location.lat()));
}

/**
 * @brief Update longitude label
 *
 * @param event
 */
static void update_longitude(lv_event_t *event)
{
    lv_obj_t *lon = lv_event_get_target(event);
    lv_label_set_text_static(lon, Longitude_formatString(GPS.location.lng()));
}

/**
 * @brief Upate altitude label
 *
 * @param event
 */
static void update_altitude(lv_event_t *event)
{
    lv_obj_t *alt = lv_event_get_target(event);
    lv_label_set_text_fmt(altitude, "%4d m.", (int)GPS.altitude.meters());
}

/**
 * @brief Update speed label
 *
 * @param event
 */
static void update_speed(lv_event_t *event)
{
    lv_obj_t *speed = lv_event_get_target(event);
    lv_label_set_text_fmt(speed, "%3d Km/h", (int)GPS.speed.kmph());
}

/**
 * @brief Unselect widget
 *
 * @param event
 */
static void unselect_widget(lv_event_t *event)
{
    lv_obj_t *obj = lv_event_get_target(event);
    if (widget_selected)
    {
        unselect_obj(obj);
        widget_selected = false;
    }
}

/**
 * @brief Drag compass widget event
 *
 * @param event
 */
static void drag_compass_widget(lv_event_t *event)
{
    // lv_obj_clear_flag(tiles, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_t *obj = lv_event_get_target(event);
    if (!widget_selected)
    {
        select_obj(obj);
        widget_selected = true;
    }

    lv_indev_t *indev = lv_indev_get_act();
    if (indev == NULL)
        return;

    lv_point_t vect;
    lv_indev_get_vect(indev, &vect);

    lv_coord_t x = lv_obj_get_x(obj) + vect.x;
    lv_coord_t y = lv_obj_get_y(obj) + vect.y;
    lv_obj_set_pos(obj, x, y);
    save_compass_pos(x, y);
}

/**
 * @brief Drag position widget event
 *
 * @param event
 */
static void drag_position_widget(lv_event_t *event)
{
    // lv_obj_clear_flag(tiles, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_t *obj = lv_event_get_target(event);
    if (!widget_selected)
    {
        select_obj(obj);
        widget_selected = true;
    }

    lv_indev_t *indev = lv_indev_get_act();
    if (indev == NULL)
        return;

    lv_point_t vect;
    lv_indev_get_vect(indev, &vect);

    lv_coord_t x = lv_obj_get_x(obj) + vect.x;
    lv_coord_t y = lv_obj_get_y(obj) + vect.y;
    lv_obj_set_pos(obj, x, y);
  save_coord_pos(x, y);
}

/**
 * @brief Drag altitude widget event
 *
 * @param event
 */
static void drag_altitude_widget(lv_event_t *event)
{
    // lv_obj_clear_flag(tiles, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_t *obj = lv_event_get_target(event);
    if (!widget_selected)
    {
        select_obj(obj);
        widget_selected = true;
    }

    lv_indev_t *indev = lv_indev_get_act();
    if (indev == NULL)
        return;

    lv_point_t vect;
    lv_indev_get_vect(indev, &vect);

    lv_coord_t x = lv_obj_get_x(obj) + vect.x;
    lv_coord_t y = lv_obj_get_y(obj) + vect.y;
    lv_obj_set_pos(obj, x, y);
    save_altitude_pos(x, y);
}

/**
 * @brief Drag speed widget event
 *
 * @param event
 */
static void drag_speed_widget(lv_event_t *event)
{
    // lv_obj_clear_flag(tiles, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_t *obj = lv_event_get_target(event);
    if (!widget_selected)
    {
        select_obj(obj);
        widget_selected = true;
    }

    lv_indev_t *indev = lv_indev_get_act();
    if (indev == NULL)
        return;

    lv_point_t vect;
    lv_indev_get_vect(indev, &vect);

    lv_coord_t x = lv_obj_get_x(obj) + vect.x;
    lv_coord_t y = lv_obj_get_y(obj) + vect.y;
    lv_obj_set_pos(obj, x, y);
    save_speed_pos(x, y);
}