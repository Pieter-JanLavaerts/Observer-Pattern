set(CMAKE_BUILD_TYPE Debug)

cmake_minimum_required (VERSION 2.6)
project (Observer-Pattern)
add_executable(Observer-Pattern 
	TimeWindow.cpp 
	main.cpp 
	Observer.cpp 
	Observable.cpp
	Clock.cpp 
	TimePrinter.cpp)

#threads
find_package (Threads)
target_link_libraries (Observer-Pattern ${CMAKE_THREAD_LIBS_INIT})

#gtkmm
find_package(PkgConfig)
pkg_check_modules(GTKMM gtkmm-3.0)
link_directories(${GTKMM_LIBRARY_DIRS})
include_directories(${GTKMM_INCLUDE_DIRS})
target_link_libraries(Observer-Pattern ${GTKMM_LIBRARIES})
