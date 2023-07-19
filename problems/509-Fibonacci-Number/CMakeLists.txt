add_executable(509 main.cpp)

if(T)
    add_executable(509_test test.cpp)
    target_link_libraries(509_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(509_test)
endif(T)


install(TARGETS 509 DESTINATION ${INSTALL_DIR})