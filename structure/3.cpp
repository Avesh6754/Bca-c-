#include<iostream>

using namespace std;

struct Person
{
	string name;
	int age , salary;
	
};
Person data(Person p1)
{
	
	cout<<"Enter the Person name : ";
	getline(cin,p1.name);
	cout<<"Enter the person age : ";
	cin>>p1.age;
	cout<<"Enter the person salary : ";
	cin>>p1.salary;
	return p1;
}
void Display(Person p1)
{
	cout<<"Person name : "<<p1.name<<" "<<endl;
	cout<<"Person Age : "<<p1.age<<" "<<endl;
	cout<<"Person Salary : "<<p1.salary<<" "<<endl;
	
}
main()
{
	Person p1,temp;
	
	temp=data(p1);
	p1=temp;
	Display(p1);
	
	
}