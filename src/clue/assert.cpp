// Copyright (C) 2017 Stephane Raux. Distributed under the MIT license.

#include <sstream>
#include <stdexcept>
#include "assert.hpp"

namespace clue {
[[noreturn]] void throwLogicError(const std::string& msg,
        const std::string& file, unsigned int line, const std::string& func) {
    std::ostringstream os;
    os << msg << " in " << file << " at line " << line << " in " << func;
    throw std::logic_error(os.str());
}
}
