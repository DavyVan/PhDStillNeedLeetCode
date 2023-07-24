add_executable(563 main.cpp)

if(T)
    add_executable(563_test test.cpp)
    target_link_libraries(563_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(563_test)
endif(T)


install(TARGETS 563 DESTINATION ${INSTALL_DIR})