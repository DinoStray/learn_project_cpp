add_definitions(-DCATCH_CONFIG_MAIN) # This tells Catch to provide a main() - only do this in one cpp file

file(GLOB_RECURSE UTILS *.cc)

add_executable(UtilTests ${UTILS})
target_link_libraries(UtilTests catch)

add_library(UtilTestsLib ${UTILS})
target_include_directories(UtilTestsLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})