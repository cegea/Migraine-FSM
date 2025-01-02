project(migraine)

add_library(${PROJECT_NAME} src/migraine.c)
add_library(migraine::lib ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME}
    PUBLIC ${PROJECT_SOURCE_DIR}/include
)

target_link_libraries(${PROJECT_NAME}
    fsm::lib
)
