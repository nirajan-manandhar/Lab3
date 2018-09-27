//
// Created by Nirajan on 2018-09-27.
//

#ifndef LAB3_STACK_HPP
#define LAB3_STACK_HPP

class stack
{
public:
    static constexpr int array_max = 9;



private:
    int Array[array_max]; //Int array of size 10
    int topIndex; //Stores the index of the top of the stack
};

#endif //LAB3_STACK_HPP
