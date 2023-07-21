add_executable(557 main.cpp)

if(T)
    add_executable(557_test test.cpp)
    target_link_libraries(557_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(557_test)
endif(T)


install(TARGETS 557 DESTINATION ${INSTALL_DIR})