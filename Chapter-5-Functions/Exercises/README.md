# Chapter 5 Exercises

Use these exercises to put into practice the knowledge you have gained from chapter 5. You can save your solutions to the exercises to this repository and it is recommended that for each exercise you create a _**new project**_ with the name of the exercise and save it to the relevant exercise folder for the chapter you are working on. Once you have completed your solution you should make sure you commit and push the code to your remote repository on GitHub.

---

### 1. Sum it up

Write a function called ```sum``` that adds together three integers. You must obtain the values that will be added from the user within the **main function** before **passing** these values to your sum function. The function should use the values it's passed to perform the desired calculation and output the result.

&nbsp;
&nbsp;

### 2. Greetings

Write a program that asks the user for a name and a greeting within the main function and stores these in appropriate variables. The program should then pass these variables to a function which concatenates the values and RETURNS the newly formed string back to the main program where it should be output.

You may find the below template useful as a starting point using the comments and blanks as a guide to complete the required code.

```C++
#include <iostream>
using namespace std;

____ greetings(_____,_____){
  return ________;//return newly formed string
}

int main(){
  _______;//declare variable to store userName
  _______;//declare variable to store greeting

  cout << ______________ << endl;//ask user for name input
  _______;//store input

  cout << ______________ << endl;//ask user for greeting input
  _______;//store input

  string greeting = __________; invoke function and assign returned value to string variable
  cout << _______ << endl;//output the greeting

  return 0;
}
```

&nbsp;
&nbsp;

### 3. Find the Max

Declare a function called ```max_two``` that compares two numbers and RETURNS the maximum value back to the main program where it should be output. The program should obtain the values from the user in the main function and pass these to the function using appropriate parameter values.

&nbsp;
&nbsp;

### 4. You say hello, I say goodbye

Write a program that contains and invokes two functions. One that outputs a welcome message that reads “Welcome to my program” and a second that outputs a goodbye message that reads “End of program”.

When completing this exercise first try declaring and defining each function at the same time. Then modify the solution so the functions are declared and defined separately.

&nbsp;
&nbsp;


### 5. Find average

Write a function that finds the average of three doubles. You will need to pass three doubles into your function, which should sum them and then divide the total by 3.

&nbsp;
&nbsp;


### 6. Can I vote Function

Write a program that asks for the user’s name and age, before passing that information into a function called ```canVote```. This function should test if the user is 18 years old or older.

If the user’s age is greater than or equal to 18, the  function should then return the String “xxx can vote” to the main function, where xxx is the name inputted by the user.

If the user’s age is less than 18, the function should return “Too young to vote” to the main function. Finally, print the returned String from the main function.

&nbsp;
&nbsp;

### 7. Go Compare

Write a program that passes two Strings into a function called ```compareStrings```. This function should test whether or not the two Strings have the same value. If the Strings are equal, the function should return the boolean value TRUE to the main function, otherwise it should return the boolean value FALSE. Finally, print whether the strings are the same from the main function.

&nbsp;
&nbsp;

### 8. Function Fixer

The following code should calculate and display the mean of two variables of type double. Can you fix the function to make this work?

```C++
#include <iostream>
using namespace std;

void mean (void a, void b) {
    return (a + b) / 2.0;
}
int main() {
    double numberA = 5;
    double numberB = 6;
    double result = mean(numberA, numberB);
    cout << "a is " << numberA;
    cout << "b is " << numberB;
    cout << "The mean of a and b is " << result;
    return 0;
}
```

&nbsp;
&nbsp;

### 9. Say Hello

Write a function titled say_hello() that outputs to the screen "Hello". Modify the function so that it takes an integer argument and says hello the number of times equal to the value passed to it.

&nbsp;
&nbsp;

### 10. Return the product

Write a function that takes two integer arguments and returns an integer that is the product of the two integers. (e.g., integer1: 4, Integer2: 5 returns: 20)

&nbsp;
&nbsp;

### 11. Biography Selection

Write a program that outputs the menu below and gets input from the user before returning the information from a function. You should display the menu via one function called displayMenu() and return the information via another function called bio(). The program should continue to ask the user for input until they select exit.

```
Pick an option
1. Show Name
2. Show Age
3. Show Hometown
4. Exit
```

&nbsp;
&nbsp;

### 12. Calculator

Write a program that allows the user to add, subtract, multiply and divide two numbers. The program should adhere to the following specification.

* The calculations should be performed by functions outside of the programs main function. 
* You should present the user with a menu that allows them to select which calculation they would like to make
* The user should be able to enter the values required by the calculation which should be passed as function arguments to the relevant calculation
* The function performing the calculation should then return the result back to the main function where it should be output.

#### Optional Requirements

* Allow the user to continue performing different calculations until they decide to quit the program
* Provide error messages if the user enters invalid data (e.g. letters not numbers).

&nbsp;
&nbsp;

### 13. Power to the Function

Write a function that calculates powers. It should ask for a base and an exponent, then return the result to be printed.

&nbsp;
&nbsp;

### 14. Highest Odd

Write a function that returns the highest odd number from a given array. The array is 11, 2, 6, 15, 12, 13, 9

&nbsp;
&nbsp;

### 15. Playing with Strings

Write a program that asks for a user's first name and last name separately. The program should pass these strings to a function which returns the users full name as a single string.

Next create another function that replaces every a, e, i , o, u with the letter z and returns the converted string

Create a final function that reverses the user's name and returns the reversed string.
