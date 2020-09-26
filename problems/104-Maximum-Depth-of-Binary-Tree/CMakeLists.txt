add_executable(104 main.cpp kernel.cpp)

if(T)
    add_executable(104_test kernel.cpp test.cpp)
    target_link_libraries(104_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(104_test)
endif(T)


install(TARGETS 104 DESTINATION ${INSTALL_DIR})