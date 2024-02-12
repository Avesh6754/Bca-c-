#include<iostream>

using namespace std;

main()
{
	int a,b;
	char op;
	cout<<"Enter the first value : ";
	cin>>a;
	cout<<"Enter the second value : ";
	cin>>b;
	cout<<"Enter your choice (+,-,*,/,%) ";
	cin>>op;
	
	switch(op)
	{
		case '+':cout<<"Sum of a + b = "<<a+b<<endl;
		break;
		case '-':cout<<"Sum of a - b = "<<a-b<<endl;
		break;
		case '*':cout<<"Sum of a * b = "<<a*b<<endl;
		break;
		case '/':cout<<"Sum of a / b = "<<a/b<<endl;
		break;
		case '%':cout<<"Sum of a % b = "<<a%b<<endl;
		break;
		default:cout<<"You enter invalid number : ";
	}
}
