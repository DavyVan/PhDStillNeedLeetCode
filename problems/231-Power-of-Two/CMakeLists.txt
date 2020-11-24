add_executable(231 main.cpp kernel.cpp)

if(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)
    add_executable(231_test kernel.cpp test.cpp)
    target_link_libraries(231_test gtest_main)
    # add_test(NAME 2311 COMMAND 2311_test)    
    include(GoogleTest)
    gtest_discover_tests(231_test)
else(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)
    message(STATUS "Test building is skipped for 231")
endif(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)


install(TARGETS 231 DESTINATION ${INSTALL_DIR})
