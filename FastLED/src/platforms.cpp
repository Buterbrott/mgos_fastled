/// @file platforms.cpp
/// Platform-specific functions and variables

/// Disables pragma messages and warnings
#define FASTLED_INTERNAL


// Interrupt handlers cannot be defined in the header.
// They must be defined as C functions, or they won't
// be found (due to name mangling), and thus won't
// override any default weak definition.

// FASTLED_NAMESPACE_BEGIN
// FASTLED_NAMESPACE_END
