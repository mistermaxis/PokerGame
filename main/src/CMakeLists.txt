include_directories(${CMAKE_SOURCE_DIR}/game/include)
link_directories(${CMAKE_SOURCE_DIR}/lib)
add_executable(poker main.cpp)
target_link_libraries(poker game)