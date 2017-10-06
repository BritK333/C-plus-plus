//Brittany Kelley
//October 5, 2017
//Programming Challenge 3-19 Monthly Payments


#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <cfloat>

using namespace std;

int main() {

	
	float rate = .01;
	int numberOfPayments;
	int loan;
	float numerator, denominator, monthlyPayments;

		numberOfPayments = 36;
	loan = 10000;
	
	cout << "Monthly Interest Rate = " << rate << endl;

	cout << "Number of Payments = " << numberOfPayments << endl;
	
	cout << "Loan Amount = " << loan << endl;
	
	//Formula to compute the Monthly Payments 
	numerator = 0.01 * pow(1 + 0.01, 36) ;
	denominator = pow(1 + 0.01, 36) - 1;
	monthlyPayments = (numerator / denominator) * loan;

	cout << "Monthly Payments of the Loan = ";
	cout << monthlyPayments << endl;


	
	
	

	system("Pause");


}
