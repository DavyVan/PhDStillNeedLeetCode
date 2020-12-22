add_executable(342 main.cpp kernel.cpp)

if(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)
    add_executable(342_test kernel.cpp test.cpp)
    target_link_libraries(342_test gtest_main)
    # add_test(NAME 3421 COMMAND 3421_test)    
    include(GoogleTest)
    gtest_discover_tests(342_test)
else(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)
    message(STATUS "Test building is skipped for 342")
endif(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)


install(TARGETS 342 DESTINATION ${INSTALL_DIR})
