/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;
struct Student{
	string name;
	int rollno;
	int marks;
}s1;
void display(){
	cout << s1.name << endl;
	cout << s1.rollno << endl;
	cout << s1.marks << endl;
}
int main(){
	 cout << "Enter name:";
	 cin >> s1.name;
	 cout << "Enter rollno:";
	 cin >> s1.rollno;
	 cout << "Enter marks:";
 	 cin >> s1.marks;
 display();
}
