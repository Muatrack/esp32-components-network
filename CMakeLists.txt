cmake_minimum_required(VERSION 3.16)
project(elc_network)

SET(CMAKE_BUILD_TYPE "Debug")

set(
    SRCS        
        src/cylog_impl_alarm.cpp
        src/cylog_store_linux.cpp
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 定义文件数据结构的版本
add_compile_definitions(CYLOG_FILE_VER=1)
# 定义文件判断是否已满时用到的空洞大小
add_compile_definitions(CYLOG_FILE_HOLE_SIZE=64)

if(CMAKE_BUILD_TYPE)
    SET(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g2 -ggdb")  
    SET(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall") 
endif()

if(${CMAKE_SYSTEM_NAME} STREQUAL "Linux")
    add_executable(elc_network ${SRCS}
                         main.cpp
                         test/test_cls.cpp
                         test/test_adv_prointer.cpp
                        )
    target_sources(elc_network PRIVATE main.cpp)
    add_compile_definitions(USE_SYSTEM_LINUX)
    message("CYLOG_SYSTEM is Linux")
elseif(${CMAKE_SYSTEM_NAME} STREQUAL "Generic")
    add_library(elc_network STATIC ${SRCS})
    add_compile_definitions(USE_SYSTEM_GENERIC)
    message("CYLOG_SYSTEM is generic")
else()
    message(ERROR "No system matched")
endif()

target_include_directories(elc_network
                PRIVATE     ./
                PUBLIC      include/common_def
)
