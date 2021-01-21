add_executable(404 main.cpp kernel.cpp)

if(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)
    add_executable(404_test kernel.cpp test.cpp)
    target_link_libraries(404_test gtest_main)
    # add_test(NAME 4041 COMMAND 4041_test)    
    include(GoogleTest)
    gtest_discover_tests(404_test)
else(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)
    message(STATUS "Test building is skipped for 404")
endif(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)


install(TARGETS 404 DESTINATION ${INSTALL_DIR})
