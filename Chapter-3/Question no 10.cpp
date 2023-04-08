/*
Write another version of the program from Exercise 7 so that, instead of finding the final
amount of your investment, you tell the program the final amount and it figures out how
many years it will take, at a fixed rate of interest compounded yearly, to reach this
amount.
*/

#include<iostream>

using namespace std;

int main(){

	float finalamount, amount, interest, temp;
	int year=0;
	cout << "Enter the final amount you want to get in particular year there: ";
	cin >> finalamount;
	cout << "Enter the principal amount: ";
	cin >> amount;
	cout << "Enter the rate of interest: ";
	cin >> interest;

	temp = amount;

	while(temp<finalamount){
		temp *= (1+(interest/100));
		year++;
	}
	cout << "It will take  the " << year << " years at " << interest << " of the interest to reach the final amount  is that" << finalamount << endl;
	return 0;
}
