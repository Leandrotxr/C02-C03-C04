#include <iostream>
#include <locale>
using namespace std;
int main()
{
	int N,i,j;
	
	cout<<"Digite a ordem da matriz: ";
	do
	{
		cin>>N;
	}while(N<1 || N>50);
	
	int mat[N][N],cont=0;
	
	cout<<"Digite os elementos da matriz: "<<endl;
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			cin>>mat[i][j];
		}
	}
	
	for(i=1;i<N;i++)
	{
		for(j=0;j<i;j++)
		{
			if(mat[i][j]==0)
			{
				cont++;
			}
		}
	}
	
	cout<<endl;
	cout<<cont;
	
	
	
	
	
	return 0;
}