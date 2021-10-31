#Cmake
cmake_minimum_required( VERSION 3.2 )
project(IEP_PROJ)

set( CMAKE_CXX_STANDARD 14 )
set( CMAKE_CXX_STANDARD_REQUIRED ON )
set( CMAKE_CXX_EXTENSIONS OFF )

add_subdirectory( Storage )
add_subdirectory( Computer )
#add_subdirectory( Main )

add_executable( IEP_PROJ main.cpp )

#
target_link_libraries( IEP_PROJ PRIVATE Storage Computer )