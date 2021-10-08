cmake_minimum_required(VERSION 3.20)
project(untitled1 C)

set(CMAKE_C_STANDARD 99)

add_executable(untitled1 main.c Sort.c lib.h GetPersons.c CompareStrings.c PrintAllPerson.c)
