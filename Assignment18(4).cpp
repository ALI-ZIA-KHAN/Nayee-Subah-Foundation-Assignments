#include<iostream>
#include<string.h>
#include<conio.h>
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
		string designation="student";
};
class teacher:public college{
	
	public:
		string tea_name;
		int tea_id;
		string designation="teacher";
	
};
class security_head:public college{
	
	public:
		string sec_name;
		int sec_id;
		string designation="security personnel";
	
	
	
};


int main(){
	
	
	
cout<<"Assignment made by ALI ZIA KHAN"<<endl;
cout<<" -----Hierarichal Inheritance----- \n\n\n"<<endl;
	
	
	
	
	college c1;
	student s1;
	teacher t1;
	security_head sec1;
	s1.name="Ali";
	cout<<"The college name is \t"<<c1.college_name<<endl;
	cout<<"The student college name is \t"<<s1.college_name<<endl;
	cout<<"The employee college name is \t"<<t1.college_name<<endl;
	cout<<"The security head college name is \t"<<sec1.college_name<<endl;
	cout<<"The student name is \t"<<s1.name<<endl;
	cout<<"The status of Ali is \t"<<s1.designation<<endl;
	s1.address="Defence";
	cout<<"The address of student is now \t"<<s1.address<<endl;
	
	
	
	
	
	
	
}
