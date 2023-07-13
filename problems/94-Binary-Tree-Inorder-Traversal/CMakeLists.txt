add_executable(94 main.cpp)

if(T)
    add_executable(94_test test.cpp)
    target_link_libraries(94_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(94_test)
endif(T)


install(TARGETS 94 DESTINATION ${INSTALL_DIR})