# The name of our project is "RES_REMAKE". CMakeLists files in this project can 
# refer to the root source directory of the project as ${RES_REMAKE_SOURCE_DIR} and 
# to the root binary directory of the project as ${RES_REMAKE_BINARY_DIR}. 
cmake_minimum_required (VERSION 2.8.4) 
project (AI) 

include_directories("${PROJECT_SOURCE_DIR}/ThirdPartyLibs/glfw/include")
add_subdirectory ("${PROJECT_SOURCE_DIR}/ThirdPartyLibs/glfw/")

add_executable (test1 testMain.cc)
target_link_libraries(test1 glfw ${GLFW_LIBRARIES})
