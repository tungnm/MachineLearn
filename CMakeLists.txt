# The name of our project is "RES_REMAKE". CMakeLists files in this project can 
# refer to the root source directory of the project as ${RES_REMAKE_SOURCE_DIR} and 
# to the root binary directory of the project as ${RES_REMAKE_BINARY_DIR}. 
cmake_minimum_required (VERSION 2.8.4) 
project (AI) 

include_directories("${PROJECT_SOURCE_DIR}/ThirdPartyLibs/glfw/include")
include_directories("${PROJECT_SOURCE_DIR}/ThirdPartyLibs/MUD/")
include_directories("${PROJECT_SOURCE_DIR}/ThirdPartyLibs/")
add_subdirectory ("${PROJECT_SOURCE_DIR}/ThirdPartyLibs/glfw/")
set (MUD_SOURCE
    ThirdPartyLibs/MUD/threading/unix/UnixSimpleLock.cpp
    ThirdPartyLibs/MUD/threading/unix/UnixThread.cpp
    ThirdPartyLibs/MUD/threading/unix/UnixThreadUtil.cpp
    ThirdPartyLibs/MUD/threading/unix/UnixWaitableLock.cpp
    ThirdPartyLibs/MUD/base/TimeVal.cpp
    ThirdPartyLibs/MUD/base/unix/SharedUnixTimeVal.cpp
    ThirdPartyLibs/AmazonCompositeResult/SimpleResultCodes.cpp
    )
add_executable (test1 testMain.cc ${MUD_SOURCE})
target_link_libraries(test1 glfw ${GLFW_LIBRARIES})
