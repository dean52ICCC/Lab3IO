/*
	Brayden Dean
	C++ 2023
	Due: 10/13/2023
	Lab 3
	Write a program to calculate and output the mean and
	population standard deviation of four integers inputted by a file called
	“inMeanStd.dat” and the user. Results are floating-point.
	Output to the screen for the user inputted values and to a file called
	“outMeanStd.dat”. Calculate the mean and standard deviation in separate methods
	within a class.
*/

#include <iostream>
#include <fstream>
#include "Calculations.h"

using namespace std;
int main() {
	//Create object for calculations
	Calc Calculate(0);

	//Array for number inputs
	int num[4];

	//Create input and output objects
	ifstream inFile;
	ofstream outFile;

	//Open files
	inFile.open("inMeanStd.dat");
	outFile.open("outMeanStd.dat");

	//Check if files open properly
	if (!inFile || !outFile) {
		cout << "Could not open file" << endl;
		return 1;
	}

	//Get input from the file
	inFile >> num[0] >> num[1] >> num[2] >> num[3];
	//Output mean and deviation from the input file to the output file
	outFile << "Mean:" << Calculate.calculateMean(num) << '\n';
	outFile << "Deviation:" << Calculate.calculateDev(num);

	//Get input from user
	cout << "Give four integers." << endl;
	cin >> num[0] >> num[1] >> num[2] >> num[3];
	//Output mean and deviation from the user to the screen
	cout << "Mean: " << Calculate.calculateMean(num) << endl;
	cout << "Deviation: " << Calculate.calculateDev(num) << endl;

	//Close the files
	inFile.close();
	outFile.close();

	return 0;
}