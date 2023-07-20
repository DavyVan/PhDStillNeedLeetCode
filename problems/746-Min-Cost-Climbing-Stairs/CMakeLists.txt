add_executable(746 main.cpp)

if(T)
    add_executable(746_test test.cpp)
    target_link_libraries(746_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(746_test)
endif(T)


install(TARGETS 746 DESTINATION ${INSTALL_DIR})