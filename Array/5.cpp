#include<iostream>

using namespace std;
//)Example 2: Taking Input for Two Dimensional Array
main()
{
	int number[2][3];
	
	cout<<"Take the user input : ";
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>number[i][j];
		}
	}
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout << "numbers[" << i << "][" << j << "]: " << number[i][j] <<endl; 
		}
	}
}
