# Chapter 1 Exercises

Use these exercises to put into practice the knowledge you have gained from chapter 1. You can save your solutions to the exercises to this repository and it is recommended that for each exercise you create a _**new project**_ with the name of the exercise and save it to the relevant exercise folder for the chapter you are working on. Once you have completed your solution you should make sure you commit and push the code to your remote repository on GitHub.

---


### 1. Data Types

Add the correct data types to the code below to complete the variables.

```C++
#include <iostream>
#include <string>
using namespace std;

int main() {
    firstNumber = 1;
    iCanCode = true;
    hopefulGrade = 'a';
    myDecimal = 1.0;
    minimalSentance = "y";
    keyMash = 13213123;
    mysteryDataType = 5.6f; //Use Google to work this out

    return 0;
}
```
&nbsp;
&nbsp;

### 2. Untidy Code

Tidy up the following code to make it neater and easier to read.

```C++
#include <iostream>
#include <string>
using namespace std;

int main(){
    cout << "This is untidy code.";

    cout <<                     "I'm surprised it works.";

int   number =   6;
    cout << "It has" <<
        number <<  "lines of code  - "     ;


    cout << "each more hideous than the last.      ";
                cout << "You probably should add some line breaks in the text too" << endl;

    return 0;

}
```
&nbsp;
&nbsp;


### 3. St Ives

#### Part 1

The idea here is to translate the following famous riddle to C++. Each number in the riddle (indicated in bold) needs to be stored as a variable that must be declared and initialised at the beginning of the program. Then you should use output statements to print the riddle to the console making use of the variables to output the numbers.


>*As I was going to St. Ives, I met __1__ man with __7__ wives  
>Each wife had __7__ sacks, each sack had __7__ cats, each cat had __7__ kits  
>Kits, cats, sacks and wives,  
>How many were going to St. Ives?*


#### Part 2

So we know that the answer to this riddle is just 1. The only person going to St. Ives is the narrator. But how many Kits, Cats, Sacks and Wives did the narrator meet?

Use your variables (and perhaps create new ones) to calculate and print the total number of ‘items’ the man met whilst going to St Ives.

Hint: If each wife had 7 sacks, each containing 7 cats, who each had 7 kits, then the following pseudocode expression calculates the number of kits:

```
Total Kits = 7 (wives) x 7 (sacks) x 7 (cats) x 7 (kits)
```

You will have to write similar mathematical expressions to find the total number of ‘items’ met while to St. Ives.

&nbsp;
&nbsp;


### 4. Division Fix

This programme doesn’t calculate the sum as expected. Can you provide a simple fix?

```C++
#include <iostream>
using namespace std;

int main() {
    int numberOne = 50;
    int numberTwo = 7;
    cout << numberOne/numberTwo << endl;

    return 0;
}
```
&nbsp;
&nbsp;


### 5. USB Shopper

A girl heads to a computer shop to buy some USB sticks. She loves USB sticks and wants as many as she can get for £50. They are £6 each.

Write a programme that calculates how many USB sticks she can buy and how many pounds she will have left.

&nbsp;
&nbsp;


### 6. Paint

#### Part 1
Start a new project and add the following code. Translate the comments into appropriate syntax so the program functions

```C++
#include <iostream>
#include <string>
using namespace std;
int main() {
    //consts are variables whose value cannot be modified later
    const int COVERAGE = 350; // paint covers 350 sq ft per gallon
    // declare integers length, width, and height
    // declare double totalSqFt;
    // declare double paintNeeded;
    // prompt for and read in the length of the room
    // prompt for and read in the width of the room
    // prompt for and read in the height of the room
    // Compute the total square feet to be painted - think about   the dimensions of each wall assuming standard four wall room.
    // Compute the amount of paint needed
    // Print the length, width, and height of the room, the total square feet and number of gallons of paint required
    return 0;
}
```

#### Part 2
Suppose the room has doors and windows that don’t need painting. Ask the user to enter the number of doors and number of windows in the room, and adjust the total square feet to be painted accordingly. Assume that each door is 20 square feet and each window is 15 square feet.

*Part 2 can be added to the same project file as part 1*
&nbsp;
&nbsp;


### 7. Temperature

#### Part 1:

Create a program to convert temperature in Fahrenheit to Celsius

*Fahrenheit to celsius → (n - 32) * 0.5556)*

You should make use of variables such that your program prints to console:

```
"X Fahrenheit is Y in Celsius"
```

Where X is the value you specify (as in an appropriate data type) and Y is the calculated result

#### Part 2:

Enhance your program by having the computer ask the user for the temperature that gets converted.

&nbsp;
&nbsp;


### 8. Circles

Write a program that calculates (and displays) the area (A) and circumference (C) of a circle given its radius (r). The program should get the radius from the user. Make your code as clear as possible by using variables of appropriate data types and comments.

>*A = π r2  
>C = 2π r*

&nbsp;
&nbsp;

