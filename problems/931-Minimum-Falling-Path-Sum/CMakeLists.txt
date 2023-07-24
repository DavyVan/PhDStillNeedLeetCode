add_executable(931 main.cpp)

if(T)
    add_executable(931_test test.cpp)
    target_link_libraries(931_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(931_test)
endif(T)


install(TARGETS 931 DESTINATION ${INSTALL_DIR})