#include<iostream>
#include<conio.h>
using namespace std;


int main(){
	
	int num,end,strt;
	cout<<"Enter the number of which table you want"<<endl;
	cin>>num;
	cout<<"Enter the number table you want to start with"<<endl;
	cin>>strt;
	cout<<"Enter the number of table you want to end with"<<endl;
	cin>>end;
	
	for(int i=strt;i<=end;i++){
		
		
		cout<<num<<"  "<<"  *  "<<i<<"   "<<"   =  "<<num*i<<endl;
		
	}
		
		return 0;
		
	}

