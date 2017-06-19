/*
Copyright (C) 2017 Stephane Raux. Distributed under the MIT license.
*/

#ifndef CLUE_LOG_H
#define CLUE_LOG_H

#include "config.h"
#include "string.h"

#ifdef __cplusplus
extern "C" {
#endif

enum ClueLogLevelTag {
    ClueLogLevelError,
    ClueLogLevelWarn,
    ClueLogLevelInfo,
    ClueLogLevelDebug,
    ClueLogLevelTrace
};

typedef enum ClueLogLevelTag ClueLogLevel;

typedef void (*ClueLogFn)(ClueLogLevel level, ClueStringView msg,
    ClueStringView file, unsigned int line, ClueStringView target);

#ifdef __cplusplus
}
#endif

#endif
