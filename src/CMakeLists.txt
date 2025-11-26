
file(GLOB_RECURSE SOURCES
    "*.cpp"
    "*.c"
    "*.cc"
)

file(GLOB_RECURSE HEADERS
    "*.h"
    "*.hpp"
    "*.hxx"
)

add_executable(school_lang ${SOURCES} ${HEADERS})

target_include_directories(school_lang
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/../include
)

target_compile_options(school_lang
    PRIVATE
        $<$<COMPILE_LANGUAGE:C>:-std=c11>
        $<$<COMPILE_LANGUAGE:CXX>:-std=c++17>
)

message(STATUS "Found sources: ${SOURCES}")
message(STATUS "Found headers: ${HEADERS}")
