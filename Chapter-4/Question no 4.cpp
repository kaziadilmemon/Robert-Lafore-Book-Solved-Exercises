/*
Create a structure called employee that contains two members: an employee number
(type int) and the employeeâ€™s compensation (in dollars; type float). Ask the user to fill
in this data for three employees, store it in three variables of type struct employee, and
then display the information for each employee.
*/


#include<iostream>
using namespace std;

struct employee{
    int emp_num;
    float emp_comp;
};

int main(){
    employee eone, etwo, ethree;
    cout << "Enter employee details: " << endl;

    cout << endl << "Employee 1\nEmployee number: ";
    cin >> eone.emp_num;
    cout << "Employee's compensation: ";
    cin >> eone.emp_comp;

    cout << endl << "Employee 2\nEmployee number: ";
    cin >> etwo.emp_num;
    cout << "Employee's compensation: ";
    cin >> etwo.emp_comp;

    cout << endl << "Employee 3\nEmployee number: ";
    cin >> ethree.emp_num;
    cout << "Employee's compensation: ";
    cin >> ethree.emp_comp;

    cout << endl << "Employee Details: ";
    cout << endl<< "Employee 1\nEmployee number: " << eone.emp_num << "\nEmployee's compensation: " << eone.emp_comp << endl;
    cout << endl<< "Employee 2\nEmployee number: " << etwo.emp_num << "\nEmployee's compensation: " << etwo.emp_comp << endl;
    cout << endl<< "Employee 3\nEmployee number: " << ethree.emp_num << "\nEmployee's compensation: " << ethree.emp_comp << endl;

    return 0;
}
