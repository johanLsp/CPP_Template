#include "Machine.h"

Machine::Machine(int inStockQuantity) :
    mStockQuantity(inStockQuantity) {
  if (inStockQuantity > 0) {
    mState.reset(new Normal());
  } else {
    mState.reset(new SoldOut());
  }
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
