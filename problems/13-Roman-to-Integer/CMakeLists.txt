add_executable(13 main.cpp kernel.cpp)

if(T)
    add_executable(13_test kernel.cpp test.cpp)
    target_link_libraries(13_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(13_test)
endif(T)


install(TARGETS 13 DESTINATION ${INSTALL_DIR})