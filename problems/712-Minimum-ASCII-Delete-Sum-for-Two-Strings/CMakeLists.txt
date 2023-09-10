add_executable(712 main.cpp)

if(T)
    add_executable(712_test test.cpp)
    target_link_libraries(712_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(712_test)
endif(T)


install(TARGETS 712 DESTINATION ${INSTALL_DIR})