cmake_minimum_required(VERSION 3.21)
project(List C)

set(CMAKE_C_STANDARD 99)

add_executable(List main.c List_include/struck_List.h List_include/insert_List.h List_include/init_List.h List_include/delete_List.h List_include/find_List.h List_include/merge_List.h)
