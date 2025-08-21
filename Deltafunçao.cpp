#include <iostream>
#include <locale>
#include <cmath>
#include <iomanip>

using namespace std;

double delta(double a,double b,double c)
{
	double D;
	
	D = b*b - 4.0*a*c;
	
	return D;
}

void raizes(double a, double b, double D)
{
	double x1,x2;
	x1 = (-1.0*b + sqrt(D))/(2.0*a);
	x2 = (-1.0*b - sqrt(D))/(2.0*a);
	
	cout<<fixed<<setprecision(2);
	
	if(x1 == x2)
	{
		cout<<"\nx = "<<x1<<endl;
	}
	else if(x1>x2)
	{
		cout<<"\nx1 = "<<x2<<endl;
		cout<<"x2 = "<<x1<<endl;
	}
	else
	{
		cout<<"\nx1 = "<<x1<<endl;
		cout<<"x2 = "<<x2<<endl;
	}
}

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	double a, b, c;

	cout<<"Digite o valor de a: ";
	do
	{
		cin>>a;
		if(a == 0)
		{
			cout<<"Erro de entrada, digite novamente: ";
		}
	}while(a == 0);	
	
	cout<<"Digite o valor de b: ";
	cin>>b;
	cout<<"digite o valor de c: ";
	cin>>c;
	
	double D;
	
	D=delta(a,b,c);
	
	if(D<0)
	{
		cout<<"\nNão há raízes reais"<<endl;
	}
	else
	{
		raizes(a,b,D);
	}
	
	return 0;
}