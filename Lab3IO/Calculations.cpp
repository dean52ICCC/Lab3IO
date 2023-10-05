#include "Calculations.h"
#include <cmath>
#include <iostream>

//Constructor and Destructor
Calc::Calc(float mean) : mean(mean) {};
Calc::~Calc() {};

//Function for finding Mean
float Calc::calculateMean(int num[4]) {
	mean = (num[0] + num[1] + num[2] + num[3]) / 4.0;
	return mean;
}

//Function for finding standard population deviation
float Calc::calculateDev(int num[4]) {
	float x = 0.0;
	for (int i = 0; i < 4; i++) {
		x = x + powf((num[i] - mean), 2);
	}
	return sqrt(x/4);
}