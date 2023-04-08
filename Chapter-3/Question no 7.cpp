/*
Write a program that calculates how much money you’ll end up with if you invest an
amount of money at a fixed interest rate, compounded yearly. Have the user furnish the
initial amount, the number of years, and the yearly interest rate in percent.
*/


#include<iostream>

using namespace std;

int main(){
	int year;
	float amountvalue, interestvalue, compound;
	
	cout << "Enter initial amount: ";
	cin >> amountvalue;
	cout << endl << "Enter number of years: ";
	cin >> year;
	cout << endl << "Enter interest rate(percent per year): ";
	cin >> interestvalue;

	for(int i=0; i<year; i++){
		compound = amountvalue + (amountvalue * (interestvalue/100));
		amountvalue = compound;
	}
	cout << endl << "At the end of " << year << ", you will have " << compound << " dollars." << endl;
	return 0;
}
