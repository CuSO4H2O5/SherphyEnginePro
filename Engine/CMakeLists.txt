#set project name
set(TARGET_NAME Engine)

# adding files
file(GLOB_RECURSE HEADERS "*.h")
file(GLOB_RECURSE SOURCES "*.cpp")

#add exe/lib
add_library(${TARGET_NAME} ${HEADERS} ${SOURCES})

#deps
# add_dependencies(${TARGET_NAME} )

#precompile header

#keep structure
source_group(TREE "${CMAKE_SOURCE_DIR}" FILES ${HEADERS} ${SOURCES})

#link
# target_link_libraries()

# target_include_directories()

# target_compile_definations()


