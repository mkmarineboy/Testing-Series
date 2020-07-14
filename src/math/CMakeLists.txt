#----------------------
# Set Library (mkmath)
#----------------------
project(mkmath)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(AUTOMOC_MOC_OPTIONS -Muri=MkMath)

# Static library definitions for Qt
add_definitions(-DQT_PLUGIN)
add_definitions(-DQT_STATICPLUGIN=1)

# Add a library with the aboce sources
add_library(${PROJECT_NAME} STATIC
    "${CMAKE_CURRENT_LIST_DIR}/calculations.cpp"

    "${CMAKE_CURRENT_LIST_DIR}/calculations.h"
    )

#-------------------------
# Get Qt Libraries
#-------------------------
find_package(Qt5Core)
target_link_libraries(${PROJECT_NAME} Qt5::Core)

#----------------------------
# Link all libraries to target
#----------------------------
link_libraries(${PROJECT_NAME})
#----------------------------
# Include Path
#----------------------------
target_include_directories(${PROJECT_NAME} PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
    )

#----------------------------
# Set Alias of Library to reach from parent executable
#----------------------------
add_library(sub::mkmath ALIAS ${PROJECT_NAME})
