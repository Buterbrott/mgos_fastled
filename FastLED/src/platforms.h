#ifndef __INC_PLATFORMS_H
#define __INC_PLATFORMS_H

#include "FastLED.h"

#include "fastled_config.h"

/// @file platforms.h
/// Determines which platforms headers to include

#if defined(ESP8266)
#include "platforms/esp/8266/fastled_esp8266.h"
#elif defined(ESP32)
#include "platforms/esp/32/fastled_esp32.h"
#endif

#endif
