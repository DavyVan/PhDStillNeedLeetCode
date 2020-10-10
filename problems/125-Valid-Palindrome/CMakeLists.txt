add_executable(125 main.cpp kernel.cpp)

if(T)
    add_executable(125_test kernel.cpp test.cpp)
    target_link_libraries(125_test gtest_main)
    # add_test(NAME 1251 COMMAND 1251_test)    
    include(GoogleTest)
    gtest_discover_tests(125_test)
endif(T)


install(TARGETS 125 DESTINATION ${INSTALL_DIR})
