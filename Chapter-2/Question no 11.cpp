/*By default, output is right-justified in its field. You can left-justify text output using the
manipulator setiosflags(ios::left) . (For now, don’t worry about what this new notation
means.) Use this manipulator, along with setw() , to help generate the following output:*/


#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	cout << setiosflags(ios::left) << setw(12) << "Last name" << setw(14) << "First name" 
	<< setw(17) << "Street address" << setw(12) << "Town" << setw(5) << "State" << endl;
	cout << setfill('.') << setw(60) << ".";  
	cout << endl << setfill(' ') << setiosflags(ios::left)  << setw(12) << "Adil" << setw(14) 
	<< "Asim" << setw(17) << "135 loop street" << setw(12) << "Defence Town" << setw(5) << "AA" << endl;
	cout << setiosflags(ios::left) << setw(12) << "O'Brian" << setw(14) << "Coleen" << setw(17) 
	<< "def the 35" << setw(12) << "largecity" << setw(5) << "QQ" << endl;
	cout << setiosflags(ios::left) << setw(12) << "Wong" << setw(14) << "Harry" << setw(17) 
	<< "def the 42" << setw(12) << "riverside" << setw(5) << "RR" << endl;
	cout << endl;
	return 0;
}
