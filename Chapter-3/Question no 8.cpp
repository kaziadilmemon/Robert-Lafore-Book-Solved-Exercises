/*
Write a program that repeatedly asks the user to enter two money amounts expressed in
old-style British currency: pounds, shillings, and pence. (See Exercises 10 and 12 in
Chapter 2, “C++ Programming Basics.”) The program should then add the two amounts
and display the answer, again in pounds, shillings, and pence.
*/


#include<iostream>

using namespace std;

int main(){
	char ch1;
	do{
		char temp;
		int pounds1, shillingsvalue1, pence1, pounds2, shillingsvalue2, pence2;
		cout << "Enter first amount: ";
		cin >> pounds1 >> temp >> shillingsvalue1 >> temp >> pence1;
		cout << "Enter second amount: ";
		cin >> pounds2 >> temp >> shillingsvalue2 >> temp >> pence2;
		pounds1 += pounds2;
		shillingsvalue1 += shillingsvalue2;
		pence1 += pence2;
		if(pence1 > 11){
			shillingsvalue1 += (pence1/12);
			pence1 = pence1%12;
		}
		if(shillingsvalue1 > 19){
			pounds1 += (shillingsvalue1/20);
			shillingsvalue1 = shillingsvalue1%20;
		}
		cout << "Total is Â£" << pounds1 << "." << shillingsvalue1 << "." << pence1 << endl; 
		cout << "Do you want to continue (y/n): ";
		cin >> ch1;
	}while(ch1 == 'y');
	cout << endl;
	return 0;
}
