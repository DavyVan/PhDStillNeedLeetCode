add_executable(367 main.cpp kernel.cpp)

if(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)
    add_executable(367_test kernel.cpp test.cpp)
    target_link_libraries(367_test gtest_main)
    # add_test(NAME 3671 COMMAND 3671_test)    
    include(GoogleTest)
    gtest_discover_tests(367_test)
else(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)
    message(STATUS "Test building is skipped for 367")
endif(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)


install(TARGETS 367 DESTINATION ${INSTALL_DIR})
