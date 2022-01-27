cmake_minimum_required(VERSION 3.21)
project(Diary C)

set(CMAKE_C_STANDARD 11)

add_executable(Diary
        exit.c
        main.c
        menu.c
        password.c
        read.c
        write.c
        themeswitcher.c themeswitcher.c delete.c)
