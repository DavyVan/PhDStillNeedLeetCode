add_executable(409 main.cpp)

if(T)
    add_executable(409_test test.cpp)
    target_link_libraries(409_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(409_test)
endif(T)


install(TARGETS 409 DESTINATION ${INSTALL_DIR})