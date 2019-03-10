set(CMAKE_BUILD_TYPE Debug)

cmake_minimum_required (VERSION 2.6)
project (HelloWorld)
add_executable(HelloWorld timewindow.cpp main.cpp Observer.cpp Observable.cpp
	Clock.cpp TimePrinter.cpp)

find_package (Threads)
target_link_libraries (HelloWorld ${CMAKE_THREAD_LIBS_INIT})

find_package(PkgConfig)

pkg_check_modules(GTKMM gtkmm-3.0)

link_directories(
    ${GTKMM_LIBRARY_DIRS}  )

include_directories(
    ${GTKMM_INCLUDE_DIRS}  )

target_link_libraries(HelloWorld
    ${GTKMM_LIBRARIES}  )
