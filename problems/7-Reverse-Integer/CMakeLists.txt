add_executable(7 main.cpp kernel.cpp)

if(T)
    add_executable(7_test kernel.cpp test.cpp)
    target_link_libraries(7_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(7_test)
endif(T)


install(TARGETS 7 DESTINATION ${INSTALL_DIR})