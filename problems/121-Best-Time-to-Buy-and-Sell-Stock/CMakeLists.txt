add_executable(121 main.cpp kernel.cpp)

if(T)
    add_executable(121_test kernel.cpp test.cpp)
    target_link_libraries(121_test gtest_main)
    # add_test(NAME 1211 COMMAND 1211_test)    
    include(GoogleTest)
    gtest_discover_tests(121_test)
endif(T)


install(TARGETS 121 DESTINATION ${INSTALL_DIR})
