add_executable(112 main.cpp kernel.cpp)

if(T)
    add_executable(112_test kernel.cpp test.cpp)
    target_link_libraries(112_test gtest_main)
    # add_test(NAME 1121 COMMAND 1121_test)    
    include(GoogleTest)
    gtest_discover_tests(112_test)
endif(T)


install(TARGETS 112 DESTINATION ${INSTALL_DIR})

