add_executable(83 main.cpp kernel.cpp)

if(T)
    add_executable(83_test kernel.cpp test.cpp)
    target_link_libraries(83_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(83_test)
endif(T)


install(TARGETS 83 DESTINATION ${INSTALL_DIR})