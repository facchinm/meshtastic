#ifndef _LUTOPIA_FAN_H_
#define _LUTOPIA_FAN_H_

#include "WVariant.h"

#define VARIANT_MCK (64000000ul)
#define USE_LFXO

#define PINS_COUNT (33)
#define NUM_DIGITAL_PINS (33)
#define NUM_ANALOG_INPUTS (8)
#define NUM_ANALOG_OUTPUTS (0)

#define D0 (0ul)
#define D1 (1ul)
#define D2 (2ul)
#define D3 (3ul)
#define D4 (4ul)
#define D5 (5ul)
#define D6 (6ul)
#define D7 (7ul)
#define D8 (8ul)
#define D9 (9ul)
#define D10 (10ul)
#define D11 (15ul)
#define D12 (16ul)
#define D13 (17ul)
#define D14 (18ul)
#define D15 (19ul)
#define D16 (20ul)
#define D17 (21ul)
#define D18 (22ul)
#define D19 (23ul)

#define PIN_A0 D0
#define PIN_A1 D1
#define PIN_A2 D2
#define PIN_A3 D3
#define PIN_A4 D4
#define PIN_A5 D5
#define PIN_VBAT (32)
#define VBAT_ENABLE (14)

static const uint8_t A0 = PIN_A0;
static const uint8_t A1 = PIN_A1;
static const uint8_t A2 = PIN_A2;
static const uint8_t A3 = PIN_A3;
static const uint8_t A4 = PIN_A4;
static const uint8_t A5 = PIN_A5;

#define ADC_RESOLUTION 12

#define LED_STATE_ON (0)
#define LED_RED (11)
#define LED_GREEN (13)
#define LED_BLUE (12)

#define PIN_LED1 LED_GREEN
#define PIN_LED2 LED_BLUE
#define PIN_LED3 LED_RED

#define SPI_INTERFACES_COUNT 2

#define PIN_SPI_MISO D9
#define PIN_SPI_MOSI D10
#define PIN_SPI_SCK D8

static const uint8_t SS = D14;
static const uint8_t MOSI = PIN_SPI_MOSI;
static const uint8_t MISO = PIN_SPI_MISO;
static const uint8_t SCK = PIN_SPI_SCK;

#define HAS_SCREEN 1
#define HAS_SPI_TFT 1
#define USE_ST7789
#define ST7789_NSS D3
#define ST7789_RS D13
#define ST7789_SDA D10
#define ST7789_SCK D8
#define ST7789_RESET D16
#define ST7789_MISO (-1)
#define ST7789_BUSY (-1)
#define VTFT_LEDA D0
#define TFT_BACKLIGHT_ON HIGH
#define ST7789_SPI_HOST SPI1_HOST
#define SPI_FREQUENCY 10000000
#define SPI_READ_FREQUENCY 10000000
#define TFT_WIDTH 240
#define TFT_HEIGHT 240
#define TFT_OFFSET_X 0
#define TFT_OFFSET_Y 0

#define PIN_SPI1_MISO ST7789_MISO
#define PIN_SPI1_MOSI ST7789_SDA
#define PIN_SPI1_SCK ST7789_SCK

#define HAS_SDCARD
#define SDCARD_CS D11

#define USE_SX1262
#define SX126X_CS D14
#define LORA_CS D14
#define SX126X_RXEN D15
#define SX126X_TXEN RADIOLIB_NC
#define SX126X_RESET D17
#define SX126X_DIO1 D18
#define SX126X_BUSY D19
#define SX126X_DIO2_AS_RF_SWITCH
#define SX126X_DIO3_TCXO_VOLTAGE 1.8

#define I2C_NO_RESCAN
#define WIRE_INTERFACES_COUNT 1
#define PIN_WIRE_SDA D4
#define PIN_WIRE_SCL D5

static const uint8_t SDA = PIN_WIRE_SDA;
static const uint8_t SCL = PIN_WIRE_SCL;

#define PIN_SERIAL1_TX D6
#define PIN_SERIAL1_RX D7
#define PIN_SERIAL2_RX (-1)
#define PIN_SERIAL2_TX (-1)

#define BATTERY_PIN PIN_VBAT
#define ADC_MULTIPLIER (3)
#define ADC_CTRL VBAT_ENABLE
#define ADC_CTRL_ENABLED LOW
#define EXT_CHRG_DETECT (25)
#define EXT_CHRG_DETECT_VALUE LOW
#define HICHG (24)
#define BATTERY_SENSE_RESOLUTION_BITS (10)

#define HAS_NEOPIXEL
#define NEOPIXEL_COUNT 7
#define NEOPIXEL_DATA D12
#define NEOPIXEL_TYPE (NEO_GRB + NEO_KHZ800)

#define INPUTBROKER_EXPRESSLRSFIVEWAY_TYPE
#define PIN_JOYSTICK D1
// Hardware.md ADC ladder values are documented as 10-bit centers.
// Scale to the 12-bit ADC range used by this variant.
// Provisional logical mapping: A=UP, E=DOWN, B=LEFT, D=RIGHT, C=OK.
#define JOYSTICK_ADC_VALS /*UP*/ 740, /*DOWN*/ 3132, /*LEFT*/ 1308, /*RIGHT*/ 2812, /*OK*/ 2048, /*IDLE*/ 4095

#define PIN_QSPI_SCK (24)
#define PIN_QSPI_CS (25)
#define PIN_QSPI_IO0 (26)
#define PIN_QSPI_IO1 (27)
#define PIN_QSPI_IO2 (28)
#define PIN_QSPI_IO3 (29)

#define EXTERNAL_FLASH_DEVICES P25Q16H
#define EXTERNAL_FLASH_USE_QSPI

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
}
#endif

#endif
