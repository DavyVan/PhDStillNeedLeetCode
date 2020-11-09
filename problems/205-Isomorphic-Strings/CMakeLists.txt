add_executable(205 main.cpp kernel.cpp)

if(T)
    add_executable(205_test kernel.cpp test.cpp)
    target_link_libraries(205_test gtest_main)
    # add_test(NAME 2051 COMMAND 2051_test)    
    include(GoogleTest)
    gtest_discover_tests(205_test)
endif(T)


install(TARGETS 205 DESTINATION ${INSTALL_DIR})
