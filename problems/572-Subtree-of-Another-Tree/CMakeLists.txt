add_executable(572 main.cpp)

if(T)
    add_executable(572_test test.cpp)
    target_link_libraries(572_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(572_test)
endif(T)


install(TARGETS 572 DESTINATION ${INSTALL_DIR})