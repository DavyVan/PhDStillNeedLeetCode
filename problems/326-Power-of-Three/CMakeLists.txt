add_executable(326 main.cpp kernel.cpp)

if(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)
    add_executable(326_test kernel.cpp test.cpp)
    target_link_libraries(326_test gtest_main)
    # add_test(NAME 3261 COMMAND 3261_test)    
    include(GoogleTest)
    gtest_discover_tests(326_test)
else(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)
    message(STATUS "Test building is skipped for 326")
endif(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)


install(TARGETS 326 DESTINATION ${INSTALL_DIR})
