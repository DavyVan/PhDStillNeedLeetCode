add_executable(145 main.cpp)

if(T)
    add_executable(145_test test.cpp)
    target_link_libraries(145_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(145_test)
endif(T)


install(TARGETS 145 DESTINATION ${INSTALL_DIR})