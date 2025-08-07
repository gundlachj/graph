project(graph)

add_library(${PROJECT_NAME} src/node.c)
add_library(graph::lib ALIAS ${PROJECT_NAME})

target_include_directories( ${PROJECT_NAME}
  PUBLIC ${PROJECT_SOURCE_DIR}/include/
)
