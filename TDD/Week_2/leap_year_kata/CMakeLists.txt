cmake_minimum_required(VERSION 3.5)
project(LeapYear)
add_executable(test_leap_year test_leap_year.c leap_year.c)
target_link_libraries(test_leap_year PRIVATE cmocka)
