//Class:CMCS 140;
//CRN:21934;
//Instructor:Rabiha Kayed;
//Project <1>;
//Description: My program caluclates the age of a person in years, months, days, hours, minutes, and seconds. Also, it caluclates the sum and the division of two numbers.
//Due Date:September 23,2018;
//I pledge that I have completed the programming assignment independently.
//I have not copied the code from a student or any source.
//I have not given my code to any student.
//Print your Name here: Aroub Omar Halawani;
//List of Input for the program: 
//1.Name
//2.age
//3.Number one
//4.Number two
//List of Output from the program: 
//1.The age in years, months, days, hours, minutes, and seconds.
//2.The answer of number one + number two
//3.The answer of number one / number two

#include<iostream>
#include<string>
using namespace std;
int main()
{
	const string ROBET_NAME = "Nao";
	string USER_NAME;
	const string programmer = "Aroub Omar Halawani";
	int age;
	int number_one;
	int number_two;
	const int Months = 12;
	const int Days = 365;
	const int Hours = 8640;
	const int Minutes = 518400;
	const int Seconds = 31104000;
	cout << "       " << endl;
	cout << "********************************ROBOT PROTOTYPE SCRIPTING********************************" << endl;
	cout << "   " << endl;
	cout << " Hello,\n" << " Welcome to Montgomery College! My name is " << ROBET_NAME << ". May I have your name?";
	cin >> USER_NAME;
	cout << " Nice to have you with us today, " << USER_NAME << "!\n" << " Let me impress you with a small game.\n";
	// the robet is asking the user about his or her age to tranform it from years to monthes, days, hours, minutes, and seconds. 
	cout << " Give me the age of an important person or a pet to you. Please give me only a number!";
	cin >> age;
	cout << " You have entered " << age << endl;
	cout << " If this is for a person, the age can be expressed as " << age;
	cout << " years\n" << " or " << age * Months << " months\n" << " or about " << age * Days << " days\n" << " or about ";
	cout << age * Hours << " hours\n" << " or about " << age * Minutes << " minutes\n" << " or about ";
	cout << age * Seconds << " seconds.\n" << " If this is for a dog, it is " << age * 7 << " years old in human age.\n";
	cout << " If this is for a gold fish, it is " << age * 5 << " years old in human age.\n";
	cout << " Let's play another game, " << USER_NAME << "." << " Give me a whole number.";
	cin >> number_one;
	cout << " Very well. Give me another whole number.";
	cin >> number_two;
	// the robet is asking the user to give him two numbers to calculate the sum of them and to calculate their division.
	cout << " Using the operator + in C++, the result of " << number_one << " + " << number_two << " is " << number_one + number_two << endl;
	cout << " Using the operator /, the result of " << number_one << " / " << number_two << " is " << number_one / number_two << "." << endl;
	cout << " However, the result of  " << number_one << " / " << number_two << " is " << static_cast<double>(number_one) / number_two << endl;
	//the robet is asking the user about his or her opinion of the game
	cout << " Do you like the games, " << USER_NAME << " ?" << endl;
	cout << " If you do, you can learn more by taking our classes.\n";
	cout << " If you do not, I am sad. You should talk to our Chairman!\n";
	cout << "         \n";
	cout << "*****************************************************************************************\n";
	cout << " Thank you for testing my program.\n";
	cout << " Aroub Omar Halawani\n";
	cout << " CMSC 140 common project 10" << endl;
	cout << " program ended with code: 0" << endl;

	system("pause");
	return 0;
}