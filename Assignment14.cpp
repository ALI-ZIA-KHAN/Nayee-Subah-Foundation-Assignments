#include<iostream>
#include<conio.h>
using namespace std;

struct Person{
	
	string name;
	int roll_no;
	int age;
	string city;
	float perc;
	
	
	
};





int main(){
	Person p1[3];
	
	for(int i=0; i<3; i++){
		
	cout<<"Enter Your Name\t";
	cin>>p1[i].name;	
	
	cout<<"Enter Your Roll Number\t";
	cin>>p1[i].roll_no;
    
	cout<<"Enter Your Age\t";
	cin>>p1[i].age;	
	
	cout<<"Enter Your City Name\t";
	cin>>p1[i].city;
	
	cout<<"Enter Your Percentage\t";
	cin>>p1[i].perc; 




}



}


