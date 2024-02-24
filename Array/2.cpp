#include<iostream>

using namespace std;
//Take Inputs from User and Store Them in an Array
main()
{
	int number[5];
	int i;
	
	for( i=0;i<5;i++)
	{
		cout<<"Take the user input : ""["<<i<<"] " ;
		cin>>number[i];
	}
	cout<<endl<<"The number are : "<<endl;
	
	for(i=0;i<5;i++)
	{
		cout<<" "<<number[i];
	}
}
