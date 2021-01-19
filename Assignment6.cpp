#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	
	
	cout<<" Assignment 6 by Ali Zia Khan"<<endl;
	cout<<"==========MARKSHEET========="<<endl;
	cout<<"Enter your English Subject Marks"<<endl;
	float eng;
	cin>>eng;
	cout<<"Enter your Urdu subject marks"<<endl;
	float urd;
	cin>>urd;
	cout<<"Enter your Mathematics subject marks"<<endl;
	float mat;
	cin>>mat;
	cout<<"Enter your Science Subject Marks"<<endl;
	float sci;
	cin>>sci;
	cout<<"Enter your computer subject marks"<<endl;
	float comp;
	cin>>comp;
	
	
	float obt,per;
	obt=sci+comp+eng+urd+mat;
	int total=500;
	per=(obt/total)*100;
	
	
	
	cout<<"\n\n\n"<<endl;
	cout<<"============Result========="<<endl;
    
    cout<<"total marks:"<<total<<endl;
    cout<<"Obtained marks:"<<obt<<endl;
    cout<<"Percentage:"<<per<<"%"<<endl;
	
	return 0;
	
	
	
	
	
	
}
