#include<iostream>

using namespace std;

struct Distance
{
	
	int inch , feet;
	
};

main()
{
	Distance *p1,d;
	p1=&d;
	
	cout<<"Enter the inch : ";
	cin>>(*p1).inch;
	cout<<"Enter the feet : ";
	cin>>(*p1).feet;
	
	cout<<"Feet : "<<(*p1).feet<<" "<<endl<<"Inch : "<<(*p1).inch<<" ";
	
	
}