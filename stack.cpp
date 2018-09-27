
#include "stack.hpp"

stack::stack() {
    topIndex = -1;
}

bool stack::push(int newValue){
    if(topIndex == 9) {
        return false;
    } else {
        topIndex = topIndex + 1;
        Array[topIndex] = newValue;
    }
    return true;
}

void stack::pop(){
    topIndex -= topIndex;
}

const int stack::top(){
    return Array[topIndex];
}

const bool stack::empty(){
    return topIndex == -1;
}

const bool stack::full() {
    return topIndex == 9;
}

const void stack::print(){
    for(int i = 0; i <= array_max; i++){
        std::cout << i << " ";
    }
}

int main() {
    return 0;
}