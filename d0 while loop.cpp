#include <iostream>
using namespace std;
int main()

{
int choice;
	
	do
	{
		
	int table ;
	cout<<"Pleace enter the number ";
	cin>>table;
	for(int i= 1;i<=10 ; i++)
	{
	 cout<<table<<"x"<<i<<" = "<<table*i<<endl;	
    }
    
    cout<<"Do you want to continue press 1 for continue\npress any key for exit";
    cin>>choice;
}
    while (choice==1);
    
}
