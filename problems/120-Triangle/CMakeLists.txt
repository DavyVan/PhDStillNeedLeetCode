add_executable(120 main.cpp)

if(T)
    add_executable(120_test test.cpp)
    target_link_libraries(120_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(120_test)
endif(T)


install(TARGETS 120 DESTINATION ${INSTALL_DIR})