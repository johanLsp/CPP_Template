#pragma once

#include <memory>

#include "Machine.h"

class Machine;

class State {
    public:
        virtual void sell(Machine& machine, int quantity) = 0;
        virtual void refill(Machine& machine, int quantity) = 0;
    protected:
        void setState(Machine& machine, State* state);
        void updateStock(Machine& machine, int quantity);
};

class Normal : public State {
    public:
        void sell(Machine& machine, int quantity) override;
        void refill(Machine& machine, int quantity) override;
};

class SoldOut : public State {
    public:
        void sell(Machine& machine, int quantity) override;
        void refill(Machine& machine, int quantity) override;
};
