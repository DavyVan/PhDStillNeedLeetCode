add_executable(455 main.cpp)

if(T)
    add_executable(455_test test.cpp)
    target_link_libraries(455_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(455_test)
endif(T)


install(TARGETS 455 DESTINATION ${INSTALL_DIR})