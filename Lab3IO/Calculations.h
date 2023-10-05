#ifndef Calculations
#define Calculations

//Create a class for the calculations
class Calc {

	//Variable for the mean
	float mean;

public:
	//Constructor and Destructor for the calculations
	Calc(float mean);
	~Calc();

	//Functions for calculating mean and standard deviation
	float calculateMean(int num[4]);
	float calculateDev(int num[4]);

};
#endif
