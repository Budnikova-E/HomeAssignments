/* Ekaterina Budnikova  st107207@student.spbu.ru
Assignment2b task */

#include <iostream>
#include "calc.hpp"

int main(){

    std::string inputString;
    std::getline(std::cin, inputString);
    std::stringstream stream(inputString);

    double result = calc(stream);

    std::cout << result << '\n';

}