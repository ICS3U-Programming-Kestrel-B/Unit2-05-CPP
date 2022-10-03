// Copyright (c) 2022 KestrelBryce All rights reserved
// Created by: KestrelBryce
// Created on: Oct 3, 2022
// This program shows how local and global variables work

#include <iostream>

// global variable
int global_here = 25;

void localVariable() {
    // this shows what happens with local variables
    int global_here = 20;
    int another_global = 50;
    int third_global = global_here + another_global;
    std::cout << "Local global_here, another_global, third_global: "
    << global_here
              << " + " << another_global << " = " << third_global << std::endl;
}

void globalVariable() {
    // this shows what happens with global variables
    global_here = global_here + 1;
    int another_global = 30;
    int third_global = global_here + another_global;
    std::cout << "Local global_here, another_global, third_global: "
    << global_here
              << " + " << another_global << " = " << third_global << std::endl;
}

int main() {
    // this function calls local and global
    localVariable();
    globalVariable();

    std::cout << "\nDone. " << std::endl;
}
