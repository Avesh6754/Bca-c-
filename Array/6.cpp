//Example 3: Three Dimensional Array
#include<iostream>

using namespace std;

main()
{
	int number[2][3][2]={
	{
		{1,2},
		{2,4},
		{7,8}
	},
	
	{
		{7,8},
		{9,10},
		{11,12}
	}
};
				
	
	cout<<"Take the user input : ";
	
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			for(int k=0;k<2;k++)
			{
				
			cout << "numbers[" << i << "][" << j << "][" << k << "]: " << number[i][j][k] <<endl; 
			}
		}
	}
}
