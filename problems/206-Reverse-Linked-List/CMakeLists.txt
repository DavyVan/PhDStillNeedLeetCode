add_executable(206 main.cpp kernel.cpp)

if(T)
    add_executable(206_test kernel.cpp test.cpp)
    target_link_libraries(206_test gtest_main)
    # add_test(NAME 2061 COMMAND 2061_test)    
    include(GoogleTest)
    gtest_discover_tests(206_test)
endif(T)


install(TARGETS 206 DESTINATION ${INSTALL_DIR})
