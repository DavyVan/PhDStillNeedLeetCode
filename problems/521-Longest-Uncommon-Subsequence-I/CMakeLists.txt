add_executable(521 main.cpp)

if(T)
    add_executable(521_test test.cpp)
    target_link_libraries(521_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(521_test)
endif(T)


install(TARGETS 521 DESTINATION ${INSTALL_DIR})