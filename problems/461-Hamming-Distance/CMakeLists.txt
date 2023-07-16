add_executable(461 main.cpp)

if(T)
    add_executable(461_test test.cpp)
    target_link_libraries(461_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(461_test)
endif(T)


install(TARGETS 461 DESTINATION ${INSTALL_DIR})