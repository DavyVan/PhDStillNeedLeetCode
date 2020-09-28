add_executable(110 main.cpp kernel.cpp)

if(T)
    add_executable(110_test kernel.cpp test.cpp)
    target_link_libraries(110_test gtest_main)
    # add_test(NAME 1110 COMMAND 1110_test)    
    include(GoogleTest)
    gtest_discover_tests(110_test)
endif(T)


install(TARGETS 110 DESTINATION ${INSTALL_DIR})