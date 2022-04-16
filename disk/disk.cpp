#pragma once
#include <fstream>
#include <iostream>
#include "disk.h"

void save (int& digits) {
    std::ofstream file("./data.txt");
    file << digits;
    file.close();
}

void load (int& digits) {
    std::ifstream file;
    file.open("./data.txt");
    int tmp;
    file >> tmp;
    std::cout << tmp << std::endl;
    file.close();
}
