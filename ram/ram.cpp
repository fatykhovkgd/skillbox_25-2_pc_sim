#pragma once
#include <iostream>
#include "ram.h"

void read (int& digits) {
    std::cout << digits << std::endl;
}

void write (int& digits) {
    std::cout << "Input eight digits: ";
    std::cin >> digits;
}
