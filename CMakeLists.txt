cmake_minimum_required(VERSION 3.8.2)
project(clue VERSION 0.1.0)
include(recmake/recmake.cmake)
recmkConfigureProject()
add_subdirectory(src)
recmkInstallProject()
recmkPackageProject()
include(CPack)
