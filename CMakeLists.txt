﻿cmake_minimum_required (VERSION 3.22.3)

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project ("CppPractice" C CXX)

file(GLOB CPP_PRACTICE_MAIN CONFIGURE_DEPENDS
	"${CMAKE_CURRENT_SOURCE_DIR}/src/source/*.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/src/source/*.c"
)

file(GLOB CPP_PRACTICE_CHAPTER2 CONFIGURE_DEPENDS
	"${CMAKE_CURRENT_SOURCE_DIR}/src/source/chapter2/*.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/src/source/chapter2/*.c"
)

file(GLOB CPP_PRACTICE_CHAPTER3 CONFIGURE_DEPENDS
	"${CMAKE_CURRENT_SOURCE_DIR}/src/source/chapter3/*.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/src/source/chapter3/*.c"
)

set(CPP_PRACTICE_SOURCES ${CPP_PRACTICE_MAIN} ${CPP_PRACTICE_CHAPTER2} ${CPP_PRACTICE_CHAPTER3}) 

add_executable(CppPractice ${CPP_PRACTICE_SOURCES})
target_include_directories(CppPractice PUBLIC
	"${CMAKE_CURRENT_SOURCE_DIR}/src/include"
	"${CMAKE_CURRENT_SOURCE_DIR}/src/include/chapter2"
	"${CMAKE_CURRENT_SOURCE_DIR}/src/include/chapter3"
)
