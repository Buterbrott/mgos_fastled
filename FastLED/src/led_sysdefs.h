#ifndef __INC_LED_SYSDEFS_H
#define __INC_LED_SYSDEFS_H

#include "FastLED.h"

#include "fastled_config.h"

/// @file led_sysdefs.h
/// Determines which platform system definitions to include

#if defined(ESP8266)
#include "platforms/esp/8266/led_sysdefs_esp8266.h"
#elif defined(ESP32)
#include "platforms/esp/32/led_sysdefs_esp32.h"
#endif

#ifndef FASTLED_NAMESPACE_BEGIN
/// Start of the FastLED namespace
#define FASTLED_NAMESPACE_BEGIN
/// End of the FastLED namespace
#define FASTLED_NAMESPACE_END
/// "Using" directive for the namespace
#define FASTLED_USING_NAMESPACE
#endif

// Arduino.h needed for convenience functions digitalPinToPort/BitMask/portOutputRegister and the pinMode methods.
#ifdef ARDUINO
#include <Arduino.h>
#endif

/// Clock cycles per microsecond. 
/// Calculated using the F_CPU preprocessor define
#define CLKS_PER_US (F_CPU/1000000)

#endif
