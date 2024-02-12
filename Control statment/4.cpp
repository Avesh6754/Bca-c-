#include<iostream>

using namespace std;

main()
{
	int a;
	cout<<"Enter the integer number : ";
	cin>>a;
	
	if(a!=0)
	{
		if(a>0)
		{
			cout<<"You enter positive value : ";
		}
		else
		{
			cout<<"You enter negative value : ";
		}
	}
	else
	{
		cout<<"You entre 0 ";
	}
}
