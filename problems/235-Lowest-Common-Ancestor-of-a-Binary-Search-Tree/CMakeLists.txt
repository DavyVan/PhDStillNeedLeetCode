add_executable(235 main.cpp kernel.cpp)

if(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)
    add_executable(235_test kernel.cpp test.cpp)
    target_link_libraries(235_test gtest_main)
    # add_test(NAME 2351 COMMAND 2351_test)    
    include(GoogleTest)
    gtest_discover_tests(235_test)
else(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)
    message(STATUS "Test building is skipped for 235")
endif(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)


install(TARGETS 235 DESTINATION ${INSTALL_DIR})
