add_executable(72 main.cpp)

if(T)
    add_executable(72_test test.cpp)
    target_link_libraries(72_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(72_test)
endif(T)


install(TARGETS 72 DESTINATION ${INSTALL_DIR})