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

bool Stack::full() const{
    return topIndex == 9;
}

string Stack::print(){
    string toPrint;
    cout << " Inside the string function" << endl;
    for(int i = 0; i < topIndex; i++){
        toPrint += to_string(Array[i]);
        cout << Array[i] << endl;
    }
    cout << toPrint;
    return toPrint;

}

//int main() {
//    return 0;
//}