include_directories(include/)

find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

set(headers
	include/Other.h
)

set(sources
	src/Other.cpp
)

add_library(other ${sources} ${headers})
target_link_libraries(other
  PRIVATE Qt${QT_VERSION_MAJOR}::Core)

#target_include_directories(Use3rdparty PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src/other/include/")

#add_compile_definitions(OTHER
#    DEBUG_OTHER
#    OTHER_TEST
#)


