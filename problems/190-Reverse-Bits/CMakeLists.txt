add_executable(190 main.cpp kernel.cpp)

if(T)
    add_executable(190_test kernel.cpp test.cpp)
    target_link_libraries(190_test gtest_main)
    # add_test(NAME 1901 COMMAND 1901_test)    
    include(GoogleTest)
    gtest_discover_tests(190_test)
endif(T)


install(TARGETS 190 DESTINATION ${INSTALL_DIR})
