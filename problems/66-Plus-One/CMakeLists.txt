add_executable(66 main.cpp kernel.cpp)

if(T)
    add_executable(66_test kernel.cpp test.cpp)
    target_link_libraries(66_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(66_test)
endif(T)


install(TARGETS 66 DESTINATION ${INSTALL_DIR})