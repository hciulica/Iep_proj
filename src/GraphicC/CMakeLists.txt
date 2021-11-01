#
add_library( GraphicC src/graphicc.hpp src/graphicc.cpp )
#
target_include_directories( Storage PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src" )

