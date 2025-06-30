// variant.h for ESP32-C3 SuperMini + LLCC68 module
#ifndef VARIANT_LLCC68_SUPERMINI_H
#define VARIANT_LLCC68_SUPERMINI_H

// Ensure no other radio types are defined
#ifdef USE_SX1262
  #undef USE_SX1262
#endif
#ifdef USE_SX1268
  #undef USE_SX1268
#endif

// Radio type: LLCC68 only
#ifndef USE_LLCC68
  #define USE_LLCC68
#endif

// SPI interface pins
#define SX126X_MISO    21  // Master In Slave Out
#define SX126X_MOSI    20  // Master Out Slave In
#define SX126X_SCK     7   // SPI Clock
#define SX126X_CS      6   // Chip Select (NSS) for LLCC68

#define LORA_SCK  SX126X_SCK
#define LORA_MOSI SX126X_MOSI
#define LORA_MISO SX126X_MISO
#define LORA_CS   SX126X_CS

#define SX126X_TXEN RADIOLIB_NC
#define SX126X_RXEN RADIOLIB_NC

// LLCC68 control pins
#define SX126X_BUSY  2   // BUSY pin
#define SX126X_RESET 10  // RESET pin
#define SX126X_DIO1  4   // DIO1 (interrupt)
#define LORA_DIO1    SX126X_DIO1
#define SX126X_DIO2_AS_RF_SWITCH     // module's DIO2 pin (a virtual pin)
#define SX126X_DIO3_TCXO_VOLTAGE 1.8 // module's DIO pin
#define SX126X_MAX_POWER 22
//#define SX126X_DIO0  RADIOLIB_NC
//#define SX126X_DIO2  RADIOLIB_NC
//#define SX126X_DIO3  RADIOLIB_NC

// SPI instance (optional, for ESP32-C3)
#define SPI_INTERFACES_COUNT 2
#define SPI_SCK    SX126X_SCK
#define SPI_MISO   SX126X_MISO
#define SPI_MOSI   SX126X_MOSI
#define SPI_CS     SX126X_CS

// Board-specific settings
#define HAS_RADIO 1      // Indicate radio presence
#define NO_OTA    1      // Disable OTA updates if not needed
#define HAS_SCREEN   0
#define USE_GPS      0   // No GPS

#endif // VARIANT_LLCC68_SUPERMINI_H

