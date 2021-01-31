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
		string designation;
};

class commerce_student:public student{
	public:
		string subject="Accounting";
		int stud_status;
		int stud_id;
	
	
	
};



int main(){
	
	
	
cout<<"Assignment made by ALI ZIA KHAN"<<endl;
cout<<" -----Multi level Inheritance----- \n\n\n"<<endl;
	
	
	college c1;
	student s;
	commerce_student com;
	
	
	s.address="Airport";
	s.name="Ali";
	com.name="Asad";
	com.address="Lahore";
	com.stud_id=14;
	cout<<"Student name is \t"<<s.name<<endl;
	cout<<"College address is \t"<<c1.address<<endl;
	cout<<"Student's address is '\t"<<s.address<<endl;
	cout<<"Commerce student name \t"<<com.name<<endl;
	cout<<"Commerce student's adress is \t"<<com.address<<endl;
	cout<<"Commerce student subject \t"<<com.subject<<endl;
	
	
	
}
