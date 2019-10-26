#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include "ratio.hpp"

void Ratio::calculate() {

    header.emplace_back("Meter");
    header.emplace_back("Yard:");
    header.emplace_back("Foot:");
    header.emplace_back("Inch:");
    header.emplace_back("Mile:");

    for (int i = meter_min; i < meter_max; i += step) {
        std::vector<double> tmp;

        tmp.emplace_back(i);
        tmp.emplace_back(i * yard);
        tmp.emplace_back(i * foot);
        tmp.emplace_back(i * inch);
        tmp.emplace_back(i * mile);

        results.emplace_back(tmp);
    }
}

void Ratio::display() {
    for (auto head: header) {
        std::cout << std::setw(10) << head << " ";
    }

    std::cout << std::endl;

    for (auto result: results) {
        for (auto unit: result) {
            std::cout << std::setw(10) << unit << " ";
        }

        std::cout << std::endl;
    }
}