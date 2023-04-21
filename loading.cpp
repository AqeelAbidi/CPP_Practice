                //-----------:0:AQEEL_ABiDi:0:-----------//
#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	

//	int loading;
	int valueOne;
	int valueTwo;
	lebal:
	cout<<"Please enter the first number"<<endl;
	cin>>valueOne;
	cout<<"Please enter the second number"<<endl;
	cin>>valueTwo;
	cout<<"\n\n";
	cout<<"loading";
		for(int i=1; i<=5; i++)
	{
		cout<<".";
		Sleep(1000);
	}
	cout<<"\n\n\t\t\t\tOutput"<<endl;
	cout<<"Sum of two value is :"<<valueOne+valueTwo;
	cout<<endl;
	int choice;
	cout<<"Please enter your choice \n 1) restart\n2) exit"<<endl;
	cin>>choice;
	if(choice==1)
	{
    system("cls");
    goto lebal;
	}

}
