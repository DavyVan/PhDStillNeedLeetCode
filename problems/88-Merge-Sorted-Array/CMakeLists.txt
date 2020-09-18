add_executable(88 main.cpp kernel.cpp)

if(T)
    add_executable(88_test kernel.cpp test.cpp)
    target_link_libraries(88_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(88_test)
endif(T)


install(TARGETS 88 DESTINATION ${INSTALL_DIR})