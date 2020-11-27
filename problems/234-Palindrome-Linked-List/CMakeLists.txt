add_executable(234 main.cpp kernel.cpp)

if(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)
    add_executable(234_test kernel.cpp test.cpp)
    target_link_libraries(234_test gtest_main)
    # add_test(NAME 2341 COMMAND 2341_test)    
    include(GoogleTest)
    gtest_discover_tests(234_test)
else(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)
    message(STATUS "Test building is skipped for 234")
endif(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)


install(TARGETS 234 DESTINATION ${INSTALL_DIR})
