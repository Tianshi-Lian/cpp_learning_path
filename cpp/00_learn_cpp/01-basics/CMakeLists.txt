cmake_minimum_required(VERSION 3.16...3.25)
set(APP_NAME 01-basics)

set(APP_SRC_FILES
	main.cpp
)

set(APP_INC_FILES
)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${APP_NAME}/bin)

project(${APP_NAME}
	LANGUAGES CXX
)

add_executable(${APP_NAME}
	${APP_SRC_FILES}
	${APP_INC_FILES}
)

set_target_properties(${APP_NAME} PROPERTIES
	LINK_WHAT_YOU_USE ON
	CXX_STANDARD_REQUIRED ON
	CXX_EXTENSIONS OFF
)

target_link_libraries(${APP_NAME}
	PRIVATE project_options project_warnings
)
