#
add_library( MotherBoard src/MotherBoard.hpp src/MotherBoard.cpp )
#
target_include_directories( MotherBoard PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src" )

