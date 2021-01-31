#include<iostream>
#include<iostream>
#include<string.h>
#include<conio.h>

using namespace std;

int main(){
	
		
cout<<"Assignment made by ALI ZIA KHAN"<<endl;
cout<<"  \n\n\n"<<endl;
		
		
		
		
		cout<<"--- Please select one Option ----\n\n";
		cout<<"Press 1 for hide a folder\n";
		cout<<"Press 2 for Unhide a folder\n";
		
		int selected;
		cin>>selected;
		
		
		if(selected==1){
			system("attrib +h +s +r D:\sample");
			cout<<"Hidden your folder";
		}
		else if(selected==2){
			system("attrib -h -s -r D:\sample");
			cout<<"UnHidden your folder";
		}
		else{
			cout<<"Enter correct Number";
		}
		
		
	
}
