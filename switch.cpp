                                    //-----------:0:AQEEL_ABiDi:0:-----------//
#include <iostream>
using namespace std;
int main()
{
int a;
int b;
int choice;
char yes='y';
do
{
	cout<<"\t\t\t\t------Values Calculater-------\n";
	cout<<"\t\t\t\t\t    /_(.!.)_/\n";
	cout<<"\t\t\t\t\t      [   ]\n";
	cout<<"\t\t\t\t\t  ...../ /.....\n\n\n";
cout<<"Enter the number=";
cin>>a;
cout<<"Enter the number=";
cin>>b;
cout<<"\n---------------------------------------------------"<<endl;
cout<<"pleace select the choice";
cout<<"\n==================================================="<<endl;
cout<<"1.ADD\n2.SUB\n3.MUL\n";
cin>>choice;
cout<<"---------------------------------------------------"<<endl;
switch(choice)
 {
 case 1:
 cout<<"Addition value="<<a+b;
 break;
 case 2:
 cout<<"Subtruct value="<<a-b;
 break;
 case 3:
 cout<<"Multiply value="<<a*b;
 break;
 default:
 cout<<"invaled number={0}";
 break;
 }
 cout<<"\n=================================================";
 cout<<endl;
 cout<<"Do you want to continue yes or no"<<endl;
 cout<<"Yes for Y"<<endl
 cout<<"No for N"<<endl;
 
 cin>>yes; 
 system("cls");              
}
while(yes=='y' || yes=='Y');
}
