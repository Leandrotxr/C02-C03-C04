#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	int N;
	double soma=0,media=0;
	
	cout<<"Digite o número de termos: ";
	cin>>N;
	
	for(int i=1;i<=N;i++)
	{
		double x;
		cin>>x;
		
		soma=soma+x;
		media=soma/i;
	}
	cout<<media<<endl;
	
	
	return 0;
}