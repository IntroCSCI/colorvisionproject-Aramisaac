//Author: Aram Blanco
#include <iostream>
#include <fstream>

using namespace std;

string userInput;
string userFile;
fstream fileGen;
string choosedFile;
string line = "";
char openFile;
int main()
{

  cout << "Hey there! please enter more than 2 colors of your choice." << endl;
  getline (cin, userInput);

  cout << "How would you like to name this file?" << endl;
  getline (cin, userFile);

    fileGen.open(userFile,ios::out); 
    if(!fileGen){ 
       cout<<"Can not create file"; 
       return 0; 
    } 
    fileGen << userInput;
    cout<<"File created succefully."<< endl;
   fileGen.close(); 

  cout<<"Would you like to review your colors? please enter Y/N" << endl; 
  cin >> openFile;

  do{
    cout <<"Would you like to review your colors? please enter Y/N" << endl;
    cin >> openFile;
  } while(!(openFile == 'Y' || openFile == 'N'));

  if (openFile == 'Y'){
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




//  if (userInput[numberPosition]){
    // cout << "It looks like that is not a color..." << endl;
    // cout << "please enter more than 2 colors of your choice." << endl;
    // getline (cin, userInput);
    // numberPosition = userInput.find('0'<'9' && '9'>'0');
      // numberPosition = userInput.find("1234567890");
  // cout << numberPosition << endl;