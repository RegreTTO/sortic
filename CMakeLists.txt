cmake_minimum_required(VERSION 3.21)
project(sortic)

set(CMAKE_CXX_STANDARD 14)

include_directories(Scripts/check_sortic)
include_directories(Scripts/rules)
include_directories(Scripts/sortic)

add_executable(sortic
        Scripts/check_sortic/check_sortic.h
        Scripts/check_sortic/sort_functions.cpp
        Scripts/check_sortic/start_functions.cpp
        Scripts/rules/functions_1.cpp
        Scripts/rules/functions_2.cpp
        Scripts/rules/functions_3.cpp
        Scripts/rules/functions_4.cpp
        Scripts/rules/rules.h
        Scripts/sortic/algorithm_functions.cpp
        Scripts/sortic/sortic.h
        Scripts/sortic/start_functions.cpp
        Scripts/sortic/additional_functions.cpp
        main.cpp Scripts/parse.cpp Scripts/parse.h Scripts/colors/colors.cpp Scripts/colors/colors.h)
