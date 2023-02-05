#include <iostream>
#include "get_data.h"

using std::cout;
using std::cin;
using std::endl;

void getData(){
    int age = 0;
    cout << "insert your age: ";
    cin >> age;
    cout << "Your are " << age  << " years old." << endl;
}

void getConditionalResult(){
    bool firstCondition = true;
    bool secondCondition = false;

    if (firstCondition && secondCondition){
        cout << "And condition" << endl;
    }
    if (firstCondition || secondCondition){
        cout << "Or condition" << endl;
    }
    if (!secondCondition){
        cout << "Not condition" << endl;
    }
}