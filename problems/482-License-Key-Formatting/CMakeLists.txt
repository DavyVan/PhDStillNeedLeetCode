add_executable(482 main.cpp)

if(T)
    add_executable(482_test test.cpp)
    target_link_libraries(482_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(482_test)
endif(T)


install(TARGETS 482 DESTINATION ${INSTALL_DIR})