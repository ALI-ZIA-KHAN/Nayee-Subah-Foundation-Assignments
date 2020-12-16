#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	cout<<"==================BIO DATA================="<<endl;
	
	string fname;
	cout<<"Enter your first name"<<endl;
	cin>>fname;
	string lname;
	cout<<"Enter your last Name"<<endl;
	cin>>lname;
	cout<<"Enter First letter of your name"<<endl;
	char fl;
	cin>>fl;
	cout<<"Enter your percentage"<<endl;
	float prcn;
	cin>>prcn;
	cout<<"Enter your favourite number"<<endl;
	int n;
	cin>>n;
	
	cout<<"******************OUTPUT******************"<<endl;
	cout<<"Your Full Name is :"<<fname<<"\t"<<lname<<endl;
	cout<<" First letter of your name is  "<<fl<<endl;
	cout<<" Your percentage is     "<<prcn<<endl;
	cout<<" Your favourite number is   "<<n<<endl;
	
    return 0;	
	
	
}
