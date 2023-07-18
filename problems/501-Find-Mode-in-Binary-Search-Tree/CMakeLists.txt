add_executable(501 main.cpp)

if(T)
    add_executable(501_test test.cpp)
    target_link_libraries(501_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(501_test)
endif(T)


install(TARGETS 501 DESTINATION ${INSTALL_DIR})