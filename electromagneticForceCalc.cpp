#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
using namespace std;

	//Author: James Saylor
	//Description : This program calculates the electro-magnetic force between
	//				two objects

	//constants
	const double EO = 8.854E-12;
	const double PI = 3.1415926535;
	
	
	//functions
	void DescriptionHeader()
	{
		cout << "Calculation of Electro-magnetic Force between two Objects" << endl;
		cout << setw(25) << "By" << endl;
		cout << setw(37) << "Mr. James Saylor" << endl << endl;
	}

int main ()
{
	//variables
	double q1;	//charge of 1st object
	double q2;	//charge of 2nd object
	double r;	//distance fronm the two objects
	double f;	//electro-magnetic force b/w two objects
	double k;	//Coulomb's constant
	
	//output
	DescriptionHeader();
	
	//input
	cout << "Enter charge of object 1 (in coulombs): ";
	cin >> q1;
	cout << endl;
	cout << "Enter charge of object 2 (in coulombs): ";
	cin >> q2;
	cout << endl << endl;
	cout << "Enter distance between the centers of the two onjects (in meters): ";
	cin >> r;
	cout << endl << endl << endl;
	
	//calculations
	k = 1 / (4 * PI * EO);
	f = k * (q1 * q2 / (pow(r, 2.0)));
	
	//results
	cout << setprecision(3) << showpoint << fixed;
	cout << "RESULTS:" << endl << endl;
	cout << "Charge of first object:" << setw(20) << q1 << " coulombs" << endl;
	cout << "Charge of second object:" << setw(19) << q2 << " coulombs" << endl;
	cout << "Distance between objects:" << setw(18) << r << " meters" << endl << endl;
	cout << setprecision(4) << scientific;
	cout << "Permittivity of Free Space:" << setw(16) << EO;
	cout << " coulombs^2 per Newton meters^2" << endl;
	cout << "Coulomb's Constant:" << setw(24) << k << " Newton meters^2 Coulombs^-2";
	cout << endl << endl;
	cout << "Electromagnetic Force:" << setw(21) << f << " Netwons" << endl;  
	
 	cout << endl << endl;
 	return 0;
}

