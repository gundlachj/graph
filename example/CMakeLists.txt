project(example)

add_executable(${PROJECT_NAME} src/example.c)

target_include_directories( ${PROJECT_NAME}
  PUBLIC ${PROJECT_SOURCE_DIR}/include/
)

target_link_libraries(${PROJECT_NAME} graph::lib)
