add_executable(268 main.cpp kernel.cpp)

if(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)
    add_executable(268_test kernel.cpp test.cpp)
    target_link_libraries(268_test gtest_main)
    # add_test(NAME 2681 COMMAND 2681_test)    
    include(GoogleTest)
    gtest_discover_tests(268_test)
else(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)
    message(STATUS "Test building is skipped for 268")
endif(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)


install(TARGETS 268 DESTINATION ${INSTALL_DIR})
