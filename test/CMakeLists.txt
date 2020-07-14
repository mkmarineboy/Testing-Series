project(Test_Calculations LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5Core)

set(SOURCE_FILES main.cpp
    test_math_calculations.cpp

    test_math_calculations.h
    )

add_executable(${PROJECT_NAME}
  ${SOURCE_FILES}
)


find_package(Qt5Test)

target_link_libraries(${PROJECT_NAME} sub::mkmath Qt5::Test)
