add_executable(263 main.cpp kernel.cpp)

if(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)
    add_executable(263_test kernel.cpp test.cpp)
    target_link_libraries(263_test gtest_main)
    # add_test(NAME 2631 COMMAND 2631_test)    
    include(GoogleTest)
    gtest_discover_tests(263_test)
else(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)
    message(STATUS "Test building is skipped for 263")
endif(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)


install(TARGETS 263 DESTINATION ${INSTALL_DIR})
