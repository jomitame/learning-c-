#include <iostream>
#include "pointers.h"

using std::cout;
using std::cin;
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

int getMin(int numbers[], int size){
    int min = numbers[0];
    for (int i=1; i < size; i++) {
        if (numbers[i] < min){
            min = numbers[i];
        }
    }
    return min;
}

int getMax(int numbers[], int size){
    int max = numbers[0];
    for (int i=1; i < size; i++) {
        if (numbers[i] > max){
            max = numbers[i];
        }
    }
    return max;
}

void getMinAndMax(int numbers[], int size, int* min, int* max){
    for (int i=1; i < size; i++) {
        if (numbers[i] > *max){
            *max = numbers[i];
        }
        if (numbers[i] < *min){
            *min = numbers[i];
        }
    }
}

void pointerFour(){
    int numbers[5] = {5,4,3,2,1};
    cout << "Min number is: "<< getMin(numbers, 5) << endl;
    cout << "Max number is: "<< getMax(numbers, 5) << endl;
    int min = numbers[0];
    int max = numbers[0];
    getMinAndMax(numbers, 5, &min, &max);
    cout << "Min number is: "<< min << endl;
    cout << "Max number is: "<< max << endl;

}

void pointerFive(){
    int size;
    cout << "Input the size of the array: ";
    cin >> size;

    // working with dynamic memory
    // new is a command that allocate memory for us
    // other command is delete
    int* myArray = new int[size];

    for (int i=0; i < size; i++) {
        cout << "Array["<<i<<"]: ";
        cin >> myArray[i];
    }

    for (int i=0; i < size; i++) {
        // remember the name the arry is the address of first element
        // is the same of cout << myArray[i] <<"   ";
        cout << *(myArray + i) <<"   ";
    }

    // to de-allocate memory
    delete[]myArray;
    myArray = NULL;

    cout << endl;
}