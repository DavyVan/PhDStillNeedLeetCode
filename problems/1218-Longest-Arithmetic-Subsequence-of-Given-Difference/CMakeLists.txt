add_executable(1218 main.cpp)

if(T)
    add_executable(1218_test test.cpp)
    target_link_libraries(1218_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(1218_test)
endif(T)


install(TARGETS 1218 DESTINATION ${INSTALL_DIR})