//Class:CMCS 140;
//CRN:21934;
//Instructor:Rabiha Kayed;
//Project <3>;
//Description: This program lets the uesr to take a driving licence exam.
//Due Date: October 28,2018;
//I pledge that I have completed the programming assignment independently.
//I have not copied the code from a student or any source.
//I have not given my code to any student.
//Print your Name here: Aroub Omar Halawani;
//List of Input for the program: 
//1.Birth year
//2.Birth month
//3.Birth day
//4.the name of the exam taker
//5.The exam file name
//6.The answers of the questions
//List of Output from the program: 
//1.The exam questions
//2.Number of the questions that answered correctly
//3. Number of the questions that answered incorrectly


#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	int Birth_Year;
	int Birth_Month;
	int Birth_Day;
	string Name;
	string answer;
	string file_name;
	ifstream input_file;
	
	cout << endl << " Driver Licence Exam" << endl;
	cout << "----------------------------" << endl << endl;
	// entering the exam questions file
	cout << " Enter the name of the file to be used: ";
	cin >> file_name;
	cout << endl << endl << "------Take Exam Taker information------" << endl << endl;
	
	// Take the exam taker information
	cout << " Birth year: ";
	cin >> Birth_Year;
	cout << " Birth month: ";
	cin >> Birth_Month;
	cout << " Birth Day: ";
	cin >> Birth_Day;
	cout << " Name: ";
	cin >> Name;

	// giving the approval to take the exam

	if (Birth_Year > 2000)
	{
		cout << " !!! Exam taker is too young to take the exam !!!";
	}
	if (Birth_Year <= 2000)
	{
		// opening the correct file
		string question;
		string correct_Ans;
		int correct_answer = 0;
		int incorrect_answer = 0;
		input_file.open(file_name);
		if (input_file.is_open())
		{
			cout << endl << endl << "********EXAM STARTS********" << endl << endl;
			while (getline(input_file, question))
			{
				// reading the file
				cout << question << endl;
				cout << "your answer: ";
				cin >> answer;
				while (answer != "N" && answer != "n"  && answer != "Y"  && answer != "y")
				{
					cout << "Please enter the answer in the correct format." << endl;
					cout<< "Your answer: " << endl;
					cin >> answer;
				}
				switch (answer[0])
				{
				case 'Y': answer = "y"; break;
				case 'N': answer = "n"; break;
				default: break;
				}
				// comparing the exam taker answers with the right answers
				getline(input_file, correct_Ans);
				if (answer == correct_Ans)
					correct_answer++;
				else
					incorrect_answer++;
			}
			cout << endl << endl << "********EXAM COMPLETED********" << endl;
			// The user information
			cout << endl << " Name: " << Name << endl;
			cout << " Birthdate: " << Birth_Year << "/" << Birth_Month << "/" << Birth_Day << endl;
			// the exam score and the exam taker score
			cout << " Total question in the exam: 10" << endl;
			cout << " Number of the questions answered correctly: " << correct_answer << endl;
			cout << " Number of the questions answered incorrectly: " << incorrect_answer << endl;
			// telling the user if he or she passed the exam or not
			if (correct_answer >= 7) 
			{
				cout << " Congratulation!! You passed the exam" << endl;
			}
			if (correct_answer < 7)

			{
				cout << " You did not pass the exam. You can try again tomorrow !!"<<endl;
			}
		}
		else
		{
			// if the file that the user entered is not existing
			cout << endl << " Error opening the file.";
		}
	}
	
	cout << endl << "-----------------------------------------" << endl;
	cout << " Thank you for using my program!!" << endl;
	cout << " PROGRAMMER: Aroub Omar Halawani" << endl;
	cout << " CMSC 140 Common Project 3" << endl << endl;
	cout << " Program ended with exit code: 0" << endl;
	system("pause");
	return 0;
}
