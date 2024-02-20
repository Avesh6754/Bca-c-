#include<iostream>

using namespace std;
//Sum of Positive Numbers Only
main()
{
	int n;
	cout<<"Enter the value of n : ";
	cin>>n;
	int i=1,sum=0;
	do
	{
		sum=sum+n;
		n--;
	}while(n>=i);
	cout<<"Sum of N : "<<sum<<" ";
}
