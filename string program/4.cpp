#include<iostream>
using namespace std;


void display(string s)
{
	cout<<"String : "<<s<<" "<<endl;
}

void display(char s[])
{
	cout<<"Character : "<<s<<" "<<endl;
	
}
main()
{
	string str1;
	char str[100];
	
	cout<<"Enter the string : ";
	getline(cin,str1);
	cout<<"Enter the character string : ";
	cin.get(str,100);
	display(str1);
	display(str);

}
