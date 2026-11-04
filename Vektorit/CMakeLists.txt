cmake_minimum_required(VERSION 3.5)

project(Vektorit LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Vektorit main.cpp)

include(GNUInstallDirs)
install(TARGETS Vektorit
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
