add_executable(136 main.cpp kernel.cpp)

if(T)
    add_executable(136_test kernel.cpp test.cpp)
    target_link_libraries(136_test gtest_main)
    # add_test(NAME 1361 COMMAND 1361_test)    
    include(GoogleTest)
    gtest_discover_tests(136_test)
endif(T)


install(TARGETS 136 DESTINATION ${INSTALL_DIR})
