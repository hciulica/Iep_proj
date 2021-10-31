#
add_library( Storage src/Storage.hpp src/Storage.cpp )
#
target_include_directories( Storage PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src" )

