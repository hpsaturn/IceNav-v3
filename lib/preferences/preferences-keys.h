#define CONFIG_KEYS_LIST                 \
  X(KMAP_ROT, "Map_rot", BOOL)           \
  X(KMAP_SPEED, "Map_speed", BOOL)       \
  X(KMAP_SCALE, "Map_scale", BOOL)       \
  X(KMAP_COMPASS, "Map_compass", BOOL)   \
  X(KMAP_VECTOR, "Map_vector", BOOL)     \
  X(KMAP_MODE, "Map_mode", BOOL)         \
  X(KCOMP_X, "Compass_X", INT)           \
  X(KCOMP_Y, "Compass_Y", INT)           \
  X(KCOORD_X, "Coords_X", INT)           \
  X(KCOORD_Y, "Coords_Y", INT)           \
  X(KALTITUDE_X, "Altitude_X", INT)      \
  X(KALTITUDE_Y, "Altitude_Y", INT)      \
  X(KSPEED_X, "Speed_X", INT)            \
  X(KSPEED_Y, "Speed_Y", INT)            \
  X(KCOMP_OFFSET_X, "C_offset_x", FLOAT) \
  X(KCOMP_OFFSET_Y, "C_offset_y", FLOAT) \
  X(KCOMP_ROT, "Compass_rot", BOOL)      \
  X(KGPS_SPEED, "GPS_speed", SHORT)      \
  X(KGPS_RATE, "GPS_rate", SHORT)        \
  X(KWEB_FILE, "Web_file", BOOL)         \
  X(KUSER, "-----", UNKNOWN)             \
  X(KDEF_ZOOM, "defZoom", UINT)          \
  X(KGPS_TX, "gpsTX", UINT)              \
  X(KGPS_RX, "gpsRX", UINT)              \
  X(KLAT_DFL, "defLAT", DOUBLE)          \
  X(KLON_DFL, "defLON", DOUBLE)          \
  X(KDEF_BRIGT, "defBright", UINT)       \
  X(KVMAX_BATT, "VmaxBatt", FLOAT)       \
  X(KVMIN_BATT, "VminBatt", FLOAT)       \
  X(KCOUNT, "KCOUNT", UNKNOWN)
