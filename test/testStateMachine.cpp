#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "Machine.h"

TEST_CASE("Testing basic arithmetic", "[arithmetic]") {
  int a = 1;
  int b = 2;
  REQUIRE(a != b);
  b = a;
  REQUIRE(a == b);
}

TEST_CASE("Sell", "[action]") {
    Machine machine(10);
    machine.sell(3);

    int stock = machine.getCurrentStock();
    REQUIRE(stock == 7);
}

TEST_CASE("Refill", "[action]") {
    Machine machine(10);
    machine.refill(10);

    int stock = machine.getCurrentStock();
    REQUIRE(stock == 20);
}
