cmake_minimum_required(VERSION 4.3)
project(aip)

set(CMAKE_CXX_STANDARD 17)

# Каждый файл ГГГГ-ММ/ДД/task_N.cpp — отдельная программа с целью ГГГГ-ММ-ДД_task_N
file(GLOB TASK_SOURCES CONFIGURE_DEPENDS ${CMAKE_SOURCE_DIR}/*/*/task_*.cpp)

foreach (src ${TASK_SOURCES})
    get_filename_component(day_dir ${src} DIRECTORY)
    get_filename_component(month_dir ${day_dir} DIRECTORY)
    get_filename_component(day ${day_dir} NAME)
    get_filename_component(month ${month_dir} NAME)
    get_filename_component(task ${src} NAME_WE)
    add_executable(${month}-${day}_${task} ${src})
endforeach ()
