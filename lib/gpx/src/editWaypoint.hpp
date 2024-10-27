/**
 * @file editWaypoint.hpp
 * @author Jordi Gauchía (jgauchia@gmx.es)
 * @brief  Edit Waypoint functions
 * @version 0.1.8_Alpha
 * @date 2024-10
 */

#ifndef EDITWAYPOINT_HPP
#define EDITWAYPOINT_HPP

#include "SD.h"
#include "FS.h"
#include "tft.hpp"
#include "storage.hpp"
#include "globalGuiDef.h"
#include "globalGpxDef.h"

void editWaypointName(char* oldName, char *newName);

#endif