#ifndef _BOARD_CONFIG_H_
#define _BOARD_CONFIG_H_

#include <driver/gpio.h>

#define AUDIO_INPUT_SAMPLE_RATE 24000
#define AUDIO_OUTPUT_SAMPLE_RATE 24000

#define AUDIO_I2S_GPIO_MCLK GPIO_NUM_7
#define AUDIO_I2S_GPIO_WS GPIO_NUM_5
#define AUDIO_I2S_GPIO_BCLK GPIO_NUM_4
#define AUDIO_I2S_GPIO_DIN GPIO_NUM_6
#define AUDIO_I2S_GPIO_DOUT GPIO_NUM_42

#define AUDIO_CODEC_PA_PIN GPIO_NUM_NC // Power Amplifier control pin, not used in this board
#define AUDIO_CODEC_I2C_SDA_PIN GPIO_NUM_2
#define AUDIO_CODEC_I2C_SCL_PIN GPIO_NUM_1
#define AUDIO_CODEC_ES8311_ADDR ES8311_CODEC_DEFAULT_ADDR

// #define I2C_ADDRESS         ESP_IO_EXPANDER_I2C_TCA9554_ADDRESS_000
#define BOOT_BUTTON_GPIO GPIO_NUM_0

// LCD display configuration for ST7789 SPI
#define LCD_CS_PIN GPIO_NUM_NC      // SPI CS pin
#define LCD_DC_PIN GPIO_NUM_9       // DC/Command pin 
#define LCD_RST GPIO_NUM_48      // Reset pin
#define LCD_MOSI GPIO_NUM_13     // SPI MOSI pin
#define LCD_SCLK GPIO_NUM_14    // SPI Clock pin

// Display dimensions and settings for CrabSmartBox v1
#define DISPLAY_WIDTH 240
#define DISPLAY_HEIGHT 240
#define DISPLAY_MIRROR_X false
#define DISPLAY_MIRROR_Y false
#define DISPLAY_SWAP_XY false

#define DISPLAY_OFFSET_X  0
#define DISPLAY_OFFSET_Y  0

#define DISPLAY_BACKLIGHT_PIN GPIO_NUM_NC
#define DISPLAY_BACKLIGHT_OUTPUT_INVERT false

#endif // _BOARD_CONFIG_H_
