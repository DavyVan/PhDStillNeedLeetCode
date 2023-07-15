add_executable(415 main.cpp)

if(T)
    add_executable(415_test test.cpp)
    target_link_libraries(415_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(415_test)
endif(T)


install(TARGETS 415 DESTINATION ${INSTALL_DIR})