# Palet Color Generator 

## Description

This program asks the user for "more than 2 colors" to create a file and stores that information in the file. Once the file is sucesfully created, it asks the user if the want to see what is inside of the file, if the user inputs "Y" the program displays the content inside of the file, when the user decides to not open the file,  the program tells the user to have a good day. 

### v0.2 Updates

This programs gets a number from the user which needs to be greater than 2, this number can be inputed by the user or the user can use the number suggested by the program. Once the program gets a valid input, it will use the input to generate the number of random colors entered by te user on hexadecimal format. The program will ask to the user if they would like to review the file, depending on the answer of the user, the program will display the hexadecimal numbers generated. 

### v1.0 Updates

*Coming soon*


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

```

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

In this program, we declered 2 different functions, pass by value and pass by reference. Our pass by value function is used to generate the hexdecimal value for our program. Our pass by reference function will change the input from the user.

### Classes

*Coming in version 1.0*
