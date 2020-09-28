add_executable(108 main.cpp kernel.cpp)

if(T)
    add_executable(108_test kernel.cpp test.cpp)
    target_link_libraries(108_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(108_test)
endif(T)


install(TARGETS 108 DESTINATION ${INSTALL_DIR})