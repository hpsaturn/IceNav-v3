/**
 * @file storage.hpp
 * @author Jordi Gauchía (jgauchia@gmx.es)
 * @brief  Storage definition and functions
 * @version 0.1.8
 * @date 2024-05
 */

#ifndef STORAGE_HPP
#define STORAGE_HPP

#include <FS.h>
#include <SD.h>
#include <SPIFFS.h>

#ifdef MAKERF_ESP32S3
static SPIClass spiSD = SPIClass(HSPI);
static uint32_t sdFreq = 10000000;
#else
static SPIClass spiSD = SPIClass(VSPI);
static uint32_t sdFreq = 40000000;
#endif

extern bool isSdLoaded;

void initSD();
void initSPIFFS();

#endif