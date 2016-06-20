# ------------------------------------------------------------------------------
# Qt widgets + applications
# ------------------------------------------------------------------------------
set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
find_package(Qt4 REQUIRED QtCore QtGui)

# Sip, PyQt4
find_package ( PyQt4 REQUIRED )
find_package ( SIP REQUIRED )
separate_arguments ( PYQT4_SIP_FLAGS )

add_subdirectory(widgets)
