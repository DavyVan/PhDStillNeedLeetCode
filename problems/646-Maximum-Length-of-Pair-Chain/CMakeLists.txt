add_executable(646 main.cpp)

if(T)
    add_executable(646_test test.cpp)
    target_link_libraries(646_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(646_test)
endif(T)


install(TARGETS 646 DESTINATION ${INSTALL_DIR})