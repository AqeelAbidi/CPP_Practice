                //-----------:0:AQEEL_ABiDi:0:-----------//
#include <iostream>
using namespace std;
const int ROW =4;
const int COLUMN =3;

int main()
{
	int matrix[ROW][COLUMN];
	for(int a=0; a<ROW; a++)
	for(int b=0; b<COLUMN; b++)
	{
		cout<<"Enter ROW "<<a+1<<" COLUMN "<<b+1<<" ";
		cin>>matrix[a][b];
	}
	
	cout<<"===================================="<<endl;
	
	for(int a=0; a<ROW; a++)
	{
//		cout<<"R"<<a+1<<"\t";
		for(int b=0; b<COLUMN; b++)
		{
			cout<<matrix[a][b]<<"\t";
		}
		cout<<endl;
	}
}
