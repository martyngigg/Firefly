# ------------------------------------------------------------------------------
#
# ------------------------------------------------------------------------------
set (SIP_SRC
  pyqtwidgets.sip
)

add_custom_command(OUTPUT ${SIP_SRC}
  COMMAND ${SIP_EXECUTABLE} -I ${PYQT4_SIP_DIR} ${PYQT4_SIP_FLAGS}
    -c ${CMAKE_CURRENT_BINARY_DIR} -j1 -w -o
    ${CMAKE_CURRENT_LIST_DIR}/${SIP_SRC}
  COMMENT "Generating Python bindings"
)

include_directories ( SYSTEM ${SIP_INCLUDE_DIR} )
add_singers_library(pyqtwidgets
  ${CMAKE_CURRENT_BINARY_DIR}/sippyqtwidgetspart0.cpp)
set_target_properties(pyqtwidgets PROPERTIES
  PREFIX ""
  OUTPUT_NAME pyqtwidgets
)
target_link_libraries(pyqtwidgets qtwidgets)
