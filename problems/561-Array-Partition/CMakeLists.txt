add_executable(561 main.cpp)

if(T)
    add_executable(561_test test.cpp)
    target_link_libraries(561_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(561_test)
endif(T)


install(TARGETS 561 DESTINATION ${INSTALL_DIR})