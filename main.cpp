/*********************************************************************
Program:       Simply Math Tutor
Programmer:    Mahmudul Amin Rafi
Date:          2020.09.17
Description:   This program will ask the user only one random math qu                display the correct answer.
*********************************************************************/

#include <iostream> // cin & cout
#include <cstdlib> // srand & rand
#include <ctime> // time
#include <string> // string data type

using namespace std;

int main() {

//declare and initializing all variables
int num1 = 0; 
int num2 = 0;
int questionType = 0;;
int userAnswer = 0;
int correctAnswer = 0;

string userName = "?";//for storing text 
string questionOperator = "?";//for storing text

srand(time(0)); //seed the random method with the current time
num1 = (rand() % 10) + 1; //generator the first random number between 1 and 10
num2 = (rand() % 10) + 1;//generator the second random number between 1 and 10
questionType = (rand() % 4);//generator the question type random number between 0 and 3;

//Displaying the welcome header
cout << "Welcome to the simple math Tutor" << endl;
cout << "================================" << endl;
cout << endl;

cout << "Please Enter Your UserName: ";//user name to address the user in the question
getline(cin, userName);//allowing for a space in the user’s name


//Using a switch statement, setup common variables that will be used for all math question types based on the third random number (0-3)
switch (questionType) {
case 0:
num1 += num2; 
correctAnswer = num1 + num2;
questionOperator  = " + "; 
break;

case 1:           
num1 -= num2;
correctAnswer = num1 - num2;
questionOperator = " - "; 
break;

case 2:
num1 *= num2;
correctAnswer = num1 * num2;
questionOperator = " * ";
break;

case 3:
num1 /= num2;
correctAnswer = num1 / num2;
questionOperator = " / ";
break;

//letting the user know that an invalid question type was generated (plus displaying the question type) and informing the program ended with an error -1return -1 as an error code   
default:
cout << "questionType " << questionType << " is null, program ended with -1 error code" << endl; 
return -1;
}

cout << userName;//Displaying username 
cout << " What is " << num1 << questionOperator <<num2 << "?"; //displaying question
cin >> userAnswer;//Asking user to write his username

//if the user’s answer is correct answer tell the user they were correct.
if (userAnswer == correctAnswer) {
cout << "You are absolutely right! You are showing you class! Keep it up!" << endl;
} else {//tell the user they were wrong, and display the correct answer
cout << "Sorry, that answer is wrong :(" << endl;
cout << "The correct answer is " << correctAnswer << endl; 
}

//Ending the Program
cout << "End of program!" << endl;
return 0;
}

