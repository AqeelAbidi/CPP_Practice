                //-----------:0:AQEEL_ABiDi:0:-----------//
#include<iostream>
using namespace std;
const int LENGTH=7;
void show(int[LENGTH]);
void line();

int main()
{
 int t[LENGTH];
 for(int a=0; a<LENGTH; a++)
 {
 	cout<<"Enter Temperature for day "<<a+1<<" ";
 	cin>>t[a];
 }
 line();
 show(t);	
}
void show(int temperature[LENGTH])
{
	int sum=0;
	for(int a; a<LENGTH; a++)
	{
		cout<<"\nTemperature for day "<<a+1<<" is ";
		cout<<temperature[a];
		sum +=temperature[a];		
	}
	line();
	cout<<"\nSum of Temperature is "<<sum;
	line();
	cout<<"\nAverage of Temperature is "<<sum/LENGTH;
}

void line()
{
	cout<<"\n==============================="<<endl;
}
