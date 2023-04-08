/*
Modify the FACTOR program in this chapter so that it repeatedly asks for a number and
calculates its factorial, until the user enters 0, at which point it terminates. You can
enclose the relevant statements in FACTOR in a while loop or a do loop to achieve this
effect.
*/


#include<iostream>

using namespace std;

int main(){
	int number= 0;
	do{ //do while loop	
		
		long fact = 1;
		cout << "Enter a number or 0 to exit: ";
		cin >> number;

		for(int j=number; j>0; j--)
			fact *= j;
		cout << "Factorial is " << fact << endl;
	}while(number!=0);
	return 0;
}
