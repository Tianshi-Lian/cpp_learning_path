include_guard()

# Set our binary output directory to build/dist
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/dist)

# Setup our executable
set(APP_NAME app)
add_executable(${APP_NAME}
    src/main.cpp
)

target_link_libraries(${APP_NAME}
    PRIVATE project_options project_warnings lib
)

target_include_directories(${APP_NAME} PRIVATE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/${APP_NAME}>
    $<INSTALL_INTERFACE:include/${APP_NAME}>
)

set_target_properties(${APP_NAME} PROPERTIES
    LINK_WHAT_YOU_USE ON
)

# Application-specific PCH
if(ENABLE_PCH)
    target_precompile_headers(${APP_NAME} PRIVATE include/app/types.h)
endif()
