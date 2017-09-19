/* Terry Ellison
	September 19, 2017 ©
	Chapter 7 assignment */

#include "stdafx.h"
#include <string>
#include <iomanip>
#include <iostream>

using namespace std;


int main()
{
	const int SIZE = 5;

	//Step 1. Create arrays
	double dArr[SIZE];
	long lArr[7] = {100000,134567,123456,9,-234567,-1,123489};
	int iArr[3][5];
	char Sname[30]{'T','e','r','r','y'};

	//Step 2. Define variables

	short cnt1, cnt2;
	long double total;
	
	//Step 3. Define highest
	long highest;

	/* Step 4. Create a for loop to give random values to each
	   element of dArr then display the values of dArr*/
	srand((double)time (NULL));


	for (short i = 0; i < SIZE; i++) {
		dArr[i] = rand();
		cout << dArr[i] << ", ";
	}

	// Step 5. Add up the elemnts of dArr into total
	
	for (short t = 0; t < SIZE; t++) {
		total += dArr[t];
	}

	cout << total << endl;

	cout << "\n";

	system("Pause");

    return 0;
}

