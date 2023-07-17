add_executable(495 main.cpp)

if(T)
    add_executable(495_test test.cpp)
    target_link_libraries(495_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(495_test)
endif(T)


install(TARGETS 495 DESTINATION ${INSTALL_DIR})