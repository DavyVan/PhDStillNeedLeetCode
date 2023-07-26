add_executable(139 main.cpp)

if(T)
    add_executable(139_test test.cpp)
    target_link_libraries(139_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(139_test)
endif(T)


install(TARGETS 139 DESTINATION ${INSTALL_DIR})