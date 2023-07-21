add_executable(740 main.cpp)

if(T)
    add_executable(740_test test.cpp)
    target_link_libraries(740_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(740_test)
endif(T)


install(TARGETS 740 DESTINATION ${INSTALL_DIR})