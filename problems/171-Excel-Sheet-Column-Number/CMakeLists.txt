add_executable(171 main.cpp kernel.cpp)

if(T)
    add_executable(171_test kernel.cpp test.cpp)
    target_link_libraries(171_test gtest_main)
    # add_test(NAME 1711 COMMAND 1711_test)    
    include(GoogleTest)
    gtest_discover_tests(171_test)
endif(T)


install(TARGETS 171 DESTINATION ${INSTALL_DIR})
