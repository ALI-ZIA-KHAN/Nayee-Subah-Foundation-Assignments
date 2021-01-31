#include<iostream>
#include<string.h>
using namespace std;



class college{
	public:
		string college_name="PAF College";
		string address="shahra-e-faisal";
		string city="karachi";
		int fax_no=9854;
	
};

class student:public college{
	public:
		string name;
		int roll_no;
		int age;
};

int main(){
	
	
	
cout<<"Assignment made by ALI ZIA KHAN"<<endl;
cout<<" -----Single Inheritance----- \n\n\n"<<endl;
	
	college c1;
	student s;
	s.address="Airport";
	s.name="Ali";
	cout<<"Student name is \t"<<s.name<<endl;
	cout<<"College address is \t"<<c1.address<<endl;
	cout<<"Student's address is '\t"<<s.address<<endl;

	
	
	
}
