/*
Write a temperature-conversion program that gives the user the option of converting
Fahrenheit to Celsius or Celsius to Fahrenheit. Then carry out the conversion. Use
floating-point numbers.
*/

#include<iostream>
using namespace std;
int main(){
	int x;
	double temp;
	cout<<"type 1 to convert fahrenhiet to celsius.\n"<<"type 2 to convert celsius to fahrenhiet.\n";
	cin>>x;
	if(x==1){
		cout<<"write temperature in fahrenhiet: ";
		cin>>temp;
		cout<<"temperature in celsius: "<<5.0/9.0*(temp-32.0);
		
	}
	else if(x==2) {	
	cout<<"write temperature in celsius: ";
		cin>>temp;
		cout<<"temperature in fahrenhiet: "<<9.0/5.0*temp+32.0;
		
	}
	else cout<<"invalid input.";
}
