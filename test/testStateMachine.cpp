// testStateMAchine.cpp
#include "Machine.h"

#define BOOST_TEST_MODULE hello test
#define BOOST_TEST_MAIN
#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include <assert.h>



BOOST_AUTO_TEST_CASE(arithmetic_test)
{
  int a = 1;
  int b = 2;
  BOOST_CHECK_NE(a, b);
  b = a;
  BOOST_CHECK_EQUAL(a, b);
}



BOOST_AUTO_TEST_CASE(sell_test)
{
    Machine machine(10);
    machine.sell(3);

    int stock = machine.getCurrentStock();
    BOOST_CHECK_EQUAL(stock, 7);
}

BOOST_AUTO_TEST_CASE(refill_test)
{
    Machine machine(10);
    machine.refill(10);

    int stock = machine.getCurrentStock();
    BOOST_CHECK_EQUAL(stock, 20);
}
