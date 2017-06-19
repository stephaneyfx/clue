// Copyright (C) 2017 Stephane Raux. Distributed under the MIT license.

#ifndef CLUE_HELPERS_STRING_HPP
#define CLUE_HELPERS_STRING_HPP

#include <cstring>
#include <clue/config.h>
#include <clue/string.h>

namespace clue {
inline ClueStringView toStringView(const char* s) {
    return ClueStringView {s, std::strlen(s)};
}
}

#endif

