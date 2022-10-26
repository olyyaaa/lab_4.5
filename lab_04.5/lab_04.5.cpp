// lab_04.5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x, y,R;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		cout << "R = "; cin >> R;
			if (R <= x <= -R && R <= y <= -R &&  (x - R) * (x - R) + (y + R) * (y + R) >= R * R && (x + R) * (x + R) + (y - R) * (y - R) >= R * R)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;
		for (int i = 0; i < 10; i++)
		{
			x = 6. * rand() / RAND_MAX - 2*R;
			y = 6. * rand() / RAND_MAX - 2*R;

			if (R <= x <= -R && R <= y <= -R && (x - R) * (x - R) + (y + R) * (y + R) >= R * R && (x + R) * (x + R) + (y - R) * (y - R) >= R * R)
				cout << setw(8) << setprecision(4) << x << " "
				     << setw(8) << setprecision(4) << y << " " << "yes" << endl;
			else
				cout << setw(8) << setprecision(4) << x << " "
				     << setw(8) << setprecision(4) << y << " " << "no" << endl;
		}
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
