#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale (LC_ALL, "Portuguese");
	int N,i;
	int mais=0,menos=0;
	
	do
	{
		cout<<"Digite o número de vídeos: ";
		cin>>N;
	}while(N<=0 || N>1000);
	
	int views[N];
	
	for(i=0;i<N;i++)
	{
		cin>>views[i];
		
		if(views[i]<10000000)
		{
			menos++;
		}
		else
		{
			mais++;
		}
	}
	
	cout<<mais<<" video(s) com mais de 10M views"<<endl;
	cout<<menos<<" video(s) com menos de 10M views"<<endl;
	return 0;
}