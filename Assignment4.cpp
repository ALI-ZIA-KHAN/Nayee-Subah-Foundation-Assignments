#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main() {



    cout<<"*******ALI ZIA KHAN"<<endl;
	cout << "*************Even number program****************" << endl;
	int number;
	cout << "Enter number to check" << endl;
	cin >> number;
	string some;
	some = number % 2 == 0 ? "it is even number" : "It is odd";
	cout << some << endl;



	cout << "\n";


	cout << "*********VOWELS PROGRAM*****" << endl;
	char chk;
	cout << "Press any alphabetic key" << endl;
	cin >> chk;
	chk = tolower(chk);
	
	if (chk == 'a' || chk == 'e' || chk == 'i' || chk == 'o' || chk == 'u')
		cout << "It is vowel";
	else
		cout << "It is not a vowel";

	return 0;

}

