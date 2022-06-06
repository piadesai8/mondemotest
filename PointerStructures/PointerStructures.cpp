// PointerStructures.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;

//create a structure emp that has three members : name, role and id.
// create two function display (which display employee data) and getinfo ( ask user to enter data for emp)

struct emp
{
	string name, role;
	int id;
};
void display(emp &e1)  // pass by reference
{
	cout << "\n Name : " << e1.name;
	cout << "\n Role : " << e1.role;
	cout << "\n ID : " << e1.id;
}
void getinfo(emp &temp) // pass by reference
{
	
	cout << "Please enter Employee Name: ";
	getline(cin, temp.name);
	cout << "Please enter Role: ";
	getline(cin, temp.role);
	cout << " Please enter ID: ";
	cin >> temp.id;
	cin.ignore();	
}
int main()
{

	// feature 1 , 2 added by alana
	emp emp1,emp2;
	 getinfo(emp1);	
	getinfo(emp2);
	display(emp1);
	display(emp2);
}

