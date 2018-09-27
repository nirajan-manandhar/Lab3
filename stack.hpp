//
// Created by Nirajan on 2018-09-27.
//

#ifndef LAB3_STACK_HPP
#define LAB3_STACK_HPP

class stack
{
public:
    static constexpr int array_max = 9;

    stack(){
        topIndex = -1;
    }

    bool push(int newValue){
        if(topIndex == 9) {
            return false;
        } else {
            topIndex = topIndex + 1;
            Array[topIndex] = newValue;
        }
        return true;
    }

    void pop(){
        topIndex -= topIndex;
    }

    const int top(){

    }

private:
    int Array[array_max]{}; //Int array of size 10
    int topIndex; //Stores the index of the top of the stack
};

#endif //LAB3_STACK_HPP
