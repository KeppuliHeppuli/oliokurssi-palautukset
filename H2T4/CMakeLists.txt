cmake_minimum_required(VERSION 3.5)

project(H2T4 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(H2T4 main.cpp
    person.h person.cpp)

include(GNUInstallDirs)
install(TARGETS H2T4
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
