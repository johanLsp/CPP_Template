#include "States.h"

#include <stdexcept>

void SoldOut::sell(Machine& machine, int quantity) {
    throw std::runtime_error("Sold out!");
}

void SoldOut::refill(Machine& machine, int quantity) {
    updateStock(machine, quantity);
    setState(machine, new Normal());
}
