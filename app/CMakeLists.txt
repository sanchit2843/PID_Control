add_executable(shell-app main.cpp PID.cpp)
include_directories(
    ${CMAKE_SOURCE_DIR}/include
)
add_library(pid PID.cpp ${CMAKE_SOURCE_DIR}/include/PID.hpp)
target_include_directories(pid PUBLIC ${CMAKE_SOURCE_DIR}/include)