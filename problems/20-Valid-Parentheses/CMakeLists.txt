add_executable(20 main.cpp kernel.cpp)

if(T)
    add_executable(20_test kernel.cpp test.cpp)
    target_link_libraries(20_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(20_test)
endif(T)


install(TARGETS 20 DESTINATION ${INSTALL_DIR})