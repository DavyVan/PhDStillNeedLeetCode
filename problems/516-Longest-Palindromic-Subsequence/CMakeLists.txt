add_executable(516 main.cpp)

if(T)
    add_executable(516_test test.cpp)
    target_link_libraries(516_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(516_test)
endif(T)


install(TARGETS 516 DESTINATION ${INSTALL_DIR})