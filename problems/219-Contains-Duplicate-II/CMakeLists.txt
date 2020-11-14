add_executable(219 main.cpp kernel.cpp)

if(T)
    add_executable(219_test kernel.cpp test.cpp)
    target_link_libraries(219_test gtest_main)
    # add_test(NAME 2191 COMMAND 2191_test)    
    include(GoogleTest)
    gtest_discover_tests(219_test)
endif(T)


install(TARGETS 219 DESTINATION ${INSTALL_DIR})
