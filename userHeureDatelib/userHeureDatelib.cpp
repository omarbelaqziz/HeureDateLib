// userHeureDatelib.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "DateH.h"
#include "Heure.h"

using namespace std;
using namespace DateHeure;
int main()
{
	/*
	Heure H1(2, 33, 44);
	Heure H2(222, 533, 44);
	if (H2 > H1) cout << "true" << endl;
	else cout << "false" << endl;
	*/
	DateH D1(22, 33, 45, 29, 02, 2000);
	DateH D2(22, 33, 46, 29, 02, 2000);
	if (D2 > D1) cout << "true" << endl;
	else cout << "false" << endl;

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
