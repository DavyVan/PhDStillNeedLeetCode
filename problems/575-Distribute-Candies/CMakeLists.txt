add_executable(575 main.cpp)

if(T)
    add_executable(575_test test.cpp)
    target_link_libraries(575_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(575_test)
endif(T)


install(TARGETS 575 DESTINATION ${INSTALL_DIR})