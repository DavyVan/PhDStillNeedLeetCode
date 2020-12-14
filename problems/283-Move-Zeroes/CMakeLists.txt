add_executable(283 main.cpp kernel.cpp)

if(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)
    add_executable(283_test kernel.cpp test.cpp)
    target_link_libraries(283_test gtest_main)
    # add_test(NAME 2831 COMMAND 2831_test)    
    include(GoogleTest)
    gtest_discover_tests(283_test)
else(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)
    message(STATUS "Test building is skipped for 283")
endif(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)


install(TARGETS 283 DESTINATION ${INSTALL_DIR})
