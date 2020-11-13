add_executable(217 main.cpp kernel.cpp)

if(T)
    add_executable(217_test kernel.cpp test.cpp)
    target_link_libraries(217_test gtest_main)
    # add_test(NAME 2171 COMMAND 2171_test)    
    include(GoogleTest)
    gtest_discover_tests(217_test)
endif(T)


install(TARGETS 217 DESTINATION ${INSTALL_DIR})
