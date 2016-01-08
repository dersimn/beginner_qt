cmake_minimum_required(VERSION 2.8.12)
project(beginner_qt)

## Find catkin macros and libraries
## if COMPONENTS list like find_package(catkin REQUIRED COMPONENTS xyz)
## is used, also find other catkin packages
find_package(catkin REQUIRED COMPONENTS
  qt_build
  roscpp
  std_msgs
)

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES beginner_tutorials
CATKIN_DEPENDS roscpp std_msgs
#  DEPENDS system_lib
)

include_directories(
  ${catkin_INCLUDE_DIRS}
)


find_package(Qt4 REQUIRED)
# enable/disable some Qt features
set( QT_USE_QTGUI TRUE )
set( QT_USE_QTOPENGL TRUE )
set( QT_USE_QTXML TRUE )
include(${QT_USE_FILE})

#ADD_DEFINITIONS(-DQT_NO_KEYWORDS)
#----------------------------------------------------------------------
set(qt_srcs
	src/mainwindow.cpp
	src/rosthread.cpp)
set(qt_hdrs
	src/mainwindow.h
	src/rosthread.h)
qt4_automoc(${qt_srcs})
QT4_WRAP_CPP(qt_moc_srcs ${qt_hdrs})
#----------------------------------------------------------------------
QT4_WRAP_UI(uis_h src/mainwindow.ui)
# include this for ui_h
include_directories(${CMAKE_CURRENT_BINARY_DIR})
#----------------------------------------------------------------------
add_executable(my_qlistener src/main.cpp
    ${uis_h} ${qt_srcs} ${qt_moc_srcs})
target_link_libraries(my_qlistener ${QT_LIBRARIES} ${catkin_LIBRARIES})
#----------------------------------------------------------------------

#set the default path for built executables to the "bin" directory
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
#set the default path for built libraries to the "lib" directory
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)