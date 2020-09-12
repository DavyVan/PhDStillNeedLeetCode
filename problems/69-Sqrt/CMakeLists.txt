add_executable(69 main.cpp kernel.cpp)

if(T)
    add_executable(69_test kernel.cpp test.cpp)
    target_link_libraries(69_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(69_test)
endif(T)


install(TARGETS 69 DESTINATION ${INSTALL_DIR})