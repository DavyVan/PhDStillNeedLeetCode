add_executable(225 main.cpp kernel.cpp)

if(T)
    add_executable(225_test kernel.cpp test.cpp)
    target_link_libraries(225_test gtest_main)
    # add_test(NAME 2251 COMMAND 2251_test)    
    include(GoogleTest)
    gtest_discover_tests(225_test)
endif(T)


install(TARGETS 225 DESTINATION ${INSTALL_DIR})
