add_executable(237 main.cpp kernel.cpp)

if(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)
    add_executable(237_test kernel.cpp test.cpp)
    target_link_libraries(237_test gtest_main)
    # add_test(NAME 2371 COMMAND 2371_test)    
    include(GoogleTest)
    gtest_discover_tests(237_test)
else(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)
    message(STATUS "Test building is skipped for 237")
endif(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)


install(TARGETS 237 DESTINATION ${INSTALL_DIR})
