/**
 * @file globalGpxDef.h
 * @brief  Global GPX Variables
 * @version 0.1.8
 * @date 2024-06
 */


#ifndef GLOBALWPTDEF_H
#define GLOBALWPTDEF_H

#include <pgmspace.h>
#include "FS.h"

/** 
 * @Brief GPX File
 *
 */

extern File gpxFile;

/**
 * @brief Waypoint Structure
 *
 */
struct wayPoint
{
  double lat;
  double lon;
  float  ele;
  char*  time;
  char*  name;
  char*  desc;
  char*  src;
  char*  sym;
  char*  type;
  int    sat;
  float  hdop;
  float  vdop;
  float  pdop;
};

/**
 * @Brief gpxType definition
 *
 */
static const struct 
{
  const char* header; 
  const char* footer; 
} gpxType PROGMEM = { "<?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"yes\"?>\r\n"
                      "<gpx xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" "
                      "xmlns=\"http://www.topografix.com/GPX/1/1\" version=\"1.1\" "
                      "creator=\"IceNav\" "
                      "xsi:schemaLocation=\"http://www.topografix.com/GPX/1/1 http://www.topografix.com/GPX/1/1/gpx.xsd\">"
                      , "</gpx>" };

/**
 * @Brief WPT label definition
 *
 */
static const struct
{
  const char* open;
  const char* close;
} gpxWPT PROGMEM = { "<wpt" , "</wpt>" };

/**
 * @Brief wptType definition
 *
 */
static const struct
{
  const char* lat;
  const char* lon;
  const char* ele;
  const char* time;
  const char* name;
  const char* desc;
  const char* src;
  const char* sym;
  const char* type;
  const char* sat;
  const char* hdop;
  const char* vdop;
  const char* pdop;
} wptType PROGMEM = { " lat=\"%f\""
                     , "lon=\"%f\">"
                     , " <ele>%f</ele>"
                     , " <time>%s</time>"
                     , " <name>%s</name>"
                     , " <desc>%s</desc>"
                     , " <src>IceNav</src>"
                     , " <sym>%s</sym>"
                     , " <type>%s</type>"
                     , " <sat>%d</sat>"
                     , " <hdop>%f</hdop>"
                     , " <vdop>%f</vdop>"
                     , " <pdop>%f</pdop>" };

#endif