add_executable(783 main.cpp)

if(T)
    add_executable(783_test test.cpp)
    target_link_libraries(783_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(783_test)
endif(T)


install(TARGETS 783 DESTINATION ${INSTALL_DIR})