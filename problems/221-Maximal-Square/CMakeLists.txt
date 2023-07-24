add_executable(221 main.cpp)

if(T)
    add_executable(221_test test.cpp)
    target_link_libraries(221_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(221_test)
endif(T)


install(TARGETS 221 DESTINATION ${INSTALL_DIR})