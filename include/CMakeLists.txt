add_library (baseComponents STATIC)
target_include_directories( baseComponents
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include
    PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src
)
set_target_properties(baseComponents PROPERTIES LINKER_LANGUAGE CXX)
target_include_directories (baseComponents PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})