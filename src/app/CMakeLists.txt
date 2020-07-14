add_executable(${PROJECT_NAME}
  main.cpp
)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

target_link_libraries(${PROJECT_NAME} sub::mkmath)
