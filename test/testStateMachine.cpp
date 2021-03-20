#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "Machine.h"

using Catch::Matchers::Contains;

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

TEST_CASE("Not enough", "[action]") {
    Machine machine(5);
    REQUIRE_THROWS_WITH(machine.sell(10), Contains("Not enough stock"));
}

TEST_CASE("Sold out", "[action]") {
    Machine machine(5);
    machine.sell(5);
    REQUIRE_THROWS_WITH(machine.sell(1), Contains("Sold out"));
}

TEST_CASE("Empty", "[action]") {
    Machine machine(0);
    REQUIRE_THROWS_WITH(machine.sell(1), Contains("Sold out"));
}
