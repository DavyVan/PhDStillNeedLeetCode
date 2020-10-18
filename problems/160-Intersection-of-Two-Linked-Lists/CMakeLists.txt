add_executable(160 main.cpp kernel.cpp)

if(T)
    add_executable(160_test kernel.cpp test.cpp)
    target_link_libraries(160_test gtest_main)
    # add_test(NAME 1601 COMMAND 1601_test)    
    include(GoogleTest)
    gtest_discover_tests(160_test)
endif(T)


install(TARGETS 160 DESTINATION ${INSTALL_DIR})