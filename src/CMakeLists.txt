set( CMAKE_CXX_STANDARD 23 )
set( CMAKE_CXX_STANDARD_REQUIRED ON )
set( CMAKE_CXX_EXTENSIONS OFF )
set( CMAKE_CXX_MODULE_STD ON )
# get list of all module related source files automatically
file( GLOB_RECURSE APP_FACE_FILES CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/impl/face/*.ixx" )
file( GLOB_RECURSE APP_IMPL_FILES CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/impl/*.mxx" )
# threat all implementation and interface files as c++ source files
set_source_files_properties( ${APP_FACE_FILES} PROPERTIES LANGUAGE CXX )
set_source_files_properties( ${APP_IMPL_FILES} PROPERTIES LANGUAGE CXX )
# application library
add_library( ${APP_LIB} )
target_sources( ${APP_LIB}
    PUBLIC FILE_SET CXX_MODULES BASE_DIRS "${CMAKE_CURRENT_SOURCE_DIR}/impl/face" FILES ${APP_FACE_FILES}
    PRIVATE ${APP_IMPL_FILES}
)
target_link_libraries( ${APP_LIB} PUBLIC
    Vulkan::Vulkan
    Vulkan::volk
    ${SHADERC_SHARED_LIB}
    SDL3::SDL3
    glm::glm
)
# application
add_executable( ${APP} main.cxx )
target_link_libraries( ${APP} PRIVATE ${APP_LIB} )

