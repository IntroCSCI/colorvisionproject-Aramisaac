# Palet Color Generator 

## Description

This program asks the user for "more than 2 colors" to create a file and stores that information in the file. Once the file is sucesfully created, it asks the user if the want to see what is inside of the file, if the user inputs "Y" the program displays the content inside of the file, when the user decides to not open the file,  the program tells the user to have a good day. 

### v0.2 Updates

*Coming soon*

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
Hey there! please enter more than 2 colors of your choice.
Azul Y Rojo
How would you like to name this file?
Prueba
File created succefully.
Would you like to review your colors? please enter Y/N
a
Would you like to review your colors? please enter Y/N
s
Would you like to review your colors? please enter Y/N
d
Would you like to review your colors? please enter Y/N
Y
what file you want to open?
Prueba
Azul Y Rojo
```

## C++ Guide

### Variables and Data Types

We have used 3 data types in this program; string, fstream, and char. We have also used 5 different variable to store the inputs of the user and 1 variable to name the fstream function of the program.

### Console Input and Output

The console asks the user to input information and continues asking the user for more information, and ouputs what the user have had entered.

### Decisions

We have decided to make the program diplay the names of the color that you entered so you can confirm that you have entered the right colors, we have also decided to give the option to the user to not display the colores that they already entered.

### Iteration

When this program asks the user if the would like to review the color and they enter somthing that is not Y or N, the program would keep asking the person to enter N or Y to continue with the process.

### File Input and Output

This program asks the user to input colors top store that information in a folder that would diplay if the user inputs that they would like to display the folder.

### Arrays/Vectors

*Coming in version 0.2*

### Functions

*Coming in version 0.2*

### Classes

*Coming in version 1.0*
