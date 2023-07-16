add_executable(476 main.cpp)

if(T)
    add_executable(476_test test.cpp)
    target_link_libraries(476_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(476_test)
endif(T)


install(TARGETS 476 DESTINATION ${INSTALL_DIR})