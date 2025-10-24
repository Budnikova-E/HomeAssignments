/* Ekaterina Budnikova  st107207@student.spbu.ru
Hello_world task */

#include "hello.hpp"

int main(){
    
    std::cout << "Hello word!\n";
    std::string input_word;

    while (std::cin >> input_word){
        process_input(input_word);
    }
}