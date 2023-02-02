#include <iostream>
// iostraem library importation
// include so many functionality as input and outputs

// custom header file
#include "food.h"

// namespace use
// for easy use of importations and avoid names conflicts
// best use of standard namespace 
using std::cout;
using std::endl;
using std::string;



// defining namespaces
namespace namespace1 {
    int age = 8;
    string name = "Jose";
}
namespace namespace2 {
    int age = 10;
}

// simple function
int main(){
    // using namespace variables
    // printing out with end line
    cout << namespace1::age  << endl;
    cout << namespace1::name  << endl;

    // calling custome header file functions
    cout << "Today I will eat " << RecommendMeAFood('b')  << endl;
    GetPizzaRecipe();

    // pointers
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

    return 0;
}