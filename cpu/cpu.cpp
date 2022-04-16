#pragma once
#include "cpu.h"
#include <string>
#include <iostream>

void sum (int& digit) {

    std::string digits = std::to_string(digit);
    int summary = 0;
        for (int i = 0; i < digits.size(); i++) {
            summary += digits[i] - '0';
        }
    std::cout << summary << std::endl;
}

