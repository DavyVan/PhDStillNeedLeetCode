add_executable(506 main.cpp)

if(T)
    add_executable(506_test test.cpp)
    target_link_libraries(506_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(506_test)
endif(T)


install(TARGETS 506 DESTINATION ${INSTALL_DIR})