add_executable(204 main.cpp kernel.cpp)

if(T)
    add_executable(204_test kernel.cpp test.cpp)
    target_link_libraries(204_test gtest_main)
    # add_test(NAME 2041 COMMAND 2041_test)    
    include(GoogleTest)
    gtest_discover_tests(204_test)
endif(T)


install(TARGETS 204 DESTINATION ${INSTALL_DIR})
