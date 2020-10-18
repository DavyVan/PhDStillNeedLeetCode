add_executable(167 main.cpp kernel.cpp)

if(T)
    add_executable(167_test kernel.cpp test.cpp)
    target_link_libraries(167_test gtest_main)
    # add_test(NAME 1671 COMMAND 1671_test)    
    include(GoogleTest)
    gtest_discover_tests(167_test)
endif(T)


install(TARGETS 167 DESTINATION ${INSTALL_DIR})