#ifndef RATIO_HPP
#define RATIO_HPP

#include <iostream>
#include <string>
#include <vector>

class Ratio {
    double meter_min;
    double meter_max;
    double step;
    double yard = 1.0936133;
    double foot = 3.2808399;
    double inch = 39.3700787;
    double mile = 0.000621371192;
    std::vector<std::string> header;
    std::vector<std::vector<double>> results;

    public:
        Ratio() {
            meter_min = 5;
            meter_max = 100;
            step = 5;
        }

        Ratio(double min, double max, double s) {
            meter_min = min;
            meter_max = max;
            step = s;
        }

        void calculate();

        void display();
        
};

#endif