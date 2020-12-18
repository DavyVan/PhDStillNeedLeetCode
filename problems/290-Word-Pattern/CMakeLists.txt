add_executable(290 main.cpp kernel.cpp)

if(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)
    add_executable(290_test kernel.cpp test.cpp)
    target_link_libraries(290_test gtest_main)
    # add_test(NAME 2901 COMMAND 2901_test)    
    include(GoogleTest)
    gtest_discover_tests(290_test)
else(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)
    message(STATUS "Test building is skipped for 290")
endif(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)


install(TARGETS 290 DESTINATION ${INSTALL_DIR})
