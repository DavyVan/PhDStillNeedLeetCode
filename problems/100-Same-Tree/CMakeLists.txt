add_executable(100 main.cpp kernel.cpp)

if(T)
    add_executable(100_test kernel.cpp test.cpp)
    target_link_libraries(100_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(100_test)
else(T)
    message(WARNING "Problem 100 has an empty main function. Please enable testing to run this problem.")
endif(T)


install(TARGETS 100 DESTINATION ${INSTALL_DIR})