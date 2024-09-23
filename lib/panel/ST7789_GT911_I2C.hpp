/**
 * @file ST77899_GT911_I2C.hpp
 * @author Jordi Gauchía (jgauchia@gmx.es) and Antonio Vanegas @Hpsturn
 * @brief  LOVYANGFX TFT driver for ST7789 SPI With GT911 Touch controller
 * @version 0.1.8_Alpha
 * @date 2024-09
 */

#ifndef ST7789_GT911_I2C_HPP
#define ST7789_GT911_I2C_HPP

#define LGFX_USE_V1

#define TOUCH_INPUT

#include "LovyanGFX.hpp"

extern const uint8_t TFT_SPI_SCLK;
extern const uint8_t TFT_SPI_MOSI;
extern const uint8_t TFT_SPI_MISO;
extern const uint8_t TFT_SPI_DC;
extern const uint8_t TFT_SPI_CS;
extern const uint8_t TFT_SPI_RST;
extern const uint8_t TCH_I2C_PORT;
extern const uint8_t TCH_I2C_SDA;
extern const uint8_t TCH_I2C_SCL;
extern const uint8_t TCH_I2C_INT;
extern const bool TFT_INVERT;

class LGFX : public lgfx::LGFX_Device
{
  lgfx::Panel_ST7789 _panel_instance;
  lgfx::Bus_SPI _bus_instance;
  lgfx::Touch_GT911 _touch_instance;

public:
  LGFX(void)
  {
    {
      auto cfg = _bus_instance.config();
      cfg.spi_host = SPI2_HOST;
      cfg.spi_mode = 0;
      cfg.freq_write = 40000000;
      cfg.freq_read = 20000000;
      cfg.spi_3wire = false;
      cfg.use_lock = false;
      cfg.dma_channel = SPI_DMA_CH_AUTO;
      cfg.pin_sclk = TFT_SPI_SCLK;
      cfg.pin_mosi = TFT_SPI_MOSI;
      cfg.pin_miso = TFT_SPI_MISO;
      cfg.pin_dc = TFT_SPI_DC;
      _bus_instance.config(cfg);
      _panel_instance.setBus(&_bus_instance);
    }

    {
      auto cfg = _panel_instance.config();
      cfg.pin_cs = TFT_SPI_CS;
      cfg.pin_rst = TFT_SPI_RST;
      cfg.pin_busy = -1;
      cfg.panel_width = 320;
      cfg.panel_height = 240;
      cfg.memory_width = 320;
      cfg.memory_height = 240;
      cfg.offset_x = 0;
      cfg.offset_y = 0;
      cfg.offset_rotation = 0;
      cfg.dummy_read_pixel = 8;
      cfg.dummy_read_bits = 1;
      cfg.readable = true;
      cfg.invert = false;
      cfg.rgb_order = false;
      cfg.dlen_16bit = false;
      #ifdef SPI_SHARED
      cfg.bus_shared = true;
      #endif
      #ifndef SPI_SHARED
      cfg.bus_shared = false;
      #endif
      _panel_instance.config(cfg);
    }

    {
      auto cfg = _touch_instance.config();

      cfg.x_min = 0;
      cfg.x_max = 320;
      cfg.y_min = 0;
      cfg.y_max = 480;
      cfg.pin_int = TCH_I2C_INT;
      cfg.bus_shared = true;
      cfg.offset_rotation = 0;

      cfg.i2c_port = TCH_I2C_PORT;
      cfg.i2c_addr = 0x5D;   // If doesn't works try 0x14
      cfg.pin_sda = TCH_I2C_SDA;
      cfg.pin_scl = TCH_I2C_SCL;
      cfg.freq = 800000UL;

      _touch_instance.config(cfg);
      _panel_instance.setTouch(&_touch_instance);
    }
    setPanel(&_panel_instance);
  }
};

#endif
