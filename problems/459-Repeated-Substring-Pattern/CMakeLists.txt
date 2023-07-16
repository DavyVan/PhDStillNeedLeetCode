add_executable(459 main.cpp)

if(T)
    add_executable(459_test test.cpp)
    target_link_libraries(459_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(459_test)
endif(T)


install(TARGETS 459 DESTINATION ${INSTALL_DIR})