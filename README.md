[![MIT license](https://img.shields.io/badge/license-MIT-blue.svg)](https://opensource.org/licenses/MIT)

# Purpose

Helpers to wrap C++ code in a C interface.

# Build dependencies

- CMake
- C++14 compiler

# Build

The instructions below assume the Ninja generator is used, but any other generator ought to work. The `install` and `package` targets are also provided.

```sh
git clone --recursive https://github.com/stephaneyfx/clue.git
cd clue
mkdir build
cd build
cmake -G Ninja ..
ninja
```

# Platform support

All, to the extent of the availability of the dependencies.
