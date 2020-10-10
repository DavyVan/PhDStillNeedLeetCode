add_executable(122 main.cpp kernel.cpp)

if(T)
    add_executable(122_test kernel.cpp test.cpp)
    target_link_libraries(122_test gtest_main)
    # add_test(NAME 1221 COMMAND 1221_test)    
    include(GoogleTest)
    gtest_discover_tests(122_test)
endif(T)


install(TARGETS 122 DESTINATION ${INSTALL_DIR})
