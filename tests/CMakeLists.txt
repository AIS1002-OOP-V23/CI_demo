
add_executable(test_person test_person.cpp)
add_test(NAME test_person COMMAND test_person)
target_link_libraries(test_person PUBLIC Catch2::Catch2)
target_include_directories(test_person PUBLIC "${CMAKE_SOURCE_DIR}/include")

add_executable(test_utility test_utility.cpp)
add_test(NAME test_utility COMMAND test_utility)
target_link_libraries(test_utility PUBLIC Catch2::Catch2)
target_include_directories(test_utility PUBLIC "${CMAKE_SOURCE_DIR}/include")
