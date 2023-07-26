add_executable(566 main.cpp)

if(T)
    add_executable(566_test test.cpp)
    target_link_libraries(566_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(566_test)
endif(T)


install(TARGETS 566 DESTINATION ${INSTALL_DIR})