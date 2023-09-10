add_executable(589 main.cpp)

if(T)
    add_executable(589_test test.cpp)
    target_link_libraries(589_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(589_test)
endif(T)


install(TARGETS 589 DESTINATION ${INSTALL_DIR})