cmake_minimum_required(VERSION 4.5)
project( vulkan-lesson_01 VERSION 0.0.0 LANGUAGES CXX )

find_package( SDL3 REQUIRED )
find_package( Vulkan REQUIRED COMPONENTS volk )
find_library( SHADERC_SHARED_LIB shaderc_shared REQUIRED )
find_package( glm REQUIRED )

set( APP ${PROJECT_NAME}_app )
set( APP_LIB ${PROJECT_NAME}_lib )
add_subdirectory( src )
