set (MODULE_SRCS
  Person.cpp
)

set (MODULE_HDRS
  Person.h
  SingersDataModelModule.h
)

add_singers_library (datamodel ${MODULE_SRCS} ${MODULE_HDRS})

if (ENABLE_TESTING)
  include_directories (${CMAKE_CURRENT_LIST_DIR})
  add_subdirectory (testing/cxx)
endif ()
