#include <iostream>
#include <cmath>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	double x,y,pot;
	char opc;
	
	cout<<"Digite 2 valores: ";
	cin>>x>>y;
	cout<<"Digite uma opção(a,s,m,d,p): ";
	cin>>opc;
	
	switch(opc)
	{
		case 'a':
			cout<<x+y<<endl;
			break;
		case 's':
			cout<<x-y<<endl;
			break;
		case 'm':
			cout<<x*y<<endl;
			break;
		case 'd':
			if(y==0)
			{
				cout<<"Calculo impossível"<<endl;
			}
			else
			{
				cout<<x/y<<endl;
			}
			break;
		case 'p':
			pot=pow(x,y);
			cout<<pot<<endl;
			break;
	}
	
	return 0;
}