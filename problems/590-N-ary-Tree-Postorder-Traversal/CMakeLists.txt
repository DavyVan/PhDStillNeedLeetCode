add_executable(590 main.cpp)

if(T)
    add_executable(590_test test.cpp)
    target_link_libraries(590_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(590_test)
endif(T)


install(TARGETS 590 DESTINATION ${INSTALL_DIR})