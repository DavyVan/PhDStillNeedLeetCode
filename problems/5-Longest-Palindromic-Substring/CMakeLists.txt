add_executable(5 main.cpp)

if(T)
    add_executable(5_test test.cpp)
    target_link_libraries(5_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(5_test)
endif(T)


install(TARGETS 5 DESTINATION ${INSTALL_DIR})