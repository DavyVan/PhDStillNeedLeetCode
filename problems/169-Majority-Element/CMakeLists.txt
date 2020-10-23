add_executable(169 main.cpp kernel.cpp)

if(T)
    add_executable(169_test kernel.cpp test.cpp)
    target_link_libraries(169_test gtest_main)
    # add_test(NAME 1691 COMMAND 1691_test)    
    include(GoogleTest)
    gtest_discover_tests(169_test)
endif(T)


install(TARGETS 169 DESTINATION ${INSTALL_DIR})
