add_executable(504 main.cpp)

if(T)
    add_executable(504_test test.cpp)
    target_link_libraries(504_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(504_test)
endif(T)


install(TARGETS 504 DESTINATION ${INSTALL_DIR})