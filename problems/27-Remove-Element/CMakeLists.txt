add_executable(27 main.cpp kernel.cpp)

if(T)
    add_executable(27_test kernel.cpp test.cpp)
    target_link_libraries(27_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(27_test)
endif(T)


install(TARGETS 27 DESTINATION ${INSTALL_DIR})