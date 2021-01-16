add_executable(389 main.cpp kernel.cpp)

if(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)
    add_executable(389_test kernel.cpp test.cpp)
    target_link_libraries(389_test gtest_main)
    # add_test(NAME 3891 COMMAND 3891_test)    
    include(GoogleTest)
    gtest_discover_tests(389_test)
else(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)
    message(STATUS "Test building is skipped for 389")
endif(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)


install(TARGETS 389 DESTINATION ${INSTALL_DIR})
