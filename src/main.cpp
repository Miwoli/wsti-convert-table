#include <iostream>
#include "ratio.hpp"

int main(int argc, char** argv) {

    std::cout << "Unit conversion table." << std::endl;
    std::cout << "Type minimum meters of table" << std::endl;

    double m_min;
    std::cin >> m_min;

    std::cout << "Type max meters of table" << std::endl;

    double m_max;
    std::cin >> m_max;

    std::cout << "Type steps of table" << std::endl;

    double steps;
    std::cin >> steps;

    Ratio ratio{m_min, m_max, steps};

    ratio.calculate();
    ratio.display();


    std::getchar();
    return 0;
}