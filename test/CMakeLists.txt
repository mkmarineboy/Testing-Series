project(Test_Target LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5Test)

set(TEST_SOURCE_FILES main.cpp
    )

add_executable(${PROJECT_NAME}
  ${TEST_SOURCE_FILES}
)


target_link_libraries(${PROJECT_NAME} Qt5::Core Qt5::Test)
