/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;
class Employee{
 public:
  int e_id;
  string name;
  float bs;
  float da;
  float it;
  float net_sal;
  float gross;
  void read(){
   cout << "Enter Employee id, name, basic, salary:";
   cin >> e_id >> name >> bs;
  }
void cal_da(){
 da = 0.52 * bs;
}
void cal_gross(){
 gross = bs + da;
}
void cal_it(){
 it = 0.30 * gross;
}
void cal_net_sal(){
net_sal = gross-it;
}
void display(){
cout << "Employee id:"<< e_id << endl;
cout << "Employee name: " << name << endl;
cout << "DA: "<< da << endl;
cout << "IT: "<< it << endl;
cout << "Gross Salary:" << gross << endl;
cout << "Net salary: " << net_sal << endl;
}
};
int main(){
Employee e[10];
int i;
for(i = 0; i < 10; i++){
e[i].read();
e[i].cal_da();
e[i].cal_gross();
e[i].cal_it();
e[i].cal_net_sal();
e[i].display();
return 0;
}
}