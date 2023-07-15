add_executable(448 main.cpp)

if(T)
    add_executable(448_test test.cpp)
    target_link_libraries(448_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(448_test)
endif(T)


install(TARGETS 448 DESTINATION ${INSTALL_DIR})