/* Chapter Question no 12 
Write the inverse of Exercise 10, so that the user enters an amount in Great Britain’s new
decimal-pounds notation (pounds and pence), and the program converts it to the old
pounds-shillings-pence notation. An example of interaction with the program might be
Enter decimal pounds: 3.51
Equivalent in old notation = £3.10.2.
Make use of the fact that if you assign a floating-point value (say 12.34) to an integer
variable, the decimal fraction (0.34) is lost; the integer value is simply 12. Use a cast to
avoid a compiler warning. You can use statements like
float decpounds;
int pounds;
float decfrac;
// input from user (new-style pounds)
// old-style (integer) pounds
// decimal fraction (smaller than 1.0)
pounds = static_cast<int>(decpounds); // remove decimal fraction
decfrac = decpounds - pounds; // regain decimal fraction
You can then multiply decfrac by 20 to find shillings. A similar operation obtains pence.
*/


#include<iostream>
using namespace std;
int main(){
	float pounds;
	cout<<"enter decimal pounds value: ";
	cin>>pounds;
	int dpounds=static_cast<int>(pounds);
	float fpounds=pounds-dpounds;
	float shillings=fpounds*20;
	int dshillings=static_cast<int>(shillings);
	float fshillings=shillings-dshillings;
	int pence=static_cast<int>(fshillings*12);
	cout<<"equivalent in old notation: "<<dpounds<<"."<<dshillings<<"."<<pence; 
	}
