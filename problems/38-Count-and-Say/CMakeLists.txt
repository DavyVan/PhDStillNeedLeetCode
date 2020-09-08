add_executable(38 main.cpp kernel.cpp)

if(T)
    add_executable(38_test kernel.cpp test.cpp)
    target_link_libraries(38_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(38_test)
endif(T)


install(TARGETS 38 DESTINATION ${INSTALL_DIR})