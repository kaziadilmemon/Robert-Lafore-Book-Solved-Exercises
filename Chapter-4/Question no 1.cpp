/*
A phone number, such as (212) 767-8900, can be thought of as having three parts: the
area code (212), the exchange (767), and the number (8900). Write a program that uses a
structure to store these three parts of a phone number separately. Call the structure
phone . Create two structure variables of type phone . Initialize one, and have the user
input a number for the other one. Then display both numbers.
*/

#include<iostream>

using namespace std;

struct phone{
	int areacodenumber, exchangenumber, number;
};

int main(){
	phone phone1, phone2;

	phone1.areacode = 200;
	phone1.exchange = 700;
	phone1.number = 890;
	
	cout << "Enter your areacode number, exchange number, and number: ";
	cin >> phone2.areacodenumber >> phone2.exchangenumber >> phone2.number;
	
	cout << "My number is (" << phone1.areacodenumber << ") " << phone1.exchangenumber << "-" << phone1.number << endl;
	
	cout << "Your number is (" << phone2.areacodenumber << ") " << phone2.exchangenumber << "-" << phone2.number << endl;
	return 0;
}
