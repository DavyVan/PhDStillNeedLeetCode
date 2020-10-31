add_executable(198 main.cpp kernel.cpp)

if(T)
    add_executable(198_test kernel.cpp test.cpp)
    target_link_libraries(198_test gtest_main)
    # add_test(NAME 1981 COMMAND 1981_test)    
    include(GoogleTest)
    gtest_discover_tests(198_test)
endif(T)


install(TARGETS 198 DESTINATION ${INSTALL_DIR})
