if(Q)   
    # Q is not 0. Only add designated problem into build tree
    message(STATUS "Configuring to build problem ${Q}...")
    file(GLOB SUB_DIRS CONFIGURE_DEPENDS LIST_DIRECTORIES true ${CMAKE_CURRENT_LIST_DIR}/${Q}-*)
    add_subdirectory(${SUB_DIRS})
else(Q) 
    # Q is 0. Add all subdirectories
    message(STATUS "Configuring to build all problems...")
    file(GLOB SUB_DIRS CONFIGURE_DEPENDS LIST_DIRECTORIES true ${CMAKE_CURRENT_LIST_DIR}/*-*)
    foreach(dir ${SUB_DIRS})
        add_subdirectory(${dir})
    endforeach(dir ${SUB_DIRS})
endif(Q)
