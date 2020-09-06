add_executable(35 main.cpp kernel.cpp)

if(T)
    add_executable(35_test kernel.cpp test.cpp)
    target_link_libraries(35_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(35_test)
endif(T)


install(TARGETS 35 DESTINATION ${INSTALL_DIR})