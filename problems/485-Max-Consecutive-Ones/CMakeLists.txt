add_executable(485 main.cpp)

if(T)
    add_executable(485_test test.cpp)
    target_link_libraries(485_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(485_test)
endif(T)


install(TARGETS 485 DESTINATION ${INSTALL_DIR})