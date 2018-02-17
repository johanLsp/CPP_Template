// Machine.h
#pragma once

#include "States.h"


class AbstractState;

/**
 * \class Machine
 * \brief A generic state machine implementation
 *
 * This class is meant as an example. 
 */
class Machine {
    friend class AbstractState;
    public:
        Machine(int inStockQuantity);
        void sell(int quantity);
        void refill(int quantity);
        int getCurrentStock();
        ~Machine();
    private:
        int mStockQuantity;
        AbstractState* mState;
};
