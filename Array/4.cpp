#include<iostream>

using namespace std;
//1: Two Dimensional Array
main()
{
	int test[3][2]={{2,5},{6,8},{25,30}};
	
	cout<<"Print yhe array element : ";
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<"test["<<i<<"]["<<j<<"]="<<test[i][j]<<endl;
		}
	}
}
