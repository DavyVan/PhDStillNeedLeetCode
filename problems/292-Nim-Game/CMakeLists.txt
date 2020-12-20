add_executable(292 main.cpp kernel.cpp)

if(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)
    add_executable(292_test kernel.cpp test.cpp)
    target_link_libraries(292_test gtest_main)
    # add_test(NAME 2921 COMMAND 2921_test)    
    include(GoogleTest)
    gtest_discover_tests(292_test)
else(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)
    message(STATUS "Test building is skipped for 292")
endif(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)


install(TARGETS 292 DESTINATION ${INSTALL_DIR})
