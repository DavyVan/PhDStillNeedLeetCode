add_executable(350 main.cpp kernel.cpp)

if(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)
    add_executable(350_test kernel.cpp test.cpp)
    target_link_libraries(350_test gtest_main)
    # add_test(NAME 3501 COMMAND 3501_test)    
    include(GoogleTest)
    gtest_discover_tests(350_test)
else(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)
    message(STATUS "Test building is skipped for 350")
endif(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)


install(TARGETS 350 DESTINATION ${INSTALL_DIR})
