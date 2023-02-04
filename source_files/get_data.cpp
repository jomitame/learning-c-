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