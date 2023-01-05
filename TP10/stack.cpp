#include "stack.h"
#include <iostream>

using namespace std;

void createStack(stack &S){
    top(S) = 0;
};

bool isEmpty(stack S){
    if (top(S) == 0) {
        return true;
    }else {
        return false;
    }
};
bool isFull(stack S){
    if (top(S) == 15) {
        return true;
    }else {
        return false;
    }
};
void push(stack &S, infotype x){
    if (!isFull(S)){
        top(S) = top(S) + 1;
        info(S)[top(S)] = x;
    }
};
infotype pop(stack &S){
    infotype x;
    x = info(S)[top(S)];
    top(S) = top(S) - 1;
    return x;
};

void printInfo(stack S){
    if (isEmpty(S)){
        cout << "Stack Kosong" << endl;
    }else {
        for(int i = top(S);i > 0;i--){
             cout << info(S)[i] << " ";
        }
        cout << endl;
    }
};
