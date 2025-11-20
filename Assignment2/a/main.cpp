/* Ekaterina Budnikova  st107207@student.spbu.ru
Assignment2a task */

#include <filesystem>
#include <fstream>
#include <algorithm>

int main(){
    
    std::ifstream inFile;
    std::string inFileName = "infile.txt";
    std::string outFileName = "outfile.txt";

    inFile.open(inFileName,std::ios::binary|std::ios::in);
    
    int sizeOfFile = std::filesystem::file_size(inFileName);
    char* dataFromFile = new char[sizeOfFile];

    inFile.read(dataFromFile, sizeOfFile);
    inFile.close();

    std::reverse(dataFromFile, dataFromFile + sizeOfFile);

    std::ofstream outFile(outFileName,std::ios::binary | std::ios::out);

    outFile.write(dataFromFile, sizeOfFile);
    outFile.close();

}