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

class college_dept{
	public:
		
		string dept_name;
		int dept_id;
		string dept_block="north block";
	
	
};

class employee:public college,public college_dept{
	
	public:
		string emp_name;
		int emp_id;
		string emp_status="onsite";	
	
};
int main(){

   
cout<<"Assignment made by ALI ZIA KHAN"<<endl;
cout<<" ------Multiple Inheritance----- \n\n\n"<<endl;

   employee e1;
   e1.emp_name="Ahmed";
   cout<<"The employee name is \t"<<e1.emp_name<<endl;
   cout<<"The employee's college is \t"<<e1.college_name<<endl;
   cout<<"the employee deartment block is \t"<<e1.dept_block<<endl;
   cout<<"The employee emp_status \t"<<e1.emp_status<<endl;

    









}
