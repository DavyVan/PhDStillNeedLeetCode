add_executable(1 main.cpp kernel.cpp)

if(T)
    add_executable(1_test kernel.cpp test.cpp)
    target_link_libraries(1_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(1_test)
endif(T)


install(TARGETS 1 DESTINATION ${INSTALL_DIR})