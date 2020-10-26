add_executable(172 main.cpp kernel.cpp)

if(T)
    add_executable(172_test kernel.cpp test.cpp)
    target_link_libraries(172_test gtest_main)
    # add_test(NAME 1721 COMMAND 1721_test)    
    include(GoogleTest)
    gtest_discover_tests(172_test)
endif(T)


install(TARGETS 172 DESTINATION ${INSTALL_DIR})
