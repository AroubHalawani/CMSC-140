//Class:CMCS 140;
//CRN:21934;
//Instructor:Rabiha Kayed;
//Project <4>;
//Description: My program calculate the total and the average absent days of a company's employees.
//Due Date:November 11,2018;
//I pledge that I have completed the programming assignment independently.
//I have not copied the code from a student or any source.
//I have not given my code to any student.
//Print your Name here: Aroub Omar Halawani;
//List of Input for the program: 
//1.Number of employees
//2.Employees ID
//3.Employees absent days
//List of Output from the program: 
//1.The total absent days of the employees
//2.The average absent days of the employees

#include<iostream>
#include<fstream> 
#include <iomanip>
#include <string>

using namespace std;
int total_days_of_absence;
int read_number_of_employees()
{
	int number_of_employees;
	cout << endl << "\t Calculate the average number of days a company's employees are absent" << endl;
	cout<<"\t-----------------------------------------------------------------------"<< endl << endl;
	cout << " Please enter the number of employees in the company: ";
	cin >> number_of_employees;
	cout << endl << endl;
	// The number of employees must be greater than one
	if (number_of_employees <= 0)
	{
		cout << " The number of employees must be greater than 1" << endl;
		cout << " Please enter the number of employees in the company: ";
		cin >> number_of_employees;
		cout << endl << endl;
	}
	return number_of_employees;
}
// Calculating the average number of absent days
double 
calculate_the_average_absent_days (int N_of_E, int total_days_of_absence)
{
	return
		(total_days_of_absence + 0.0) / N_of_E;
}
//reads each employee ID and number of absent days
void read_Employee
(ofstream & outputFile, int NUMER_OF_EMPLOYEES)
{
	int employee_ID;
	int absent_days;
	outputFile << endl << "\t EMPLOYEE ABSENCE REPORT" << endl << endl;
	outputFile << "------------------------------------------" << endl;
	outputFile << "      EMPLOYEE ID\t" << "   ABSENT DAYS" << endl;
	outputFile << "------------------------------------------" << endl;
	for (int n = 0; n< NUMER_OF_EMPLOYEES; n++)
	{
		//reads each employee ID and number of absent days
		cout << " Please enter an employee ID: ";
		cin >> employee_ID;
		cout << " Please enter the number of days this employee was absent:";
		cin >> absent_days;
		// The absent days must be zero or positive number
		if (absent_days < 0)
		{
			cout << " Absent days must be 0 or greater" << endl;
			cout << " Please enter the number of days this employee was absent: ";
			cin >> absent_days;
		}
		// Uploading the employees ID and the absent days to a file
		total_days_of_absence += absent_days;
		outputFile << "\t" << employee_ID << "\t\t|\t" << absent_days << endl;
	}
}

int main()
{
	
	double Average;
	int number_of_employees;
	ofstream outputFile;
	outputFile.open("employeeAbsences.txt");
	number_of_employees = read_number_of_employees();
	read_Employee(outputFile, number_of_employees);
	Average = calculate_the_average_absent_days(number_of_employees, total_days_of_absence);
	// Uploding the total absent days and the average of the employees absent days to a file named employeeAbsences.txt
	outputFile << endl << endl << " The " << number_of_employees << " employees were absent a total of " << total_days_of_absence << " days." << endl;
	outputFile << " The average number of days absents is " << Average <<" days."<< endl;
	outputFile << endl << endl << " PROGRAMMER: Aroub Omar Halawani " << endl;
	// closing the file
	outputFile.close();
	cout << endl << endl << " PROGRAMMER: Aroub Omar Halawani" << endl;
	system("pause");
	return 0;


}

