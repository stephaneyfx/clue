// Copyright (C) 2017 Stephane Raux. Distributed under the MIT license.

#ifndef CLUE_ASSERT_HPP
#define CLUE_ASSERT_HPP

#include <cassert>
#include <string>
#include "config.h"

#define CLUE_ASSERT(P) ((P) ? static_cast<void>(0) : (assert(P),\
    ::clue::throwLogicError("Assertion failed: " #P, __FILE__, __LINE__,\
    __func__)))

namespace clue {
CLUE_API [[noreturn]] void throwLogicError(const std::string& msg,
    const std::string& file, unsigned int line, const std::string& func);
}

#endif
