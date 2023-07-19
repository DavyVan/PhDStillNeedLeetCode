add_executable(543 main.cpp)

if(T)
    add_executable(543_test test.cpp)
    target_link_libraries(543_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(543_test)
endif(T)


install(TARGETS 543 DESTINATION ${INSTALL_DIR})