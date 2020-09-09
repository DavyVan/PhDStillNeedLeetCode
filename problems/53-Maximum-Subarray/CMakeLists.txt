add_executable(53 main.cpp kernel.cpp)

if(T)
    add_executable(53_test kernel.cpp test.cpp)
    target_link_libraries(53_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(53_test)
endif(T)


install(TARGETS 53 DESTINATION ${INSTALL_DIR})