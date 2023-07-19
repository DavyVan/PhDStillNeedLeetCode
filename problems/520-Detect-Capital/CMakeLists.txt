add_executable(520 main.cpp)

if(T)
    add_executable(520_test test.cpp)
    target_link_libraries(520_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(520_test)
endif(T)


install(TARGETS 520 DESTINATION ${INSTALL_DIR})