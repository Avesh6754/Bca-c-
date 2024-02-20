#include<iostream>

using namespace std;
// Find the sum of first n Natural Numbers
main()
{
	int n;
	cout<<"enter the value of n : ";
	cin>>n;
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	cout<<"Sum of n : "<<sum<<" ";
}
