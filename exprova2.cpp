#include <iostream>
#include <locale>
#include <iomanip>
using namespace std;
double calcula(double x1,double y1)
{
	if(y1==0)
	{
		return 0;
	}
	else
	{
		return x1/y1;
	}
}
int main()
{
	double x,y,g,h,f;
	cout<<"Digite os valores de x e y: ";
	cin>>x>>y;
	
	if(x>=y)
	{
		g=x-y;
	}
	else
	{
		g=x+y;
	}
	
	if(g>0)
	{
		h=x*x+y;
	}
	else if(g<0)
	{
		h=y*y+x;
	}
	else
	{
		h=0;
	}
	
	f=calcula(g,h);
	
	if(f==0)
	{
		cout<<"Calculo impossível"<<endl;
	}
	else
	{
		cout<<fixed<<setprecision(2);
		cout<<f;
	}
	return 0;
}