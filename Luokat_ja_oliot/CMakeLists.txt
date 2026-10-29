cmake_minimum_required(VERSION 3.5)

project(Luokat_ja_oliot LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Luokat_ja_oliot main.cpp
    henkilo.h henkilo.cpp)

include(GNUInstallDirs)
install(TARGETS Luokat_ja_oliot
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
