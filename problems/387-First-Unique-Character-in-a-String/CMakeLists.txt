add_executable(387 main.cpp kernel.cpp)

if(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)
    add_executable(387_test kernel.cpp test.cpp)
    target_link_libraries(387_test gtest_main)
    # add_test(NAME 3871 COMMAND 3871_test)    
    include(GoogleTest)
    gtest_discover_tests(387_test)
else(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)
    message(STATUS "Test building is skipped for 387")
endif(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)


install(TARGETS 387 DESTINATION ${INSTALL_DIR})
