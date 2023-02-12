#include <iostream>
// iostraem library importation
// include so many functionality as input and outputs

// custom header file
#include "food.h"
#include "pointers.h"
#include "get_data.h"

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
    cout << "Today I will eat " << recommendMeAFood('b')  << endl;
    getPizzaRecipe();

    cout << "================Pointers Part 1================================="  << endl;

    pointerOne();

    cout << "================Pointers Part 2================================="  << endl;

    pointerTwo();

    cout << "================Pointers Part 3================================="  << endl;

    pointerThree();

    cout << "================Pointers Part 4================================="  << endl;

    pointerFour();

    cout << "================Pointers Part 5================================="  << endl;

    pointerFive();

    cout << "================size of==================================="  << endl;

    int r = 9;
    int ages[] = {3,4,5,6};
    // size in bytes
    cout << sizeof(r) << endl;
    // this is the way to get the size of the list in bytes
    cout << sizeof(ages) << endl;
    // this is the way to get the numbers of elemets
    cout << sizeof(ages) / sizeof(ages[0])  << endl;

    cout << "================ cin ==================================="  << endl;

    getData();

    cout << "================ if ==================================="  << endl;

    getIfConditionalResult();

    cout << "================ switch ==================================="  << endl;

    getSwitchConditionalResult();

    cout << "================ for ==================================="  << endl;

    getForLoop();

    cout << "================ for ==================================="  << endl;

    getWhileLoop();

    cout << "================ function ==================================="  << endl;

    cout << getFunctionResult(5) << endl;

    cout << "================Exit Function==================================="  << endl;
    
    return 0;
}