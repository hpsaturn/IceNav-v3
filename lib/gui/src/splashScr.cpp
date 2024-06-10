/**
 * @file splashScr.hpp
 * @author Jordi Gauchía (jgauchia@gmx.es)
 * @brief  Splash screen - NOT LVGL
 * @version 0.1.8
 * @date 2024-06
 */

#include "splashScr.hpp"

static unsigned long millisActual = 0;

/**
 * @brief Splash screen
 *
 */
void splashScreen()
{
  tft.fillScreen(TFT_BLACK);
  millisActual = millis();
  setBrightness(0);

  static uint16_t pngHeight = 0;
  static uint16_t pngWidth = 0;

  getPngSize(SPIFFS, logoFile,&pngWidth,&pngHeight);
  tft.drawPngFile(SPIFFS, logoFile, (tft.width() / 2) - (pngWidth/2), (tft.height() / 2) - pngHeight);

  char statusString[50] = "";
  tft.setTextSize(1);
  tft.setTextColor(TFT_YELLOW, TFT_BLACK);

  memset(&statusString[0], 0, sizeof(statusString));
  sprintf(statusString, statusLine1, ESP.getChipModel(), ESP.getCpuFreqMHz());
  tft.drawString(statusString, 0, TFT_HEIGHT - 50 );

  memset(&statusString[0],0, sizeof(statusString));
  sprintf(statusString, statusLine2, (ESP.getFreeHeap() / 1024), (ESP.getFreeHeap() * 100) / ESP.getHeapSize());
  tft.drawString(statusString, 0, TFT_HEIGHT - 40 );

  memset(&statusString[0], 0, sizeof(statusString));
  sprintf(statusString, statusLine3, ESP.getPsramSize(), ESP.getPsramSize() - ESP.getFreePsram());
  tft.drawString(statusString, 0, TFT_HEIGHT - 30);

  memset(&statusString[0], 0, sizeof(statusString));
  sprintf(statusString, statusLine4, String(VERSION), String(REVISION));
  tft.drawString(statusString, 0, TFT_HEIGHT - 20 );

  memset(&statusString[0], 0, sizeof(statusString));
  sprintf(statusString, statusLine5,String(FLAVOR));
  tft.drawString(statusString, 0, TFT_HEIGHT - 10 );

  memset(&statusString[0], 0, sizeof(statusString));
  tft.setTextColor(TFT_WHITE, TFT_BLACK);

  for (uint8_t fadeIn = 0; fadeIn <= UINT8_MAX - 1; fadeIn++)
  {
    setBrightness(fadeIn);
    millisActual = millis();
    while (millis() < millisActual + 15)
      ;
  }
  for (uint8_t fadeOut = UINT8_MAX; fadeOut > 0; fadeOut--)
  {
    setBrightness(fadeOut);
    millisActual = millis();
    while (millis() < millisActual + 15)
      ;
  }
  while (millis() < millisActual + 100)
    ;

  tft.fillScreen(TFT_BLACK);
  setBrightness(255);
}
