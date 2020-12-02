add_executable(257 main.cpp kernel.cpp)

if(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)
    add_executable(257_test kernel.cpp test.cpp)
    target_link_libraries(257_test gtest_main)
    # add_test(NAME 2571 COMMAND 2571_test)    
    include(GoogleTest)
    gtest_discover_tests(257_test)
else(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)
    message(STATUS "Test building is skipped for 257")
endif(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)


install(TARGETS 257 DESTINATION ${INSTALL_DIR})
