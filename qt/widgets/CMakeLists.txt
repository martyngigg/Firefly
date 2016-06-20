set(MODULE_SRCS
  PersonWidget.cpp
)

set(MODULE_HDRS
  PersonWidget.h
  SingersQtWidgetsModule.h

)

add_singers_library(qtwidgets ${MODULE_SRCS} ${MODULE_HDRS})
target_link_libraries(qtwidgets Qt4::QtGui)

# python
include_directories ( ${CMAKE_CURRENT_SOURCE_DIR} )
add_subdirectory(wrapping/python)
