/*
Write a program that uses a structure called point to model a point. Define three points,
and have the user input values to two of them. Then set the third point equal to the sum
of the other two, and display the value of the new point.
*/



#include<iostream>

using namespace std;

struct point{
	int a, b;
};

int main(){
	point pa, pb, pc;
	
	cout << "Enter cordinates for pa: ";
	cin >> pa.a >> pa.b;
	cout << "Enter cordinates for pb: ";
	cin >> pb.a >> pb.b;
	
	pc.a = pa.a + p2.a;
	pc.b = pa.b + p2.b;
	
	cout << "Coordinates of pa+pb are: " << pc.a << ", " << pc.b << endl;
	return 0;
}
