cmake_minimum_required(VERSION 3.0.0)
project(PPM VERSION 0.1.0)

include(CTest)
enable_testing()

set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)

if(UNIX AND NOT APPLE)
  find_package(ALSA REQUIRED)
endif() 

include_directories(Lib io database api)
add_executable(PPM main.cpp
              Lib/PPM_error.cpp)

if (UNIX AND NOT APPLE)
  target_link_libraries(PPM PRIVATE)
  endif()
  
#target_link_libraries(PPM PRIVATE tag ${ALSA_LIBRARIES}  ${MPG123_LIBRARY} stdc++fs Threads::Threads sqlite3)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
