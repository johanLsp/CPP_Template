// AbstractState.h
#include "States.h"

AbstractState::~AbstractState() {
}

void AbstractState::setState(Machine& machine, AbstractState* state) {
    AbstractState* aux = machine.mState;
    machine.mState = state; 
    delete aux;
}

void AbstractState::updateStock(Machine& machine, int quantity) {
    machine.mStockQuantity = quantity;
}