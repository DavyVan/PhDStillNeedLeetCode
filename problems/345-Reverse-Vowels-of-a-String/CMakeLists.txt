add_executable(345 main.cpp kernel.cpp)

if(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)
    add_executable(345_test kernel.cpp test.cpp)
    target_link_libraries(345_test gtest_main)
    # add_test(NAME 3451 COMMAND 3451_test)    
    include(GoogleTest)
    gtest_discover_tests(345_test)
else(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)
    message(STATUS "Test building is skipped for 345")
endif(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)


install(TARGETS 345 DESTINATION ${INSTALL_DIR})
