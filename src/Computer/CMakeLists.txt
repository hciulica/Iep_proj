#Library dinamic
add_library( Computer src/Computer.hpp src/Computer.cpp )
#Build
target_include_directories( Computer PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src" )
