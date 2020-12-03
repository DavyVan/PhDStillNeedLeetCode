add_executable(258 main.cpp kernel.cpp)

if(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)
    add_executable(258_test kernel.cpp test.cpp)
    target_link_libraries(258_test gtest_main)
    # add_test(NAME 2581 COMMAND 2581_test)    
    include(GoogleTest)
    gtest_discover_tests(258_test)
else(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)
    message(STATUS "Test building is skipped for 258")
endif(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)


install(TARGETS 258 DESTINATION ${INSTALL_DIR})
