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

void getIfConditionalResult(){
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

void getSwitchConditionalResult(){
    int option;
    cout << "Inters an option from 1 to 3" << endl;
    cin >> option;
    switch (option)
    {

    case 1:
        cout << "Value 1" << endl;
        break;
    case 2:
        cout << "Value 2" << endl;
        break;
    case 3:
        cout << "Value 3" << endl;
        break;
    default:
        cout << "Not valid" << endl;
        break;
    }
}

void getForLoop(){
    for(int i = 0; i<10; i++){
        if (i%2==0){
            continue;    
        }
        if (i == 7){
            break;
        }
        cout << i << endl;
    }
}