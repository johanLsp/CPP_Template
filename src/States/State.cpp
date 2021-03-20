#include "States.h"

void State::setState(Machine& machine, State* state) {
    machine.mState.reset(state);
}

void State::updateStock(Machine& machine, int quantity) {
    machine.mStockQuantity = quantity;
}
