#include<iostream>
//3: Display Sum and Average of Array Elements Using for Loop
using namespace std;

main()
{
	int number[]={25,62,45,8,69,98};
	int sum=0;
	int count=0;
	double average;
	for(const int &n:number)
	{
		cout<<" "<<n;
		sum=sum+n;
		
		count++;
	}
	average=sum/count;
	
	cout<<endl<<"Their Average = : "<<average;
}

