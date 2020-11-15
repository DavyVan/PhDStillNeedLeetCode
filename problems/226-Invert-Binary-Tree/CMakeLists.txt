add_executable(226 main.cpp kernel.cpp)

if(T AND EXISTS "test.cpp")
    add_executable(226_test kernel.cpp test.cpp)
    target_link_libraries(226_test gtest_main)
    # add_test(NAME 2261 COMMAND 2261_test)    
    include(GoogleTest)
    gtest_discover_tests(226_test)
else(T AND EXISTS "test.cpp")
    message(STATUS "Test building is skipped for 226")
endif(T AND EXISTS "test.cpp")


install(TARGETS 226 DESTINATION ${INSTALL_DIR})
