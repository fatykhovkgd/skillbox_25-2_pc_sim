#include <iostream>
#include "kbd/kbd.h"
#include "gpu/gpu.h"
#include "cpu/cpu.h"
#include "ram/ram.h"
#include "disk/disk.h"

int main() {

    std::string command;
    int digits;

    std::cout << "PC simulator" << std::endl;

        do {
            std::cout << "Input command: ";
            std::cin >> command;

            if (command == "kbd") {
                inputDigits(digits);
            } else if (command == "gpu") {
                outputDigits(digits);
            } else if (command == "cpu") {
                sum(digits);
            } else if (command == "ram") {
                std::string ramCommand;
                std::cout << "Input command for ram: ";
                std::cin >> ramCommand;
                    if (ramCommand == "read") {
                        read(digits);
                    } else if (ramCommand == "write") {
                        write(digits);
                    }
            } else if (command == "disk") {
                std::string diskCommand;
                std::cout << "Input command for disk: ";
                std::cin >> diskCommand;
            }

        } while (command != "exit");

    return 0;
}
