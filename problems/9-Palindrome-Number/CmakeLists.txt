add_executable(9 main.cpp kernel.cpp)

if(T)
    add_executable(9_test kernel.cpp test.cpp)
    target_link_libraries(9_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(9_test)
endif(T)


install(TARGETS 9 DESTINATION ${INSTALL_DIR})