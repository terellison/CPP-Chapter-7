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
	long double total = 0;
	
	//Step 3. Define highest
	long highest;

	/* Step 4. Create a for loop to give random values to each
	   element of dArr then display the values of dArr*/
	srand((double)time (NULL));

	cout << "The values of the double array are ";

	for (short i = 0; i < SIZE; i++) {
		dArr[i] = rand();
		cout << dArr[i] << " ";
	}

	// Step 5. Add up the elemnts of dArr into total
	
	 for (short t = 0; t < SIZE; t++) {
		total += dArr[t];
	}
	 // Step 6. Print the total and the average of the double array
	 cout << "\nThe total of the double array is " << total << endl;
	 cout << "The average of the double array is " << double(total / SIZE) << endl;
	
	cout << "\n";

	// Step 7. Assign highest to the highest value in lArr
	for (cnt1 = 1, highest = lArr[0]; cnt1 < 7; cnt1++) {
		if (lArr[cnt1] > highest) {
			highest = lArr[cnt1];
		}
	}

	// Step 8. Display highest
	cout << "\nThe highest value in lArr is " << highest << endl;

	system("Pause");

    return 0;
}

