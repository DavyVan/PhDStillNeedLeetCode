add_executable(383 main.cpp kernel.cpp)

if(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)
    add_executable(383_test kernel.cpp test.cpp)
    target_link_libraries(383_test gtest_main)
    # add_test(NAME 3831 COMMAND 3831_test)    
    include(GoogleTest)
    gtest_discover_tests(383_test)
else(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)
    message(STATUS "Test building is skipped for 383")
endif(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)


install(TARGETS 383 DESTINATION ${INSTALL_DIR})
