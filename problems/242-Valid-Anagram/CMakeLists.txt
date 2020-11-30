add_executable(242 main.cpp kernel.cpp)

if(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)
    add_executable(242_test kernel.cpp test.cpp)
    target_link_libraries(242_test gtest_main)
    # add_test(NAME 2421 COMMAND 2421_test)    
    include(GoogleTest)
    gtest_discover_tests(242_test)
else(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)
    message(STATUS "Test building is skipped for 242")
endif(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)


install(TARGETS 242 DESTINATION ${INSTALL_DIR})
