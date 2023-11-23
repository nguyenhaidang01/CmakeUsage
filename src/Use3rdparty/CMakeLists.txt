include_directories(include/)

set(headers
	include/Feature3rdparty.h
)

set(sources
	src/Feature3rdparty.cpp
)

add_library(Use3rdparty ${sources} ${headers})
#target_include_directories(Use3rdparty PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src/Use3rdparty/include/")

#add_compile_definitions(USE3RDPARTY
#    DEBUG_USE3RDPARTY
#    USE3RDPARTY_TEST
#)


