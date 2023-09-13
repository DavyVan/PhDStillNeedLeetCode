add_executable(673 main.cpp)

if(T)
    add_executable(673_test test.cpp)
    target_link_libraries(673_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(673_test)
endif(T)


install(TARGETS 673 DESTINATION ${INSTALL_DIR})