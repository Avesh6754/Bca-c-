#include<iostream>
using namespace std;

int main()
{
//	Assignment Operators
	int a,b;
	a=2;
	b=7;
	
//	a=b;
//	cout<<"a=b : "<<a<<" "<<endl;
	a+=b;//a=a+b;
	cout<<"a+=b : "<<a<<" "<<endl;
	a-=b;
	cout<<"a-=b : "<<a<<" "<<endl;
	a*=b;
	cout<<"a*=b : "<<a<<" "<<endl;
	a/=b;
	cout<<"a/=b : "<<a<<" "<<endl;
	a%=b;
	cout<<"a%=b : "<<a<<" "<<endl;
	return 0;
}
