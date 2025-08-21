#include <iostream>
using namespace std;
int main()
{
	int N,M;
	do
	{
		cin>>N>>M;
	}while(N>10 || M>10);
	
	int mat[N][M];
	
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<M;j++)
		{
			cin>>mat[i][j];
		}
	}
	
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<M;j++)
		{
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}