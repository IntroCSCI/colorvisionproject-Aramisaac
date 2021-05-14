#ifndef PROJECT_H
#define PROJECT_H
#include <string>
#include <vector>
#include <fstream>

using std::string;
using std::vector;

class color {
  private:
    int userInput = 0;
    std::fstream fileGen;
    char hex[6];
    char openFile;
    int userInputClass;
    string choosedFile;
    string line;
  public:
    void numInput(int);
    void userSugestion (int&);
    void hexRand(char*);
    void hexToFile(string);
    void displayFile(string);
};

#endif