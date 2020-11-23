add_executable(228 main.cpp kernel.cpp)

if(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)
    add_executable(228_test kernel.cpp test.cpp)
    target_link_libraries(228_test gtest_main)
    # add_test(NAME 2281 COMMAND 2281_test)    
    include(GoogleTest)
    gtest_discover_tests(228_test)
else(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)
    message(STATUS "Test building is skipped for 228")
endif(T AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp)


install(TARGETS 228 DESTINATION ${INSTALL_DIR})
