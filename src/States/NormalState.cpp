#include "States.h"

#include <stdexcept>

void Normal::sell(Machine& machine, int quantity) {
    int currStock = machine.getCurrentStock();
    if (currStock < quantity) {
        throw std::runtime_error("Not enough stock");
    }

    updateStock(machine, currStock - quantity);

    if (machine.getCurrentStock() == 0) {
        setState(machine, new SoldOut());
    }
}

void Normal::refill(Machine& machine, int quantity) {
    int currStock = machine.getCurrentStock();
    updateStock(machine, currStock + quantity);
}
