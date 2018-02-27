add_definitions(-DCATCH_CONFIG_MAIN) # This tells Catch to provide a main() - only do this in one cpp file

file(GLOB_RECURSE SOURCES *.cc)

add_executable(ALGORITHM_SORT ${SOURCES})
target_link_libraries(ALGORITHM_SORT UtilTestsLib catch)