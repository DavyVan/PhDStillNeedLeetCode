add_executable(599 main.cpp)

if(T)
    add_executable(599_test test.cpp)
    target_link_libraries(599_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(599_test)
endif(T)


install(TARGETS 599 DESTINATION ${INSTALL_DIR})