/*On a certain day the British pound was equivalent to $1.487 U.S., the French franc was
$0.172, the German deutschemark was $0.584, and the Japanese yen was $0.00955.
Write a program that allows the user to enter an amount in dollars, and then displays this
value converted to these four other monetary units.*/




#include<iostream>

using namespace std;
int main(){
	float britishpound=1.487;
	float x;
	float frenchfrane=0.172;
	float deutschemark=0.584;
	float japaneseyen=0.00955;
	cout<<"enter amount in dollars :";
	
	cin>>x;
	cout<<"value in british pound :"<<x/britishpound<<endl;
	cout<<"value in french frane :"<<x/frenchfrane<<endl;
	cout<<"value in German deutschemark :"<<x/deutschemark<<endl;
	cout<<"value in japanese yen :"<<x/japaneseyen;
	
	
	}
