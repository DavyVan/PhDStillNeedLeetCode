add_executable(62 main.cpp)

if(T)
    add_executable(62_test test.cpp)
    target_link_libraries(62_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(62_test)
endif(T)


install(TARGETS 62 DESTINATION ${INSTALL_DIR})