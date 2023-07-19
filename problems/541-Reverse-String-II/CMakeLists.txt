add_executable(541 main.cpp)

if(T)
    add_executable(541_test test.cpp)
    target_link_libraries(541_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(541_test)
endif(T)


install(TARGETS 541 DESTINATION ${INSTALL_DIR})