                //-----------:0:AQEEL_ABiDi:0:-----------//
#include <iostream>
using namespace std;
float Marks_Calculator(float English, float Urdu, float Computer, float Maths, float Science, float Programming);   //for Add the subjects marks....
float Total_Marks_Calculator(float English, float Urdu, float Computer, float Maths, float Science, float Programming);   //for Calculate Total marks....
float Percentage_Calculator(float Obtain_Marks, float Total_Marks);               //for finding Percentage....
int main()
{
	int size;
	float Obtain_Marks[size];    //Total - subjects....
	cout<<"Please enter the number of subjects you want to percentage : ";
	cin>>size;
	float Total_Marks[size];           //Total - Marks....
	for(int i =0; i<size; i++)
	{
		cout<<"please enter the subject marks : ";
		cin>>Obtain_Marks[i];     //array for finding subjects marks....
		
		cout<<"Please enter the total marks of this subject : ";
		cin>>Total_Marks[i];        //array for finding total marks of every subjects....
		
		cout<<"================================================="<<endl;
	}
	float Final = Marks_Calculator(Obtain_Marks[0],Obtain_Marks[1],Obtain_Marks[2],Obtain_Marks[3],Obtain_Marks[4],Obtain_Marks[5]);
	cout<<"Obtain marks of student is : "<<Final<<endl;
	Percentage_Calculator(Final, Total_Marks_Calculator(Total_Marks[0],Total_Marks[1],Total_Marks[2],Total_Marks[3],Total_Marks[4],Total_Marks[5]));
}

float Marks_Calculator(float English, float Urdu, float Computer, float Maths, float Science, float Programming)
{
	return English + Urdu + Computer + Maths + Science + Programming;
}

float Total_Marks_Calculator(float English, float Urdu, float Computer, float Maths, float Science, float Programming)
{
	return English + Urdu + Computer + Maths + Science + Programming;
}

float Percentage_Calculator(float Obtain_Marks, float Total_Marks)
{
	float Average = Obtain_Marks / Total_Marks;
	float final_Average = Average * 100;
	cout<<"The total percentage of student is : "<<final_Average;
	return 0;
}


