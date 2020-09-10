add_executable(58 main.cpp kernel.cpp)

if(T)
    add_executable(58_test kernel.cpp test.cpp)
    target_link_libraries(58_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(58_test)
endif(T)


install(TARGETS 58 DESTINATION ${INSTALL_DIR})