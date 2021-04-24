//Author: Aram Blanco
#include <iostream>
#include<stdlib.h>
#include<time.h>
#include <fstream>
#include <vector>

using namespace std;
 
void hexRand (char colorHex[]);
void userSugestion (int& );

int main()
{
  string choosedFile;
  string line = "";
  string userFile;
  string passHex;
  fstream fileGen;
  char openFile;
  int userInput = 0;
  char hex[6];
  srand(time(0)); //initialize random see.
  
  do{
    cout << "Hey there! how many colors would you like to have on your palet (Please enter 2+)?"  << endl;
    cout << "Please enter '0' if you woul like us to suggest you a number :)" << endl;
    cin >> userInput;
      if (userInput  < 3 && userInput > 0){
        do{
        cout << "it looks like we need more than 2 colors" << endl;
        cin >> userInput;
        }while(userInput < 3);
      }
      else if(userInput == 0){
        userSugestion(userInput);
      }
  }while(userInput < 3 && userInput > 0);

  cout << "How would you like to name your palette?" << endl;
  cin >> userFile;

  fileGen.open(userFile,ios::out); 
    if(!fileGen){ 
      cout<<"Can not create file"; 
      return 0; 
    } 
    else {
      cout<<"File created succefully."<< endl;
      int counter = 0;
      do{
        hexRand(hex);
        fileGen <<"#";
          for(int i=0;i<6;i++){
            fileGen <<hex[i];    
          }
        fileGen << endl;
        counter ++;   
      }while(userInput != counter); 
    
      fileGen.close(); 
    }
  do{
    cout <<"Would you like to review your colors? please enter Y/N" << endl;
    cin >> openFile;
  }while(!(openFile == 'Y' || openFile == 'N') && !(openFile == 'y' || openFile == 'n'));

  if (openFile == 'Y' || openFile == 'y'){
    cout << "what file you want to open?" << endl;
    cin >> userFile;

    fileGen.open (userFile, ios::in);

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
  else{
    cout<<"Have a good day!" << endl;
  }
  return 0;
}

void hexRand (char colorHex[]){
  char hexNum[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
  for (int i=0; i < 6; i++){
    colorHex[i] = hexNum[rand()%16];
  }
}

void userSugestion (int& userNum){
  userNum = 5;
  cout << "The sugested number is 5!" << endl;
}