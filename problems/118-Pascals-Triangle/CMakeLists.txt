add_executable(118 main.cpp kernel.cpp)

if(T)
    add_executable(118_test kernel.cpp test.cpp)
    target_link_libraries(118_test gtest_main)
    # add_test(NAME 1181 COMMAND 1181_test)    
    include(GoogleTest)
    gtest_discover_tests(118_test)
endif(T)


install(TARGETS 118 DESTINATION ${INSTALL_DIR})
