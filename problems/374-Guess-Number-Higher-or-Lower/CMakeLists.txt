add_executable(374 main.cpp kernel.cpp)

if(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)
    add_executable(374_test kernel.cpp test.cpp)
    target_link_libraries(374_test gtest_main)
    # add_test(NAME 3741 COMMAND 3741_test)    
    include(GoogleTest)
    gtest_discover_tests(374_test)
else(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)
    message(STATUS "Test building is skipped for 374")
endif(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)


install(TARGETS 374 DESTINATION ${INSTALL_DIR})
