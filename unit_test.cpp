#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() put this in one cpp file
#include "catch.hpp"

TEST_CASE("A new stack is empty", "[stack")
{
    comp3512::stack tester;
    REQUIRE(tester.empty() == true);
    REQUIRE(tester.full() == false);
}