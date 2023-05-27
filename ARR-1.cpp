                //-----------:0:AQEEL_ABiDi:0:-----------//
#include <iostream>
using namespace std;
int main()
{
	int t[7],sum=0;
	for(int a=0; a<=6; a++)
	{
		cout<<"Enter Temperature for day "<<a+1<<" ";
		cin>>t[a];
		sum +=t[a];
	}
	for(int a=0; a<=6; a++)
	cout<<"Temperature of day "<<a+1<<" is "<<t[a]<<endl;
	float Avg=sum/7;
	cout<<"\nAverage temperature is "<<Avg;
}
