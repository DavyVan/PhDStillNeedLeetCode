add_executable(203 main.cpp kernel.cpp)

if(T)
    add_executable(203_test kernel.cpp test.cpp)
    target_link_libraries(203_test gtest_main)
    # add_test(NAME 2031 COMMAND 2031_test)    
    include(GoogleTest)
    gtest_discover_tests(203_test)
endif(T)


install(TARGETS 203 DESTINATION ${INSTALL_DIR})
