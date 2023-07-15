add_executable(441 main.cpp)

if(T)
    add_executable(441_test test.cpp)
    target_link_libraries(441_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(441_test)
endif(T)


install(TARGETS 441 DESTINATION ${INSTALL_DIR})