add_executable(70 main.cpp kernel.cpp)

if(T)
    add_executable(70_test kernel.cpp test.cpp)
    target_link_libraries(70_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(70_test)
endif(T)


install(TARGETS 70 DESTINATION ${INSTALL_DIR})