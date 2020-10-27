add_executable(191 main.cpp kernel.cpp)

if(T)
    add_executable(191_test kernel.cpp test.cpp)
    target_link_libraries(191_test gtest_main)
    # add_test(NAME 1911 COMMAND 1911_test)    
    include(GoogleTest)
    gtest_discover_tests(191_test)
endif(T)


install(TARGETS 191 DESTINATION ${INSTALL_DIR})
