add_executable(26 main.cpp kernel.cpp)

if(T)
    add_executable(26_test kernel.cpp test.cpp)
    target_link_libraries(26_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(26_test)
endif(T)


install(TARGETS 26 DESTINATION ${INSTALL_DIR})