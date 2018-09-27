//
// Created by Nirajan on 2018-09-27.
//
#include <iostream>
#ifndef LAB3_STACK_HPP
#define LAB3_STACK_HPP

class stack
{
public:
    static constexpr int array_max = 9;

    //Constructor for the class
    stack();

    //Accepts an int and adds it to the top of the stack
    bool push(int newValue);

    //Removes the int at the top of the stack
    void pop();

    //Returns the int at the top of the stack
    const int top();

    //Returns true if the stack is empty, false otherwise
    const bool empty();

    //Returns true of the stack is full, false otherwise
    const bool full();

    //Prints the contents of the stack
    const std::string print();

private:
    int Array[array_max]{}; //Int array of size 10
    int topIndex; //Stores the index of the top of the stack

};

#endif //LAB3_STACK_HPP
