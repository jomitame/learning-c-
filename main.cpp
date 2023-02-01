#include <iostream>
// iostraem library importation
// include so many functionality as input and outputs

// namespace use
// for easy use of importations and avoid names conflicts
// best use of standard namespace 
using std::cout;
using std::endl;
using std::string;

// defining namespaces
namespace namespace1 {
    int age = 5;
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
}