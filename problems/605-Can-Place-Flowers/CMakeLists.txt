add_executable(605 main.cpp)

if(T)
    add_executable(605_test test.cpp)
    target_link_libraries(605_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(605_test)
endif(T)


install(TARGETS 605 DESTINATION ${INSTALL_DIR})