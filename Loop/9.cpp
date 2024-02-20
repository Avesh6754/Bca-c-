#include<iostream>

using namespace std;

main()
{
	float num;
	int n,i=1;
	
	int sum=0;
	cout<<"Enter the value of n : ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cout<<"Enter Num : ["<<i<<"] ";
		cin>>num;
	if(num<0.0)
	{
		goto jump;
	}
	sum=sum+num;
	
	}
	jump:
		int Average;
		Average=sum/(i-1);
		cout<<"Average : "<<Average<<" ";
}
