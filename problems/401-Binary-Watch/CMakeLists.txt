add_executable(401 main.cpp kernel.cpp)

if(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)
    add_executable(401_test kernel.cpp test.cpp)
    target_link_libraries(401_test gtest_main)
    # add_test(NAME 4011 COMMAND 4011_test)    
    include(GoogleTest)
    gtest_discover_tests(401_test)
else(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)
    message(STATUS "Test building is skipped for 401")
endif(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)


install(TARGETS 401 DESTINATION ${INSTALL_DIR})
