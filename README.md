# Palet Color Generator 

## Description

This program asks the user for "more than 2 colors" to create a file and stores that information in the file. Once the file is sucesfully created, it asks the user if the want to see what is inside of the file, if the user inputs "Y" the program displays the content inside of the file, when the user decides to not open the file,  the program tells the user to have a good day. 

### v0.2 Updates

This programs gets a number from the user which needs to be greater than 2, this number can be inputed by the user or the user can use the number suggested by the program. Once the program gets a valid input, it will use the input to generate the number of random colors entered by te user on hexadecimal format. The program will ask to the user if they would like to review the file, depending on the answer of the user, the program will display the hexadecimal numbers generated. 

### v1.0 Updates

For this update, I have updated the functionality of the function "userSugestion", this fuction now can suggest a number to the usser if they wish to, this function will provide a random number from 3 to 9. For this update, I have also created a project.cpp file as well as a project.h file withe the porpuse to create a class for this project. With this update, you can now enter a number between 3 to 100 as a vlaid input number for the project, the program now will ask you to enter a valid number.


## Developer

Aram

## Example

To run the program, give the following commands:

```
g++ --std=c++11 *.cpp -o cvp
./cvp
```

Here is an example of the program running:

```
Hey there! how many colors would you like to have on your palet (Please enter 2+)?
Please enter '0' if you woul like us to suggest you a number :)
7
How would you like to name your palette?
validNum
File created succefully.
Would you like to review your colors? please enter Y/N
Y
what file you want to open?
validNum 
#FAED6E
#G5C43F
#ED82AD
#7A040E
#21G1D3
#213640
#BCDD66
////////////////////////////////////////////////////////////////////////////////////
Hey there! how many colors would you like to have on your palet (Please enter 2+)?
Please enter '0' if you woul like us to suggest you a number :)
0
The sugested number is 5!
How would you like to name your palette?
suggested
File created succefully.
Would you like to review your colors? please enter Y/N
Y
what file you want to open?
suggested
#737F78
#EDGD2E
#8C34BC
#E28CGE
#7C4F66
////////////////////////////////////////////////////////////////////////////////////
Hey there! how many colors would you like to have on your palet (Please enter 2+)?
Please enter '0' if you woul like us to suggest you a number :)
1
it looks like we need more than 2 colors
4
How would you like to name your palette?
lessThan
File created succefully.
Would you like to review your colors? please enter Y/N
Y
what file you want to open?
lessThan
#41ADAG
#41CEG2
#8G4ED6
#CB070B
//////////////////////////////////V1.0 example/////////////////////////////////////////////
Hey there! how many colors would you like to have on your palet (Please enter 2+ and > 100)?
Please enter '0' if you woul like us to suggest you a number :)
0
The sugested number is 7
How would you like to name your palette?
suggestedNum
File created succefully.
Would you like to review your colors? please enter Y/N
Y
what file you want to open?
suggestedNum
#58A0GD
#2D5253
#BF228G
#C58FCB
#21D718
#3E844F
#7E237F
//////////////////////////////////V1.0 example/////////////////////////////////////////////
Hey there! how many colors would you like to have on your palet (Please enter 2+ and > 100)?
Please enter '0' if you woul like us to suggest you a number :)
1
it looks like we need more than 2 colors
Hey there! how many colors would you like to have on your palet (Please enter 2+ and > 100)?
Please enter '0' if you woul like us to suggest you a number :)
2
it looks like we need more than 2 colors
Hey there! how many colors would you like to have on your palet (Please enter 2+ and > 100)?
Please enter '0' if you woul like us to suggest you a number :)
3
How would you like to name your palette?
lessThan3
File created succefully.
Would you like to review your colors? please enter Y/N
Y
what file you want to open?
lessThan3
#F6831G
#EDE2E3
#33AC7A
//////////////////////////////////V1.0 example/////////////////////////////////////////////
Hey there! how many colors would you like to have on your palet (Please enter 2+ and > 100)?
Please enter '0' if you woul like us to suggest you a number :)
7       
How would you like to name your palette?
validNum
File created succefully.
Would you like to review your colors? please enter Y/N
Y 
what file you want to open?
validNum
#FDF75B
#728F2C
#D553D7
#737B57
#0A0730
#A83F6G
#G58FB2
//////////////////////////////////V1.0 example/////////////////////////////////////////////
Hey there! how many colors would you like to have on your palet (Please enter 2+ and > 100)?
Please enter '0' if you woul like us to suggest you a number :)
7 
How would you like to name your palette?
don'tReview
File created succefully.
Would you like to review your colors? please enter Y/N
N
Have a good day!

## C++ Guide

### Variables and Data Types

We have used 5 data types in this program; string, fstream, char, int, and void. We have also used 7 different variable to store the inputs of the user, 1 variable to name the fstream function of the program and 2 for the functions.

### Console Input and Output

The console asks the user to input information and continues asking the user for more information, and ouputs what the user have had entered.

### Decisions

We have decided to give multiple options to the user to choose between different ways to get differents outputs. 

### Iteration

When this program asks the user if the would like to review the color and they enter somthing that is not equal to the allowed input, the program would keep asking the person to enter the allowed input to continue with the process.

### File Input and Output

This program asks the user to enter a number which is copied to the folder created by the user and displays the hexadecimal value if the user decides to review their color on hexadecimal values.

### Arrays/Vectors

We decided to used arrays since the value of the hexadecimal would always stay the same. This programs uses arrays to generate the random hexdecimal numbers.

### Functions

In this program, we declered 2 different functions, pass by value and pass by reference. Our pass by value function is used to generate the hexdecimal value for our program. Our pass by reference function will provide the user a random number if they wish to do so.

### Classes
I have made project.cpp and project.h with the porpuse of creating a class. With this class, you can access private values and piblic functions fot his project. With the use of this class, the code is easier to read an more understandable.

*Coming in version 1.0*
