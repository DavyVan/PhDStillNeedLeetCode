add_executable(119 main.cpp kernel.cpp)

if(T)
    add_executable(119_test kernel.cpp test.cpp)
    target_link_libraries(119_test gtest_main)
    # add_test(NAME 1191 COMMAND 1191_test)    
    include(GoogleTest)
    gtest_discover_tests(119_test)
endif(T)


install(TARGETS 119 DESTINATION ${INSTALL_DIR})
