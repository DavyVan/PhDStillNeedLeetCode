add_executable(551 main.cpp)

if(T)
    add_executable(551_test test.cpp)
    target_link_libraries(551_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(551_test)
endif(T)


install(TARGETS 551 DESTINATION ${INSTALL_DIR})