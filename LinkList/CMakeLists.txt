cmake_minimum_required(VERSION 3.21)
project(c_program C)

set(CMAKE_C_STANDARD 99)

add_executable(c_program main.c LinkList_include/delete_LinkList.h LinkList_include/struck_LinkList.h LinkList_include/creat_LinkLIst.h LinkList_include/merge_LinkList.h LinkList_include/length_LinkList.h LinkList_include/find_LinkList.h LinkList_include/print_LinkList.h)
