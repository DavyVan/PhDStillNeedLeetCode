add_executable(530 main.cpp)

if(T)
    add_executable(530_test test.cpp)
    target_link_libraries(530_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(530_test)
endif(T)


install(TARGETS 530 DESTINATION ${INSTALL_DIR})