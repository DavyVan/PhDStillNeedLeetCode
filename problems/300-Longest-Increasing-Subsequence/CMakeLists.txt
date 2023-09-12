add_executable(300 main.cpp)

if(T)
    add_executable(300_test test.cpp)
    target_link_libraries(300_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(300_test)
endif(T)


install(TARGETS 300 DESTINATION ${INSTALL_DIR})