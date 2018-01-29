// Machine.cpp
#include "Machine.h"

Machine::Machine(int inStockQuantity) :
    mStockQuantity(inStockQuantity), mState(new Normal()) {
}

Machine::~Machine() {
    delete mState;
}

void Machine::sell(int quantity) {
    mState->sell(*this, quantity);
}

void Machine::refill(int quantity) {
    mState->refill(*this, quantity);
}

int Machine::getCurrentStock() {
    return mStockQuantity;
}
