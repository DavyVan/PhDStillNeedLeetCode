add_executable(507 main.cpp)

if(T)
    add_executable(507_test test.cpp)
    target_link_libraries(507_test gtest_main)
    # add_test(NAME 1108 COMMAND 1108_test)    
    include(GoogleTest)
    gtest_discover_tests(507_test)
endif(T)


install(TARGETS 507 DESTINATION ${INSTALL_DIR})