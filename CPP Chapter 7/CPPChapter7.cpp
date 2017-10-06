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
	char Sname[30]{"Terry"};

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

	/* Step 9. Put a random number no less than 1 and no more
	   than 53 into each element of iArr */

	cout << "\n";

	srand((unsigned)time(NULL));

	for (short c = 0; c < 3; c++) {
		for (short r = 0; r < 5; r++) {
			iArr[c][r] = (rand() % 52) + 1;
		}
	}

	// Step 10. Print the elements of iArr with 3 rows and 5 columns
	cnt2 = 0;

	for (short a = 0; a < 3; a++) {
		for (short b = 0; b < 5; b++) {
			cout << iArr[a][b] << setw(6);
			cnt2++;
			if (cnt2 >= 5) {
				cout << "\n";
				cnt2 = 0;
			}
		}
	}

	// Step 11. Print the two dimensional array iArr column by column
	cnt2 = 0;
	cout << "\n";
	
	for (short a = 0; a < 5; a++) {
		for (short b = 0; b < 3; b++) {
			cout << iArr[b][a] << setw(6);
			cnt2++;
			if (cnt2 >= 3) {
				cout << "\n";
				cnt2 = 0;
			}
		}
	}

	// Step 12. Type another name into Sname
	cout << "\nEnter another name: ";
	cin.getline(Sname, 30);

	// Step 13. Print the ASCII value of each character in the char array, one per line
	short val = 0;

	cout << "The ASCII values of the characters in the char array are:\n";

	while (Sname[val] != '\0') {
		cout << int(Sname[val]) << "\n";
		val++;
	}

	// Step 14. Make Sname have the name "Albert Einstein" by using strcpy_s

	strcpy_s(Sname, 30, "Albert Einstein");

	// Step 15. Print the ASCII value of the 12th character in Sname
	cout << "\nThe ASCII value of the 12th character in Sname is " << int(Sname[11]) << "\n" << endl;

	//=====================================
	//Chapter 9

	// Step 16. Define a pointer to a double, pdArr

	double *pdArr = NULL;

	// Step 17. Assign the address of dArr to pdArr

	pdArr = dArr;

	// Step 18. Print out the array elements with tthe name dArr and subscript notation

	for (short m = 0; m < SIZE; m++) {
		cout << dArr[m] << " ";
	}

	cout << "\n\n";

	// Step 19. Print out the elements of the array with the name pdArr and pointer notation

	for (short y = 0; y < SIZE; y++) {
		cout << *(pdArr + y) << " ";
	}

	cout << "\n";




	system("Pause"); 

    return 0;
}

