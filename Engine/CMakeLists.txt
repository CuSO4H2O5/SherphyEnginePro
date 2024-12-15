#set project name
set(TARGET_NAME Engine)

# adding files
file(GLOB_RECURSE HEADERS "*.h")
file(GLOB_RECURSE SOURCES "*.cpp")

#add exe/lib
add_library(${TARGET_NAME} ${HEADERS} ${SOURCES})

#deps
add_dependencies(${TARGET_NAME} EngineCore)

#precompile header

#keep structure
source_group(TREE "${CMAKE_SOURCE_DIR}" FILES ${HEADERS} ${SOURCES})

#link
target_link_libraries(${TARGET_NAME} PUBLIC EngineCore)

target_include_directories(${TARGET_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

# target_compile_definations()


