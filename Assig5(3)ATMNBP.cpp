#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	
	cout<<"*********Assignment 6 by ALI ZIA KHAN***********"<<endl;
	cout<<"=====welcome to national bank of pakistan========"<<endl;
	cout<<"Enter your pincode please"<<endl;
	int pinchk;
	cin>>pinchk;
	if(pinchk==654321){
		
		cout<<"Welcome to NBP ATM"<<endl;
		cout<<"Choose the option in following"<<endl;
		
		cout<<"Press 1 for balance enquiry"<<endl;
		cout<<"press 2 for cash withdrawal"<<endl;
		cout<<"Press 3 for Bill payment"<<endl;
		cout<<"Press 4 for exit"<<endl;
		
		cout<<"Your option?"<<endl;
		int opt;
		cin>>opt;
		int balance=20000;
		if(opt==1){
			
			cout<<"Your balance in account is\t"<<balance<<endl;
		          }
		else if(opt==2){
			cout<<"***cash withdrawal options"<<endl;
			cout<<"Your balance is"<<balance<<endl;
			cout<<"press A for withdrawal of 10000"<<endl;
			cout<<"press B for withdrawal of 5000"<<endl;
			cout<<"press C for withdrawal of 1000"<<endl;
			cout<<"press D for withdrawal of 500"<<endl;
			cout<<"Presss E for others"<<endl;
			char wd;
			cout<<"Now your option"<<endl;
			cin>>wd;
			if(wd=='A' || wd=='a'){
				
				cout<<"Now your balance is"<<balance-10000<<endl;
				
			}
			else if(wd=='B' || wd=='b') {
				cout<<"Now your balance is "<<balance-5000<<endl;
			}
			else if(wd=='C' || wd=='c'){
				
				cout<<"Now your balance is "<<balance-1000<<endl;
				
			}
		    else if(wd=='D' || wd=='d'){
		    	
		    	cout<<"Now your balance is"<<balance-500<<endl;
			}  	
			else{
				int amount;
				
				cout<<"Then how much you want to withdraw"<<endl;
				cin>>amount;
				if(amount<=balance){
					cout<<"Now your balance is balance is "<<balance-amount<<endl;
				                  }
				else{
				
			
				     cout<<"You donot have enough balance"<<endl;
				   }
		    	} 
			
			
			
		}	
        else if(opt==3){
        	cout<<"Welcome to bill payment menu"<<endl;
        	cout<<"Press 1 for Electricity bill payment status"<<endl;
        	cout<<"Press 2 for gas Bill payment status"<<endl;
        	cout<<"Press 3 for water Bill payment status"<<endl;
        	int bill;
        	cout<<"Your option?"<<endl;
        	cin>>bill;
        	if(bill==1){
        		
        		cout<<"Your Electricity bill has been paid"<<endl;
			           }
        	else if(bill==2){
        		
        		
        		cout<<"Your gas bill hasn't been paid yet"<<endl;
        		
			           }
        	else{
        		
        		cout<<"Your water bill has been paid"<<endl;
			    }
        	
        	    }
		
		else{
			
			
			cout<<"you are exiting from the system"<<endl;
			
		    }    			
	
		
	}
	else{
		
		cout<<"Invalid pin entered"<<endl;
	}
	
	
	
	return 0;
}
	
