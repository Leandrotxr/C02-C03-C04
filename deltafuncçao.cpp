#include <iostream>
#include <locale>
using namespace std;
float calcdelta(float a,float b, float c);
int main()
{
	setlocale (LC_ALL, "portuguese");
	
	float A,B,C,res;
	
	cout<<"Digite o valor de A: ";
	do
	{
		cin>>A;
		if(A==0)
		{
			cout<<"Erro de entrada, digite novamente: ";
		}
	}while(A==0);
	cout<<"Digite o valor de B: ";
	cin>>B;
	cout<<"Digite o valor de C: ";
	cin>>C;
	
	res=calcdelta(A,B,C);
	
	cout<<"Delta = "<<res<<endl;

	return 0;
}
float calcdelta(float a,float b, float c)
{
	float delta;
	delta=b*b-4.0*a*c;
	return delta;
}