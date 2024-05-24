cmake_minimum_required(VERSION 3.22.1)
project(lab_03_own_project_cpp)

set(CMAKE_CXX_STANDARD 20)

# використаємо Boost як бібліотеку 1
set(Boost_USE_STATIC_LIBS ON)
find_package(Boost COMPONENTS program_options REQUIRED)
include_directories(${BOOST_INCLUDE_DIRS})

# створюємо виконуваний файл нашого застосунку
add_executable(project_app main.cpp remove_whitespace.h)
target_link_libraries(project_app ${Boost_LIBRARIES})

# вмикаємо тестування
enable_testing()

# для тестів використаємо GoogleTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# створюємо виконуваний файл наших тестів
add_executable(project_test test.cpp remove_whitespace.h)
target_link_libraries(project_test ${GTEST_LIBRARIES} pthread)

# додаємо його в тестовий набір CMake
add_test(NAME HelloWorldTest COMMAND project_test)