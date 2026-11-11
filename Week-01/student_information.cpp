#include<iostream>
#include<string>
using namespace std;

int main(){
	
	string name;
	int age;
	double marks;
	
	cout << "Enter Your Name :" ;
	cin >> name ;
	
	cout << "Enter Your Age :" ;
	cin >> age ;
	
	cout << "Enter Your Marks :" ;
	cin >> marks ;
	
	cout << "------ Student Information ------" << endl;
	
	cout << "Name : " << name << endl;
	cout << "Age : " << age << endl;
	cout << "Marks : " << marks << endl;
	
	return 0;
	
}
