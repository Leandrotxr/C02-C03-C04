#include <iostream>
using namespace std;

int main()
{
	int x,y,soma=0;
	cin>>x>>y;
	
	if(x>y)
	{
		int temp = x;
		x = y;
		y = temp;
	}
	
	for (int i=x;i<=y;i++)
	{
		if(x%2!=0)
		{
			soma+=i;
		}
	}
	cout<<soma<<endl;
	return 0;
}