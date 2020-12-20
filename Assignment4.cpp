#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
	
	
	
	
	cout<<"*************Even number program****************"<<endl;
	int number;
	cout<<"Enter number to check"<<endl;
	cin>>number;
	string some;
	some=number%2==0 ?"it is even number":"It is odd";
	cout<<some<<endl;
	
	
	
	cout<<"\n";
	
	
	cout<<"*********VOWELS PROGRAM*****"<<endl;
	string chk;
	cout<<"Press any alphabetic key"<<endl;
	cin>>chk;
	string m=tolower(chk);
	
	string result=m == "a" || chk =="e" || chk=="i" ||chk=="o" || chk=="u"?"It is a vowel":"Not a vowel";
	cout<<result;
	
	
	
	return 0;
	
}
		
