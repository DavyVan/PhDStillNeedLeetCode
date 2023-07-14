add_executable(338 main.cpp)

if(T)
    add_executable(338_test test.cpp)
    target_link_libraries(338_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(338_test)
endif(T)


install(TARGETS 338 DESTINATION ${INSTALL_DIR})