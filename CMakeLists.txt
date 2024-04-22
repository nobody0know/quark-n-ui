cmake_minimum_required(VERSION 3.10)

set(CMAKE_C_COMPILER "arm-cortexa9-linux-gnueabihf-gcc")
set(CMAKE_CXX_COMPILER "arm-cortexa9-linux-gnueabihf-g++")
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
project(quark)

set(CMAKE_C_STANDARD 99)#C99 # lvgl officially support C99 and above
set(CMAKE_CXX_STANDARD 17)#C17
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(lvgl)
add_subdirectory(lv_drivers)
include_directories(./lvgl ./lv_drivers ./lv_drivers/display ${PROJECT_SOURCE_DIR} ./mpu6050_drive ./AHRS)

file(GLOB_RECURSE SOURCES
        "mpu6050_drive/*.*"
        "AHRS/*.*"
)

add_executable(quark_ui main.c ${SOURCES})

set(VAR lvgl)
set(VAR ${VAR} lvgl_demos)
set(VAR ${VAR} lvgl_examples)
set(VAR ${VAR} lvgl_drivers)
message("VAR : ${VAR}")
target_link_libraries(quark_ui ${VAR} pthread m)   #设置链接little_prj的 依赖关系 ，依赖 VAR = lvgl_lib lv_drivers
target_link_libraries(quark_ui ${CMAKE_THREAD_LIBS_INIT})
