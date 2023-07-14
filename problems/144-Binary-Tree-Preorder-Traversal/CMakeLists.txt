add_executable(144 main.cpp)

if(T)
    add_executable(144_test test.cpp)
    target_link_libraries(144_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(144_test)
endif(T)


install(TARGETS 144 DESTINATION ${INSTALL_DIR})