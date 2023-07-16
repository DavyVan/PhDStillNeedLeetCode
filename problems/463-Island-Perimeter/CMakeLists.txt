add_executable(463 main.cpp)

if(T)
    add_executable(463_test test.cpp)
    target_link_libraries(463_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(463_test)
endif(T)


install(TARGETS 463 DESTINATION ${INSTALL_DIR})