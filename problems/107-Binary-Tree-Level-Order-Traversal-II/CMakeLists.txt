add_executable(107 main.cpp kernel.cpp)

if(T)
    add_executable(107_test kernel.cpp test.cpp)
    target_link_libraries(107_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(107_test)
endif(T)


install(TARGETS 107 DESTINATION ${INSTALL_DIR})