add_executable(14 main.cpp kernel.cpp)

if(T)
    add_executable(14_test kernel.cpp test.cpp)
    target_link_libraries(14_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(14_test)
endif(T)


install(TARGETS 14 DESTINATION ${INSTALL_DIR})