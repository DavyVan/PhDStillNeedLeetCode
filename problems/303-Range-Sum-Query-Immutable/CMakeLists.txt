add_executable(303 main.cpp kernel.cpp)

if(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)
    add_executable(303_test kernel.cpp test.cpp)
    target_link_libraries(303_test gtest_main)
    # add_test(NAME 3031 COMMAND 3031_test)    
    include(GoogleTest)
    gtest_discover_tests(303_test)
else(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)
    message(STATUS "Test building is skipped for 303")
endif(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)


install(TARGETS 303 DESTINATION ${INSTALL_DIR})
