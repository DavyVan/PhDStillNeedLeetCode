add_executable(202 main.cpp kernel.cpp)

if(T)
    add_executable(202_test kernel.cpp test.cpp)
    target_link_libraries(202_test gtest_main)
    # add_test(NAME 2021 COMMAND 2021_test)    
    include(GoogleTest)
    gtest_discover_tests(202_test)
endif(T)


install(TARGETS 202 DESTINATION ${INSTALL_DIR})
