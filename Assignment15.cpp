#include<iostream>
#include<conio.h>
using namespace std;

void multiplication(){
	
	float n1,n2;
	cout<<"Enter first number for multiplication"<<endl;
	cin>>n1;
	cout<<"Enter second number for multiplication"<<endl;
	cin>>n2;
	cout<<"Muttiplication is  "<<n1*n2<<endl;
	
}
void division(){
	
	float n1,n2;
	cout<<"Enter first number for division"<<endl;
	cin>>n1;
	cout<<"Enter second number for division"<<endl;
	cin>>n2;
	cout<<"Division is  "<<n1/n2<<endl;
	
}

void addition(){
	
	float n1,n2;
	cout<<"Enter first number for  addition"<<endl;
	cin>>n1;
	cout<<"Enter second number for  addition"<<endl;
	cin>>n2;
	cout<<"Addition is  "<<n1+n2<<endl;
	
}
void subtraction(){
	
	float n1,n2;
	cout<<"Enter first number for subtraction"<<endl;
	cin>>n1;
	cout<<"Enter second number for subtraction"<<endl;
	cin>>n2;
	cout<<"Subtraction is  "<<n1-n2<<endl;
	
}


int main(){
cout<<"====Select anyone option===="<<endl;
cout<<"=======Select any one option======="<<endl;
cout<<"Press A for addition"<<endl;
cout<<"Press S for subtraction"<<endl;
cout<<"Press M for  multiplication"<<endl;
cout<<"Press D for division"<<endl;

string opt;
cin>>opt;
if(opt=="A" || opt=="a"){
	
	addition();
	
}
else if(opt=="S" || opt=="s"){
	
	subtraction();
}
else if(opt=="M" || opt=="m"){
	
	multiplication();
}
else{
	division();
	
}
return 0;

}










	
