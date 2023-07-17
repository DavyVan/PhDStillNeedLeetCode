add_executable(496 main.cpp)

if(T)
    add_executable(496_test test.cpp)
    target_link_libraries(496_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(496_test)
endif(T)


install(TARGETS 496 DESTINATION ${INSTALL_DIR})