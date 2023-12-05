find_package(Doxygen REQUIRED)

set(DOXYGEN_DISABLE_INDEX YES)
set(DOXYGEN_GENERATE_TREEVIEW YES)
set(DOXYGEN_FULL_SIDEBAR YES)
set(DOXYGEN_USE_MDFILE_AS_MAINPAGE ${CMAKE_CURRENT_SOURCE_DIR}/mainpage.md)

doxygen_add_docs(doc 
    ${CMAKE_SOURCE_DIR}/hello_world.hpp ${CMAKE_CURRENT_SOURCE_DIR}/mainpage.md
    ALL
    COMMENT "Generate HTML documentation")