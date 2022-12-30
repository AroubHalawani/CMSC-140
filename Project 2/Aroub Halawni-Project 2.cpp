//Class:CMCS 140;
//CRN:21934;
//Instructor:Rabiha Kayed;
//Project <2>;
//Description: Write a program that converts temperature, distance, and weight
//Due Date: October 7, 2018
//I pledge that I have completed the programming assignment independently.
//I have not copied the code from a student or any source.
//I have not given my code to any student.
//Print your Name here: Aroub Omar Halawani;
//List of Input from the program:
//1. The country name.
//2. The choice from 1 to 4.
//3. The temperature in Celsius.
//4. The distance in Kilometer. 
//5. The weight in Kilogram.
//List of Output from the program: 
//1. The temperature in Fahrenheit.
//2. The distance in miles.
//3. The weight in pounds.

#include<iostream>
#include<string>
using namespace std;
int main()
{
	string Country_Name;
	int choice;
	int Temearture;
	int Distance;
	int Weight;
	 
	cout << " " << endl;
	cout << " Enter a country name: ";
	cin >> Country_Name;
	cout << "---------------------" << endl;
	cout << " Converter Toolkit" << endl;
	cout << "---------------------" << endl;
	cout << " 1. Temperature Converter" << endl;
	cout << " 2. Distance Converter" << endl;
	cout << " 3. Weight Converter" << endl;
	cout << " 4. Quit" << endl;
	cout << " " << endl;
	cout << " Enter your choice (1-4): ";
	cin >> choice;

	// If the user choose one

	if (choice == 1)
	{
		cout << " Please enter tempearture in Celsius (such as 22) :";
		cin >> Temearture;
		cout << " It is " << (Temearture * 9/5) +32 << " in Fahrenheit" << endl;
	}
	// If the user choose two
	if (choice == 2)
	{
		cout << " Please enter distance in Kilometer (such as 14.63) :";
		cin >> Distance;

		//The distance should be positive number because the program does not convert negative distance

		if (Distance<0)
		{
			cout << " !!! Program does not convert negative distance !!!"<<endl;

		}

		if (Distance > 0)
		{
			cout << " It is "<<Distance * 0.6 <<" in miles"<<endl;
			
		}
		
	}
	// If the user choose three

	if (choice == 3)
	{
		cout << " Please enter weight in Kilogram (such as 62):";

		cin >> Weight;

		//The weight should be positive number because the program does not convert negative weight

		if(Weight < 0)

		{
			cout << "!!! Program does not convert negative weight !!!"<<endl;
		}

		if (Weight > 0)

		{
			cout << "It is " << Weight * 2.2 << " in pounds"<<endl;
		}

	}
	// If the user choose four


	if (choice == 4)
	{
		cout << " Thank you..." << endl;
	}

	// The choice must be btween 1 and 4
	
	if ( choice >4)
	{
		cout << " Your choice must be from 1 to 4 "<<endl;
	}
	if (choice<1)
	{
		cout << " Your choice must be from 1 to 4 " << endl;
	}
	cout << " " << endl;
	cout << Country_Name << " sounds fun!"<<endl;

	cout << "_____________________________________" << endl;
	cout << " Thank you for testing my program!" << endl;
	cout << " PROGRAMMER: Aroub Omar Halawani" << endl;
	cout << " CMSC140 Common Project 2" << endl;
	cout << " Due Date: 10/7/2018" << endl;
	cout << " Program ended with exit code: 0" << endl;

	system("pause");
	return 0;
}

