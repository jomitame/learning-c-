#include <iostream>
#include "food.h"

const char* recommendMeAFood(char firstLetter){
    if (firstLetter == 'a' || firstLetter == 'A'){
        return "apple";
    }
    else if (firstLetter == 'b' || firstLetter == 'B'){
        return "banana";
    }
    else if (firstLetter == 'c' || firstLetter == 'C'){
        return "coconut";
    }
    else return "pizza";
}

void getPizzaRecipe() {
    std::cout << "To make pizza you nedd ....\n";
}