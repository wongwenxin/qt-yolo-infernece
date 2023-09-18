cmake_minimum_required(VERSION 3.15)
set(PROJECT_NAME WWXUI)
project(${PROJECT_NAME})

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


# ------------------------OpenCV-----------------------#
find_package(OpenCV 4 REQUIRED)
include_directories(${OpenCV_INCLUDE_DIR})
message(STATUS "OPENCV : ${OpenCV_INCLUDE_DIR}")
##-------------------------CUDA-------------------------#
option(USE_CUDA "Enable CUDA support" ON)
if (NOT APPLE AND USE_CUDA)
    find_package(CUDA REQUIRED)
    include_directories(${CUDA_INCLUDE_DIRS})
    add_definitions(-DUSE_CUDA)
else ()
    set(USE_CUDA ON)
endif ()

#-------------------------ONNXRUNTIME------------------#

set (ONNXRUNTIME_VERSION 1.15.1)

if (WIN32)
    if (USE_CUDA)
        set(ONNXRUNTIME_ROOT "${CMAKE_CURRENT_SOURCE_DIR}/onnxruntime-win-x64-gpu-${ONNXRUNTIME_VERSION}")
    else ()
        set(ONNXRUNTIME_ROOT "${CMAKE_CURRENT_SOURCE_DIR}/onnxruntime-win-x64-${ONNXRUNTIME_VERSION}")
    endif (USE_CUDA)
endif (WIN32)
if (UNIX)
    if (USE_CUDA)
        set(ONNXRUNTIME_ROOT /home/wwx/onnxruntime-linux-x64-gpu-${ONNXRUNTIME_VERSION})
    else ()
        set(ONNXRUNTIME_ROOT "/home/wwx/onnxruntime-linux-x64-${ONNXRUNTIME_VERSION}")
    endif (USE_CUDA)
endif (UNIX)

message(STATUS "ONNXRUNTIME: ${ONNXRUNTIME_ROOT}")


include_directories(${PROJECT_NAME} "${ONNXRUNTIME_ROOT}/include")


MESSAGE(STATUS "${CMAKE_SOURCE_DIR}")
set(CMAKE_PREFIX_PATH "/home/wwx/Qt5.12.0/5.12.0/gcc_64")
find_package(Qt5 COMPONENTS
        Core Widgets
        REQUIRED)

set(PROJECT_SOURCE
        src/main.cpp
        src/inference.cpp
        src/tools.cpp
        src/HomePage.cpp
        include/homepage.h
        include/inference.h
        include/tools.h
        src/HomePage.ui
        src/InferencePage.cpp
        include/InferencePage.h
        src/InferencePage.ui
        include/superhead.h
)
include_directories(${CMAKE_SOURCE_DIR}/include)
add_executable(${PROJECT_NAME} ${PROJECT_SOURCE})
target_link_libraries(${PROJECT_NAME}
        Qt5::Core Qt5::Widgets
)

if (WIN32)
    target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS} ${ONNXRUNTIME_ROOT}/lib/libonnxruntime.lib)
    if (USE_CUDA)
        target_link_libraries(${PROJECT_NAME} ${CUDA_LIBRARIES})
    endif ()
elseif (UNIX)
    target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS} ${ONNXRUNTIME_ROOT}/lib/libonnxruntime.so)
    if (USE_CUDA)
        target_link_libraries(${PROJECT_NAME} ${CUDA_LIBRARIES})
    endif ()
endif ()
