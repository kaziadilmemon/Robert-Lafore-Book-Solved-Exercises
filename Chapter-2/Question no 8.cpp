/*When a value is smaller than a field specified with setw() , the unused locations are, by
default, filled in with spaces. The manipulator setfill() takes a single character as an
argument and causes this character to be substituted for spaces in the empty parts of a
field. Rewrite the WIDTH program so that the characters on each line between the location
name and the population number are filled in with periods instead of spaces, as in
Portcity.....2425785*/


#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	cout<<"1990"<<setw(8)<<setfill('.')<<"135";
	cout<<"\n1991"<<setw(8)<<setfill('.')<<"7290";
	cout<<"\n1992"<<setw(8)<<setfill('.')<<"11300";
	cout<<"\n1993"<<setw(8)<<setfill('.')<<"16200";
	return 0;
  
}
