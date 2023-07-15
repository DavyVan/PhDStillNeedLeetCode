add_executable(434 main.cpp)

if(T)
    add_executable(434_test test.cpp)
    target_link_libraries(434_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(434_test)
endif(T)


install(TARGETS 434 DESTINATION ${INSTALL_DIR})