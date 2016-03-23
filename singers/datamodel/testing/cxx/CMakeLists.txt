set (TEST_HDRS
  PersonTest.h
)

add_singers_tests (
  EXE_PREFIX datamodel
  TEST_HEADERS ${TEST_HDRS}
  LINK_LIBRARIES datamodel
)
