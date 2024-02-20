#include<iostream>

using namespace std;
// Sum of Positive Numbers Only
main()
{
	int n;
	cout<<"Enter the Value of n : ";
	cin>>n;
	int sum=0;
	while(n>=0)
	{
		sum=sum+n;
		n--;
	}
	cout<<"Sum of N : "<<sum<<" ";
	
}
