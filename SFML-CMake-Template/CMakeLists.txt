# CMakeList.txt : CMake project for SFML-CMake-Template, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (SFML-CMake-Template "SFML-CMake-Template.cpp" "SFML-CMake-Template.h")
target_link_libraries(SFML-CMake-Template ${CMAKE_SOURCE_DIR}/library/sfml-graphics.lib)
target_link_libraries(SFML-CMake-Template ${CMAKE_SOURCE_DIR}/library/sfml-audio.lib)
target_link_libraries(SFML-CMake-Template ${CMAKE_SOURCE_DIR}/library/sfml-system.lib)
target_link_libraries(SFML-CMake-Template ${CMAKE_SOURCE_DIR}/library/sfml-window.lib)

include_directories(${CMAKE_SOURCE_DIR}/include)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET SFML-CMake-Template PROPERTY CXX_STANDARD 20)
endif()

set_property(TARGET SFML-CMake-Template PROPERTY CXX_STANDARD_REQUIRED ON)
# TODO: Add tests and install targets if needed.
