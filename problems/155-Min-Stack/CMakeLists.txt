add_executable(155 main.cpp kernel.cpp)

if(T)
    add_executable(155_test kernel.cpp test.cpp)
    target_link_libraries(155_test gtest_main)
    # add_test(NAME 1551 COMMAND 1551_test)    
    include(GoogleTest)
    gtest_discover_tests(155_test)
endif(T)


install(TARGETS 155 DESTINATION ${INSTALL_DIR})
