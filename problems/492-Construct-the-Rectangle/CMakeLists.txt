add_executable(492 main.cpp)

if(T)
    add_executable(492_test test.cpp)
    target_link_libraries(492_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(492_test)
endif(T)


install(TARGETS 492 DESTINATION ${INSTALL_DIR})