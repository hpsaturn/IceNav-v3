/**
 * @file power.cpp
 * @author Jordi Gauchía (jgauchia@gmx.es)
 * @brief  ESP32 Power Management functions
 * @version 0.1.8_Alpha
 * @date 2024-09
 */

#include "power.hpp"

#ifdef TDECK_ESP32S3
  extern const uint8_t BOARD_BOOT_PIN;
#endif

/**
 * @brief Deep Sleep Mode
 * 
 */
void powerDeepSeep()
{
  esp_bluedroid_disable();
  esp_bt_controller_disable();
  esp_wifi_stop();
  esp_deep_sleep_disable_rom_logging();
  delay(10);
#ifdef TDECK_ESP32S3
  // If you need other peripherals to maintain power, please set the IO port to hold
  // gpio_hold_en((gpio_num_t)BOARD_POWERON);
  // gpio_deep_sleep_hold_en();
  esp_sleep_enable_ext1_wakeup(1ull << BOARD_BOOT_PIN, ESP_EXT1_WAKEUP_ANY_LOW);
#endif
  esp_deep_sleep_start();
}

/**
 * @brief Sleep Mode Timer
 * 
 * @param millis 
 */
void powerLightSleepTimer(int millis)
{
  esp_sleep_enable_timer_wakeup(millis * 1000);
  esp_err_t rtc_gpio_hold_en(gpio_num_t GPIO_NUM_5);
  esp_light_sleep_start();
}

/**
 * @brief Sleep Mode
 * 
 */
void powerLightSleep()
{
#ifdef TDECK_ESP32S3
  esp_sleep_enable_ext1_wakeup(1ull << BOARD_BOOT_PIN, ESP_EXT1_WAKEUP_ANY_LOW);
#endif
  esp_light_sleep_start();
}

void powerOffScreen()
{
#ifdef TDECK_ESP32S3
  // LilyGo T-Deck control backlight chip has 16 levels of adjustment range
  // for (int i = 16; i > 0; --i) {
  //   setBrightness(i);
  //   delay(30);
  // }
  tft.setBrightness(0);
  // tft.getPanel()->setSleep(true);
  // TODO: we could need a complete panel power off?
#else
  setBrightness(0);
#endif
}

/**
 * @brief Core light suspend and TFT off
 */
void deviceSuspend()
{
  int brightness = tft.getBrightness();
  powerOffScreen();
  powerLightSleep();
  tft.setBrightness(brightness);
}

/**
 * @brief Power off peripherals and deepsleep
 */
void deviceShutdown()
{
  powerOffPeripherals();
  powerDeepSeep();
}

/**
 * @brief Power off peripherals devices
 */
void powerOffPeripherals()
{
  powerOffScreen();
  tft.getPanel()->setSleep(true); // sounds that it is not working
  tft.writecommand(0x10);  // set display enter sleep mode
  SPI.end();
  Wire.end();
}

/**
 * @brief On Mode
 * 
 */
void powerOn()
{
#ifdef DISABLE_RADIO
  WiFi.disconnect(true);
  WiFi.mode(WIFI_OFF);
  btStop();
  esp_wifi_stop();
  esp_bt_controller_disable();
#endif
}
