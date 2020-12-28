add_executable(349 main.cpp kernel.cpp)

if(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)
    add_executable(349_test kernel.cpp test.cpp)
    target_link_libraries(349_test gtest_main)
    # add_test(NAME 3491 COMMAND 3491_test)    
    include(GoogleTest)
    gtest_discover_tests(349_test)
else(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)
    message(STATUS "Test building is skipped for 349")
endif(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)


install(TARGETS 349 DESTINATION ${INSTALL_DIR})
