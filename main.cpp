#include <iostream>
// iostraem library importation
// include so many functionality as input and outputs

// namespace use
// for easy use of importations and avoid names conflicts
using namespace std;

// defining namespaces
namespace namespace1 {
    int age = 5;
}
namespace namespace2 {
    int age = 10;
}

// simple function
int main(){
    // using namespace variables
    // printing out
    cout << namespace1::age;
    
}