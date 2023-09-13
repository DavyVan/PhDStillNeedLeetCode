add_executable(598 main.cpp)

if(T)
    add_executable(598_test test.cpp)
    target_link_libraries(598_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(598_test)
endif(T)


install(TARGETS 598 DESTINATION ${INSTALL_DIR})