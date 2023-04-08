/*
Create the equivalent of a four-function calculator. The program should ask the user to
enter a number, an operator, and another number. (Use floating point.) It should then
carry out the specified arithmetical operation: adding, subtracting, multiplying, or divid-
ing the two numbers. Use a switch statement to select the operation. Finally, display the
result.
*/


#include<iostream>
using namespace std;
int main(){
	float n1,n2;
	char op,response;
	do{
	
	cout<<"enter first number : ";
	cin>>n1;
	cout<<"enter second number : ";
	cin>>n2;
	cout<<"enter an operator(+,-,/,*) : ";
	cin>>op;
	switch(op){
		case'+':cout<<n1<<'+'<<n2<<'='<<n1+n2;break;
		case'-':cout<<n1<<'-'<<n2<<'='<<n1-n2;break;
		case'*':cout<<n1<<'*'<<n2<<'='<<n1*n2;break;
		case'/':cout<<n1<<'/'<<n2<<'='<<n1/n2;break;
		default:cout<<"invalid operator.";}
		cout<<"do you want another operation (type y/n) : ";
		cin>>response;
		
} while(response != 'n'); }
