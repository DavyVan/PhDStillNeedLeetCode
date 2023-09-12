add_executable(594 main.cpp)

if(T)
    add_executable(594_test test.cpp)
    target_link_libraries(594_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(594_test)
endif(T)


install(TARGETS 594 DESTINATION ${INSTALL_DIR})