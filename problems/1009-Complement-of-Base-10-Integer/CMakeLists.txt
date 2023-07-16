add_executable(1009 main.cpp)

if(T)
    add_executable(1009_test test.cpp)
    target_link_libraries(1009_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(1009_test)
endif(T)


install(TARGETS 1009 DESTINATION ${INSTALL_DIR})