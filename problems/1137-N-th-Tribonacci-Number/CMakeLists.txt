add_executable(1137 main.cpp)

if(T)
    add_executable(1137_test test.cpp)
    target_link_libraries(1137_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(1137_test)
endif(T)


install(TARGETS 1137 DESTINATION ${INSTALL_DIR})