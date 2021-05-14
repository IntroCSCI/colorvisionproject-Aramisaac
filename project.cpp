#include <iostream>
#include "project.h"
#include <string>
#include <vector>
#include <fstream>

using namespace std;
using std::string;
using std::vector;

// memeber functions

void color::numInput(int nmInput){
  userInputClass = nmInput;
}

void color::hexRand(char colorHex[]){
  char hexNum[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
  for (int i=0; i < 6; i++){
    colorHex[i] = hexNum[rand()%16];
  }
}

void color::userSugestion (int &userNum){
  int numSug = rand()% 6 + 3;
  cout << "The sugested number is " << numSug << endl;
  userNum = numSug;
  userInputClass = numSug;
}

void color::hexToFile(string usrFile){
    fileGen.open(usrFile,ios::out); 
    if(!fileGen){ 
      cout<<"Can not create file";  
    } 
    else {
      cout<<"File created succefully."<< endl;
      int counter = 0;
      do{
        hexRand(hex);
        fileGen <<"#";
          for(int i=0; i < 6; i++){
            fileGen <<hex[i];    
          }
        fileGen << endl;
        counter ++;   
      }while(userInputClass != counter); 

      fileGen.close(); 
    }
}

void color::displayFile(string usrDisplay){
  fileGen.open (usrDisplay, ios::in);

    if  ( fileGen.is_open() ){    
        while ( !fileGen.eof() ) {
          getline(fileGen, line);
          cout << line << endl;
        }
      }
      else {
        cout << "Could not open " << choosedFile << endl;
      } 
      fileGen.close();
    }
