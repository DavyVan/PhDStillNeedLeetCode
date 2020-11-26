add_executable(232 main.cpp kernel.cpp)

if(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)
    add_executable(232_test kernel.cpp test.cpp)
    target_link_libraries(232_test gtest_main)
    # add_test(NAME 2321 COMMAND 2321_test)    
    include(GoogleTest)
    gtest_discover_tests(232_test)
else(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)
    message(STATUS "Test building is skipped for 232")
endif(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)


install(TARGETS 232 DESTINATION ${INSTALL_DIR})
