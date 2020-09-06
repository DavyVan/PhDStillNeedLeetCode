add_executable(28 main.cpp kernel.cpp)

if(T)
    add_executable(28_test kernel.cpp test.cpp)
    target_link_libraries(28_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(28_test)
endif(T)


install(TARGETS 28 DESTINATION ${INSTALL_DIR})