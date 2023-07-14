add_executable(405 main.cpp)

if(T)
    add_executable(405_test test.cpp)
    target_link_libraries(405_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(405_test)
endif(T)


install(TARGETS 405 DESTINATION ${INSTALL_DIR})