add_executable(414 main.cpp)

if(T)
    add_executable(414_test test.cpp)
    target_link_libraries(414_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(414_test)
endif(T)


install(TARGETS 414 DESTINATION ${INSTALL_DIR})