add_executable(67 main.cpp kernel.cpp)

if(T)
    add_executable(67_test kernel.cpp test.cpp)
    target_link_libraries(67_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(67_test)
endif(T)


install(TARGETS 67 DESTINATION ${INSTALL_DIR})