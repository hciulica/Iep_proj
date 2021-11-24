#
add_library( Case src/Case.hpp src/Case.cpp src/casergb.cpp src/casergb.hpp)
#
target_include_directories( Case PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src" )

