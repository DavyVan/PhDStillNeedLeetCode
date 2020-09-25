add_executable(101 main.cpp kernel.cpp)

if(T)
    add_executable(101_test kernel.cpp test.cpp)
    target_link_libraries(101_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(101_test)
endif(T)


install(TARGETS 101 DESTINATION ${INSTALL_DIR})