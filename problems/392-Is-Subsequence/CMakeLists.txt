add_executable(392 main.cpp kernel.cpp)

if(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)
    add_executable(392_test kernel.cpp test.cpp)
    target_link_libraries(392_test gtest_main)
    # add_test(NAME 3921 COMMAND 3921_test)    
    include(GoogleTest)
    gtest_discover_tests(392_test)
else(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)
    message(STATUS "Test building is skipped for 392")
endif(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)


install(TARGETS 392 DESTINATION ${INSTALL_DIR})
