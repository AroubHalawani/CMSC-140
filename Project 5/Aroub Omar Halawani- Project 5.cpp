
//Class:CMCS 140;
//CRN:21934;
//Instructor:Rabiha Kayed;
//Project <5>;
//Description: creating a simulated game .
//Due Date: December 11,2018;
//I pledge that I have completed the programming assignment independently.
//I have not copied the code from a student or any source.
//I have not given my code to any student.
//Print your Name here: Aroub Omar Halawani;
//List of Input for the program: 
//1.Number of white ball
//2.Number of red ball
//List of Output from the program: 
//1.winning points
//2.The entered number
//3.The winning numbers
#include <iostream>
#include <random>
#include <ctime>
#include <vector>
#include<fstream>
using namespace std;
int POINTS(vector<int> &a, int red_ball, vector<int> &r_num)
{
	int WHITE_BALL = 0;
	int RED_BALL = 0;

	for (int number_1 = 0; number_1 < a.size(); number_1++)
	{
		for (int number_2 = 0; number_2 < r_num.size() - 1; number_2++)
		{
			if (a[number_1] == r_num[number_2])
			{
				WHITE_BALL++;
			}
		}
	}
	if (red_ball == r_num[r_num.size() - 1])
	{
		RED_BALL++;
	}

	if ( WHITE_BALL == 1 && RED_BALL == 0)
	{
		return(4);
	}
	else if (WHITE_BALL == 1 && RED_BALL == 1)
	{
		return(4);
	}
	else if (WHITE_BALL == 2 && RED_BALL == 1)
	{
		return(7);
	}
	else if (WHITE_BALL == 3 && RED_BALL == 0)
	{
		return(7);
	}
	else if (WHITE_BALL == 3 && RED_BALL == 1)
	{
		return(100);
	}
	else if (WHITE_BALL == 4 && RED_BALL == 0)
	{
		return(100);
	}
	else if (WHITE_BALL == 4 && RED_BALL == 1)
	{
		return(50000);
	}
	else if (WHITE_BALL == 5 && RED_BALL == 0)
	{
		return(1000000);
	}
	else if (WHITE_BALL == 5 && RED_BALL == 1)
	{
		return(1000000000);
	}
}
void selection(vector<int> &U)
{
	int i, o, IDX;
	
	for (i = 0; i < U.size() - 1; i++)
	{
		
		IDX = i;
		for (o = i + 1; o < U.size(); o++)
		{
			if (U[o] < U[IDX])
				IDX = o;
		}
		
		swap(U[IDX], U[i]);
	}
}
//Select a random number
int Random(int Min_number, int Max_number)
{
	return(rand() % Max_number + Min_number);
}
void play(vector<int>& v, int Red_ball)
{
	ofstream outputFile;
	outputFile.open("Aroub.txt");
	outputFile << endl << "\t\t********** Game Report **********" << endl << endl;
	vector<int>rnum; 
	for (int i = 0; i < v.size(); i++)
	{
		int x = Random(1, 69);
		rnum.push_back(x);
	}
	rnum.push_back(Random(1, 26));
	int points = POINTS(v, Red_ball, rnum);
	cout << " You won " << points  << " points for the game." << endl;
	outputFile<< " You won " << points <<  " points for the game." << endl;
	cout << endl;
	selection(v);
	// the numbers that the user entered in order
	cout << " Here are your numbers: " << endl;
	outputFile << " Here are your numbers: " << endl;
	for (int n = 0; n < v.size(); n++)
	{
		cout << "  " << v[n] << "  ";
		outputFile << "  " << v[n] << "  ";
	}
	cout << Red_ball << endl << endl;
	outputFile << Red_ball << endl << endl;
	//the winning points
	cout << " Here are the winning numbers:" << endl;
	outputFile << " Here are the winning numbers:" << endl;
	int powerball = rnum[rnum.size() - 1];
	rnum.pop_back();
	selection(rnum);
	for (int i = 0; i < rnum.size(); i++)
	{
		cout << "  "<<rnum[i] << "  ";
		outputFile << "  " << rnum[i] << "  ";
	}
	cout <<"  "<< powerball << endl;
	
	outputFile<< " " << powerball << endl;
	outputFile<< endl << endl << " ** NOTE: The last number is the POWERBALL number **" << endl << endl;
	outputFile.close();
}
int main()
{
	ofstream outputFile;
	char option_of_white_ball;
	char option_of_red_ball;
	int max_of_white_ball = 69;
	int min_of_white_ball = 1;
	int max_of_POWERBALL = 26;
	int min_of_POWERBALL = 1;
	int Red_Ball;
	int number_of_POWERBALL;
	int num;
	vector<int> v1;
	cout << endl << "\t\tNUMBER GUESSING GAME" << endl;
	cout << "\t\t--------------------" << endl << endl << endl;
	cout << " 1. Select FIVE numbers from 1 to 69 for the white balls." << endl;
	cout << " 2. Select ONE number from 1 to 26 for the red Powerball." << endl;
	cout << " 3. Prize determined by how many of your numbers match the winning numbers." << endl;
	cout << "---------------------------------------------------------------------------" << endl << endl << endl;
	//ask the user if he wants to select the white ball numbers or not
	cout << " Do you want to self pick your white ball numbers (Y or N): ";
	cin >> option_of_white_ball;
	//if the user want to select the white ball numbers
	if (option_of_white_ball == 'Y' || option_of_white_ball == 'y')
	{
		
		for (int n = 1; n <= 5; n++)
		{
			cout << " Enter number " << n << " (between 1 and 69): ";
			cin >> num;
			// if the white ball numbr less than 0 or greater than 69
			while (num<min_of_white_ball || num>max_of_white_ball)
			{
				cout << " The number must be (between 1 and 69) " << endl;
				cout << " Enter number " << n << " (between 1 and 69): ";
				cin >> num;
			}
			v1.push_back(num);
		}
	}
	//if the user does want to select the white ball number
	else 
	{
		for (int i = 0; i < 5; i++)
		{
			v1.push_back(Random(min_of_white_ball, max_of_white_ball));
			

		}
	}
	//ask the user if he want to select the red ball number or not
	cout << " Do you want to self pick your red ball number (Y or N): ";
	cin >> option_of_red_ball;
	if (option_of_red_ball == 'Y' || option_of_red_ball == 'y')
	{
		cout << " Enter POWERBALL number (between 1 and 26):";
		cin >> number_of_POWERBALL;
		// if the red ball number is less than 0 or grater than 25
		while (number_of_POWERBALL<min_of_POWERBALL || number_of_POWERBALL>max_of_POWERBALL)
		{
			cout << " The POWERBALL number must be (between 1 and 26)" << endl;
			cout << " Enter POWERBALL number (between 1 and 26):";
			cin >> number_of_POWERBALL;
		}
		Red_Ball = number_of_POWERBALL;
	}
	else
	{
		//if the user does not want to select red ball number
		Red_Ball = Random(1, 26);
	}
	cout << endl << "********** Game Report **********" << endl << endl << endl;
	play(v1, Red_Ball);
	cout << endl << endl << " **NOTE: The last number is the POWERBALL number**" << endl << endl;
	cout << " ************************************ " << endl << endl;
	cout << " THANK YOU FOR TESTING MY PROGRAM!! " << endl << endl;
	cout << " PROGRAMMER : Aroub Omar Halawani  " << endl;
	cout << " CMSC 140 common project 5" << endl;
	cout << " DUE DATE : 11/05/2018 " << endl << endl;
	cout << " program ended with exit code : 0" << endl << endl;
	system("pause");
	return 0;
}
