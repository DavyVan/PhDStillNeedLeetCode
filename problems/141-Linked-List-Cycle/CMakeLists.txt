add_executable(141 main.cpp kernel.cpp)

if(T)
    add_executable(141_test kernel.cpp test.cpp)
    target_link_libraries(141_test gtest_main)
    # add_test(NAME 1411 COMMAND 1411_test)    
    include(GoogleTest)
    gtest_discover_tests(141_test)
endif(T)


install(TARGETS 141 DESTINATION ${INSTALL_DIR})
