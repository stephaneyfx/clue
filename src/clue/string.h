/*
Copyright (C) 2017 Stephane Raux. Distributed under the MIT license.
*/

#ifndef CLUE_STRING_H
#define CLUE_STRING_H

#include <stddef.h>
#include "config.h"

#ifdef __cplusplus
extern "C" {
#endif

struct ClueStringViewTag {
    const char* s;
    size_t len;
};

typedef struct ClueStringViewTag ClueStringView;

#ifdef __cplusplus
}
#endif

#endif
