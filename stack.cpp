#include "stack.hpp"

Stack::Stack() {
    topIndex = -1;
}

bool Stack::push(int newValue){
    if(topIndex == 9) {
        return false;
    } else {
        topIndex = topIndex + 1;
        Array[topIndex] = newValue;
    }
    return true;
}

void Stack::pop(){
    topIndex = topIndex - 1;
}

const int Stack::top(){
    return Array[topIndex];
}

const bool Stack::empty(){
    return topIndex == -1;
}

const bool Stack::full() {
    return topIndex == 9;
}

const std::string Stack::print(){
    std::string toPrint;
    for(int i = 0; i <= topIndex; i++){
        toPrint += std::to_string(Array[i]);
    }
    return toPrint;
}

//int main() {
//    return 0;
//}