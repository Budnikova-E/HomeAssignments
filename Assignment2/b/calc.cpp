/* Ekaterina Budnikova  st107207@student.spbu.ru
Assignment2b task */

#include "calc.hpp"

double calc(std::stringstream& stream){
    
    double* stack = new double[200];
    double* last = stack;

    std::string currentWord;

     while (stream >> currentWord){
        if (currentWord=="*"){
            double first = *last;
            last--;
            double second = *last;
            *last = first*second;
        } else  if (currentWord=="+"){
            double first = *last;
            last--;
            double second = *last;
            *last = first+second;
        } else if (currentWord=="-"){
            double first = *last;
            last--;
            double second = *last;
            *last = second-first;
        } else if (currentWord=="/"){
            double first = *last;
            last--;
            double second = *last;
            *last = second/first;
        } else {
            last++;
            double number = std::stod(currentWord);
            *last = number;
        }
    }

    double result = *last;
    delete[] stack;
    return result;
}