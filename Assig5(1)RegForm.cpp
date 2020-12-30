#include<iostream>
#include<conio.h>
using namespace std;


int main(){
	
	cout<<"*********Assignment 6 by ALI ZIA KHAN***********"<<endl;
	cout<<"*****REGISTRATION FORM*****"<<endl;
	
	
	
	string fname;
	cout<<"Enter your first name"<<endl;
	cin>>fname;
	
	string lname;
	cout<<"Enter your last name"<<endl;
	cin>>lname;
	
	
	string s_email;
	cout<<"Enter your email"<<endl;
	cin>>s_email;
	
	string s_password;
	cout<<"Enter your password"<<endl;
     cin>>s_password;
	 
	 
	 string sc_password;
	 cout<<"Confirm your password"<<endl;
	 cin>>sc_password;
	 
	 
	 
	 if(sc_password==s_password){
	 	
	 	cout<<"WELCOME, SUCCESSFULLY SIGNED UP"<<endl;
	 	cout<<"enter following to login"<<endl;
	 	
	 	
	 	string l_email;
	 	cout<<"Enter your email"<<endl;
	 	cin>>l_email;
	 	string l_password;
	 	cout<<"Enter your password"<<endl;
	 	cin>>l_password;
	 	if(l_password==s_password && l_email==s_email){
	 		
	 		cout<<"log in successful"<<endl;
	 		system("start Assig5(2)Homepage.exe");
			}
	 		
	 	else{
	 		
	 		cout<<"invalid credentials"<<endl;
	 		
	 		
	 		return 0;
	 		
		 }	
	 		
	 		
	 		
		 }
	 	
	 	
	 	
	 }
	 
	 
	 
	 
	 
	
