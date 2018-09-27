#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() put this in one cpp file
#define FIRST_INT  5

#include "catch.hpp"
#include "stack.hpp"
#include <string>

//Precondition is an empty stack
//Post condition is empty to return true
TEST_CASE("A new stack is empty", "[stack]")
{
    Stack tester;
    REQUIRE(tester.empty() == true);
    REQUIRE(tester.full() == false);
}

//Precondition is a int value
//Post condition is push to return true
TEST_CASE("Push Test", "[push}")
{
    Stack tester;
    REQUIRE(tester.push(FIRST_INT) == true);
}

//Precondition is a stack with value in it
//Post condition is top to return the value of the last added int
TEST_CASE("Top Test", "[Top]")
{
    Stack tester;
    tester.push(5);
    tester.push(6);
    tester.push(7);
    tester.push(8);
    REQUIRE(tester.top() == 8);
}

//Precondition is a stack with values in it
//Post condition is pop to return 2nd last value added
TEST_CASE("Pop Test", "[Pop]")
{
    Stack tester;
    tester.push(5);
    tester.push(6);
    tester.push(7);
    tester.push(8);
    tester.pop();
    REQUIRE(tester.top() == 7);
}

//Precondition is a full stack
//Post condition is full to return true
TEST_CASE("Full Test", "[Full}") {
    Stack tester;
    tester.push(5);
    tester.push(6);
    tester.push(7);
    tester.push(8);
    tester.push(9);
    tester.push(5);
    tester.push(6);
    tester.push(7);
    tester.push(8);
    tester.push(9);
    tester.push(255);
    REQUIRE(tester.full());
    REQUIRE(tester.top() == 9);
    REQUIRE(!tester.empty());
}

//Precondition is a stack with values on it
//Post condition is the strings are the same
TEST_CASE("Print Test", "[Print}") {
    Stack tester;
    tester.push(1);
    tester.push(2);
    tester.push(3);
    tester.push(4);
    tester.push(5);
    tester.push(6);
    REQUIRE(tester.print() == "123456");
}
