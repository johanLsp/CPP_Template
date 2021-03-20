#include <iostream>

#include "Machine.h"


int main(int argc, char** argv) {
    Machine m(10);

    m.sell(10);
    std::cout << "Sold 10 items" << std::endl;

    try {
        m.sell(1);
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    m.refill(20);
    std::cout << "Refilled 20 items" << std::endl;

    m.sell(10);
    std::cout << "Sold 10 items" << std::endl;
    std::cout << "Remaining " << m.getCurrentStock() << " items" << std::endl;

    m.sell(5);
    std::cout << "Sold 5 items" << std::endl;
    std::cout << "Remaining " << m.getCurrentStock() << " items" << std::endl;

    try {
        m.sell(10);
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
