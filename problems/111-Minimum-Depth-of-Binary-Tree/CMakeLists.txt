add_executable(111 main.cpp kernel.cpp)

if(T)
    add_executable(111_test kernel.cpp test.cpp)
    target_link_libraries(111_test gtest_main)
    # add_test(NAME 1111 COMMAND 1111_test)    
    include(GoogleTest)
    gtest_discover_tests(111_test)
endif(T)


install(TARGETS 111 DESTINATION ${INSTALL_DIR})
