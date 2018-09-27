#include "stack.hpp"

using namespace std;

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

const string stack::print(){
    string toPrint;
    for(int i = 0; i <= array_max; i++){
        toPrint += i + " ";
    }
    return toPrint;
}

//int main() {
//    return 0;
//}