add_executable(168 main.cpp kernel.cpp)

if(T)
    add_executable(168_test kernel.cpp test.cpp)
    target_link_libraries(168_test gtest_main)
    # add_test(NAME 1681 COMMAND 1681_test)    
    include(GoogleTest)
    gtest_discover_tests(168_test)
endif(T)


install(TARGETS 168 DESTINATION ${INSTALL_DIR})
