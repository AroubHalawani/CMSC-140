//Class:CMCS 140;
//CRN:21934;
//Instructor:Rabiha Kayed;
//Project <3>;
//Description: This program lets the uesr to put an exam questions for a driving licence exam.
//Due Date: October 28,2018;
//I pledge that I have completed the programming assignment independently.
//I have not copied the code from a student or any source.
//I have not given my code to any student.
//Print your Name here: Aroub Omar Halawani;
//List of Input for the program: 
//1.The the name of the file to be used
//2.Enter a yes/no questions
//3.Enter the answers of the questions
//List of Output from the program: 
//1.How many question does the user entered
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
	ofstream outputFile;
	string file_name;
	string question;
	char the_answer_of_the_question;
	char answer;
	int question_number = 0;

	cout << endl << " Exam Question Creatuon" << endl;
	cout << " -------------------------" << endl;
	// Naming the file
	cout << " Enter the name of the file to be used: ";
	cin >> file_name;

	outputFile.open(file_name);

	// Entering the questions
	cout << " Enter a Yes/No question ( in one line, no more than 70 characters):";
	cin .ignore();
	getline(cin, question);
	// Answering the questions
	cout << " Enter the answer:";
	cin >> the_answer_of_the_question;
	cout << " Do you have more question to enter: ";
	cin >> answer;

	//Uploading the questions and the answers to a file
	outputFile << question << endl;
	outputFile << the_answer_of_the_question << endl;

	while (answer == 'Y' || answer == 'y' && question_number< 9)

	{

		cout << " Enter a Yes/No question ( in one line, no more than 70 characters):";
		cin.ignore();
		getline(cin, question);
		cout << " Enter the answer:";
		cin >> the_answer_of_the_question;
		cout << " Do you have more question to enter: ";
		cin >> answer;
		question_number++;
		
		
		outputFile << question << endl;
		outputFile << the_answer_of_the_question << endl;
	}

	// How many questions did the user enter
	cout << endl<< question_number + 1 << " questions are added this run." << endl << endl;

	

	outputFile.close();




	cout << " Thank you for using my program !!" << endl;
	cout << " PROGRAMMER: Aroub Omar Halawani" << endl;
	cout << " CMSC140 Commom Project 3" << endl;
	cout << " Due Date: 10/28/2018" << endl << endl;
	cout << " Program ended with exit code: 0" << endl;

	system("pause");
	return 0;

}