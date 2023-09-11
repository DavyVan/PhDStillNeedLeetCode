add_executable(115 main.cpp)

if(T)
    add_executable(115_test test.cpp)
    target_link_libraries(115_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(115_test)
endif(T)


install(TARGETS 115 DESTINATION ${INSTALL_DIR})