add_executable(21 main.cpp kernel.cpp)

if(T)
    add_executable(21_test kernel.cpp test.cpp)
    target_link_libraries(21_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(21_test)
endif(T)


install(TARGETS 21 DESTINATION ${INSTALL_DIR})