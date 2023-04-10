                //-----------:0:AQEEL_ABiDi:0:-----------//
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int valueOne,valueTwo;
	int choice;
	
	label:
	cout<<"\n\n\t\t\t\t\t\t\tCALCULATOR";
	
	cout<<"\nPlease enter the valueOne :";
	cin>>valueOne;
	
	cout<<"Please enter the valueTwo :";
	cin>>valueTwo;
	
	cout<<"-----------------------------------------"<<endl;
	
	cout<<"Select the choice\n1) SUM \n2) MULTIPLY \n3) SUBTRACT \n4) SQUARE ROOT\n5) COS of value"<<endl;
	cout<<"-----------------------------------------"<<endl;
	cin>>choice;
	cout<<"-----------------------------------------"<<endl;
	switch(choice)
	{
		case 1:
			system("cls");
			cout<<"Sum of two values is= ("<<valueOne+valueTwo<<")";
			break;
			
		case 2:
			system("cls");
			cout<<"Multiply of two values is= ("<<valueOne*valueTwo<<")";
			break;
			
		case 3:
			system("cls");
			cout<<"Subtraction of two values is= ("<<valueOne-valueTwo<<")";
			break;
			
		case 4:
			cout<<"Please select value for square root"<<endl;
			cout<<"1) valueOne\n2) valueTwo\n";
			cout<<"-----------------------------------------"<<endl;
			int v;
			cin>>v;
			if(v==1)
			{
				system("cls");	
				cout<<"squre root of valueOne is= ("<<sqrt(valueOne)<<")";
			}
			else if(v==2)
			{
				system("cls");
				cout<<"squre root of valueTwo is= ("<<sqrt(valueTwo)<<")";
			}
			else
			{
				system("cls");	
				cout<<"You have entered incorrectly";
			}
			break;
			
		case 5:
			cout<<"Please select value to find out the cos"<<endl;
			cout<<"1) valueOne\n2) valueTwo\n";
			cout<<"-----------------------------------------"<<endl;
			int a;
			cin>>a;
			if(a==1)
			{
				system("cls");
				cout<<"cos of valueOne is= ("<<cos(valueOne)<<")";
			}
			else if(a==2)
			{
				system("cls");
				cout<<"cos of valueTwo is= ("<<cos(valueTwo)<<")";
			}
			else
			{
				system("cls");
				cout<<"You have entered incorrectly";
			}
			break;
			
		default:
			cout<<"Invalid choice";
			break;
			
	}
	cout<<"\n-----------------------------------------"<<endl;
	cout<<"\nDo you want to continue"<<endl;
	cout<<"1) Continue\n2) Exit"<<endl;
	cout<<"-----------------------------------------"<<endl;
	int b;
	cin>>b;
	if(b==1)
	{
	system("cls");
	goto label;	
	}
	else
	{
	cout<<"--------------------------------"<<endl;
    cout<<"Thank you for using";
    }
}
