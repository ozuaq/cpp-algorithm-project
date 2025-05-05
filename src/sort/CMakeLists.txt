add_library(sort_lib STATIC merge_sort.cpp)

target_include_directories(sort_lib 
    PUBLIC
        $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>
)

add_executable(merge-sort merge_sort_main.cpp)

target_link_libraries(merge-sort PRIVATE sort_lib)
