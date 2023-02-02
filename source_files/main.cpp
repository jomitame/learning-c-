#include <iostream>
// iostraem library importation
// include so many functionality as input and outputs

// custom header file
#include "food.h"
#include "pointers.h"

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
    cout << "==============Custome Namespaces================================"  << endl;

    // using namespace variables
    // printing out with end line
    cout << namespace1::age  << endl;
    cout << namespace1::name  << endl;

    cout << "==============Custome Headers Files============================="  << endl;

    // calling custome header file functions
    cout << "Today I will eat " << RecommendMeAFood('b')  << endl;
    GetPizzaRecipe();

    cout << "================Pointers Part 1================================="  << endl;

    PointerOne();

    cout << "================Pointers Part 2================================="  << endl;

    PointerTwo();

    cout << "================Exit Functuin==================================="  << endl;
    return 0;
}