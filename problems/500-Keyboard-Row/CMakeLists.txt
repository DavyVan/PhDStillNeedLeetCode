add_executable(500 main.cpp)

if(T)
    add_executable(500_test test.cpp)
    target_link_libraries(500_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(500_test)
endif(T)


install(TARGETS 500 DESTINATION ${INSTALL_DIR})