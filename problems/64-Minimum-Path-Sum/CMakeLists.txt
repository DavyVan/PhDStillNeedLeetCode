add_executable(64 main.cpp)

if(T)
    add_executable(64_test test.cpp)
    target_link_libraries(64_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(64_test)
endif(T)


install(TARGETS 64 DESTINATION ${INSTALL_DIR})