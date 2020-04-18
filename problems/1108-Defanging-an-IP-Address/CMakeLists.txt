add_executable(1108 main.cpp kernel.cpp)

if(T)
    add_executable(1108_test kernel.cpp test.cpp)
    target_link_libraries(1108_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(1108_test)
endif(T)


install(TARGETS 1108 DESTINATION ${INSTALL_DIR})