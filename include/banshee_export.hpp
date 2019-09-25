#pragma once

#ifdef __WINDOWS__
    #if defined(BANSHEE_MAKE)
        #define BANSHEE_EXPORT __declspec(dllexport)
    #else
        #define BANSHEE_EXPORT __declspec(dllexport)
    #endif
#else
    #define BANSHEE_EXPORT
#endif
