#include<iostream>

using namespace std;
//1)Example 1: Displaying Array Elements
main()
{
	int  number[5]={12,25,13,25,45};
	cout<<"The Array element : ";
	for(const int &n : number)
	{
		cout<<" "<<n;
	}
	cout<<"the nymber are "<<endl;
	cout<<"Print arrayn using for loop : "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<"The vlue of array : "<<number[i]<<" ";
	}
}
