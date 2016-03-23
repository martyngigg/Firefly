#
# Provides a set of functions and macros for declaring
# libraries.

# Main function to declare a module. It creates a target with the
# given name.
#   name: The name of the module
function (ADD_SINGERS_LIBRARY name)
  add_library (${name} ${ARGN})
  set (_target_name ${name})
  set_target_properties (${name} PROPERTIES OUTPUT_NAME singers-${name})
endfunction ()
