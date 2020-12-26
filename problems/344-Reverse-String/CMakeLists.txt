add_executable(344 main.cpp kernel.cpp)

if(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)
    add_executable(344_test kernel.cpp test.cpp)
    target_link_libraries(344_test gtest_main)
    # add_test(NAME 3441 COMMAND 3441_test)    
    include(GoogleTest)
    gtest_discover_tests(344_test)
else(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)
    message(STATUS "Test building is skipped for 344")
endif(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)


install(TARGETS 344 DESTINATION ${INSTALL_DIR})
