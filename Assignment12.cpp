#include<iostream>
#include<conio.h>
using namespace std;
int main(){

	cout<<"======Select any one option====="<<endl;
	cout<<"\n\n"<<endl;
	cout<<"======Press 1 for two lives"<<endl;
	cout<<"======Press 2 for infinite lives"<<endl;
	int num;
	cin>>num;	
	if(num==1){
		int a=1;
		while(a<=2){
			string ans;
			cout<<"Enter your name for matching"<<endl;
			cin>>ans;
			if(ans=="nsf"){
				cout<<"Congratulations!!you won the match"<<endl;
				a=3;
				break;
			}
			else{
				cout<<"Try again"<<endl;
				a++;
			}
		}			
	}	
	else{
		bool b=true;
		while(b==true){
			string ans2;
			cout<<"Enter your name for matching"<<endl;
			cin>>ans2;
			if(ans2=="nsf"){
					cout<<"Congratulations!!you won the match"<<endl;
				b=false;
				break;
			}
			else{
				cout<<"Try again"<<endl;			
			}	
		}		
	}
	return 0;	
}



