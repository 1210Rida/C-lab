/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;
class  student{
	int rollno;
	string  name;
	string  Branch;
	string grade;
	public:
void read(){
cout << "Enter rollno, name, Branch, grade:" << endl;
cin >> rollno >> name >> Branch >> grade;
}
void display(){
cout << "rollno: " << rollno << endl;
cout << "name:"<< name << endl;
cout << "Branch:" << Branch<< endl;
cout << "grade:"<< grade << endl;
}
};
int  main(){
student s1;
student *ptr;
ptr = &s1;
ptr -> read();
ptr -> display();
return 0;
}
