#include "variant.h"
#include "configuration.h"
#include "nrf.h"
#include "wiring_constants.h"
#include "wiring_digital.h"
#include <map>
#include <memory>
#include <stddef.h>
#include <stdint.h>
const uint32_t g_ADigitalPinMap[] = {
  // D0 .. D10
    2,  // D0  is P0.02 (A0)
    3,  // D1  is P0.03 (A1)
    28, // D2  is P0.28 (A2)
    29, // D3  is P0.29 (A3)
    4,  // D4  is P0.04 (A4,SDA)
    5,  // D5  is P0.05 (A5,SCL)
    43, // D6  is P1.11 (TX)
    44, // D7  is P1.12 (RX)
    45, // D8  is P1.13 (SCK)
    46, // D9  is P1.14 (MISO)
    47, // D10 is P1.15 (MOSI)

    // XIAO RGB LED
    26, // D11 is P0.26 (LED RED)
    6,  // D12 is P0.06 (LED BLUE)
    30, // D13 is P0.30 (LED GREEN)
    14, // D14 is P0.14 (READ_BAT)

    // XIAO extended pads used by the Mother board
    15, // D11 is P0.15 (microSD CS)
    19, // D12 is P0.19 (NeoPixel data)
    33, // D13 is P1.01 (TFT D/C)
    9,  // D14 is P0.09 (LoRa NSS)
    10, // D15 is P0.10 (LoRa RF switch)
    31, // D16 is P0.31 (TFT reset / VBAT sense)
    35, // D17 is P1.03 (LoRa reset)
    37, // D18 is P1.05 (LoRa DIO1)
    39, // D19 is P1.07 (LoRa busy)

    // XIAO charger control
    13, // D24 is P0.13 (HICHG)
    17, // D25 is P0.17 (~CHG)

    // XIAO QSPI flash
    21, // D26 is P0.21 (QSPI_SCK)
    25, // D27 is P0.25 (QSPI_CSN)
    20, // D26 is P0.20 (QSPI_SIO_0 DI)
    24, // D27 is P0.24 (QSPI_SIO_1 DO)
    22, // D28 is P0.22 (QSPI_SIO_2 WP)
    23, // D29 is P0.23 (QSPI_SIO_3 HOLD)

    // NFC
    9,  // D30 is P0.09 (NFC1)
    10, // D31 is P0.10 (NFC2)

    // VBAT
    31, // D32 is P0.10 (VBAT)
};

/*
  Copyright (c) 2014-2015 Arduino LLC.  All right reserved.
  Copyright (c) 2016 Sandeep Mistry All right reserved.
  Copyright (c) 2018, Adafruit Industries (adafruit.com)

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

void initVariant()
{
    // Set BQ25101 ISET to 100mA instead of 50mA
    pinMode(HICHG, OUTPUT);
    digitalWrite(HICHG, LOW);

    pinMode(SX126X_CS, OUTPUT);
    digitalWrite(SX126X_CS, HIGH);

    pinMode(ST7789_NSS, OUTPUT);
    digitalWrite(ST7789_NSS, HIGH);

    pinMode(SDCARD_CS, OUTPUT);
    digitalWrite(SDCARD_CS, HIGH);

    // LEDs
    pinMode(PIN_LED1, OUTPUT);
    ledOff(PIN_LED1);

    pinMode(PIN_LED2, OUTPUT);
    ledOff(PIN_LED2);

    pinMode(PIN_LED3, OUTPUT);
    ledOff(PIN_LED3);

    pinMode(VTFT_LEDA, OUTPUT);
    digitalWrite(VTFT_LEDA, LOW);
}
