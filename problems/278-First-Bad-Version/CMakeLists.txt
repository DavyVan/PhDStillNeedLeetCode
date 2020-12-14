add_executable(278 main.cpp kernel.cpp)

if(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)
    add_executable(278_test kernel.cpp test.cpp)
    target_link_libraries(278_test gtest_main)
    # add_test(NAME 2781 COMMAND 2781_test)    
    include(GoogleTest)
    gtest_discover_tests(278_test)
else(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)
    message(STATUS "Test building is skipped for 278")
endif(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)


install(TARGETS 278 DESTINATION ${INSTALL_DIR})
