add_executable(412 main.cpp)

if(T)
    add_executable(412_test test.cpp)
    target_link_libraries(412_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(412_test)
endif(T)


install(TARGETS 412 DESTINATION ${INSTALL_DIR})