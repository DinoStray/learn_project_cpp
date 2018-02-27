file(GLOB_RECURSE LEARN_C *.cc)

add_executable(LEARN_C ${LEARN_C})

target_link_libraries(LEARN_C catch)

