//Author: Aram Blanco
#include <iostream>
#include<stdlib.h>
#include<time.h>
#include <fstream>
#include <vector>
#include "project.h"

using namespace std;
 
int main()
{
  color input; // declaring object
  string userFile;
  int userInput = 0;
  char openFile;
  srand (time(NULL)); //initialize random see.
  
  do{
    cout << "Hey there! how many colors would you like to have on your palet (Please enter 2+ and > 100)?"  << endl;
    cout << "Please enter '0' if you woul like us to suggest you a number :)" << endl;
    cin >> userInput;
      if (userInput  < 3 && userInput > 0){
        cout << "it looks like we need more than 2 colors" << endl;
      }
      else if(userInput == 0){
        input.userSugestion(userInput);
      }
    input.numInput(userInput);
  }while((userInput < 3 && userInput > 0) || (userInput > 100));

  cout << "How would you like to name your palette?" << endl;
  cin >> userFile;
  input.hexToFile(userFile);

  do{
    cout <<"Would you like to review your colors? please enter Y/N" << endl;
    cin >> openFile;
  }while(!(openFile == 'Y' || openFile == 'N') && !(openFile == 'y' || openFile == 'n'));

  if (openFile == 'Y' || openFile == 'y'){
    cout << "what file you want to open?" << endl;
    cin >> userFile;

    input.displayFile(userFile);
  }
  else{
    cout<<"Have a good day!" << endl;
  }
  return 0;
}