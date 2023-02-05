#include <iostream>
#include "pointers.h"

using std::cout;
using std::endl;

void printNumber(int* numberPtr){
    cout << *numberPtr  << endl;
}

void printChar(char* charPtr){
    cout << *charPtr  << endl;
}

void printAny(void* ptr, char type){
    switch (type){
        case 'i' :  cout << *((int*)ptr)  << endl; break;
        case 'c' :  cout << *((char*)ptr)  << endl; break;
        default: break;
    }    
}

void pointerOne(){
    // getting the addres
    int n = 5;
    cout << &n  << endl;
    // storing the addres
    int* ptr = &n;
    cout << ptr  << endl;
    //geting the value
    cout << *ptr  << endl;
    // assining value to an address
    *ptr = 14;
    cout << *ptr  << endl;
    cout << n  << endl; // the value of var n change
}

void pointerTwo(){
    int number = 15;
    char letter = 'g';
    printNumber(&number);
    printChar(&letter);
    printAny(&number, 'i');
    printAny(&letter, 'c');
}

void pointerThree(){
    // the name of array is the address of the first element of the array
    int luckyNumbers[5] = {1,2,3,4,5};
    cout << luckyNumbers  << endl;
    cout << &luckyNumbers[0]  << endl;
    // getting the value of second array position
    cout << luckyNumbers[1]  << endl;
    // you can do the same in this way: the address plus 1 position
    cout << *(luckyNumbers+1)  << endl;
}