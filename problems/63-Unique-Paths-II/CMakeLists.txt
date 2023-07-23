add_executable(63 main.cpp)

if(T)
    add_executable(63_test test.cpp)
    target_link_libraries(63_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(63_test)
endif(T)


install(TARGETS 63 DESTINATION ${INSTALL_DIR})