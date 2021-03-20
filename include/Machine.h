#pragma once

#include <memory>

#include "States.h"

class State;

/**
 * \class Machine
 * \brief A generic state machine implementation
 *
 * This class is meant as an example. 
 */
class Machine {
    friend class State;
    public:
        explicit Machine(int inStockQuantity);
        void sell(int quantity);
        void refill(int quantity);
        int getCurrentStock();
    private:
        int mStockQuantity;
        std::unique_ptr<State> mState;
};
