#include <iostream>
#include <cmath>
#include <locale>
using namespace std;
int main()
{
	setlocale (LC_ALL, "Portuguese");
	double n1,n2,pot;
	int opc;
	
	cout<<"Digite os dois numeros que deseja realizar a operação: "<<endl;
	cin>>n1>>n2;
	cout<<"Digite a operação desejada: "<<endl;
	cout<<"[1],[2],[3],[4],[5]"<<endl;
	cin>>opc;
	
	switch(opc)
	{
		case 1:
			cout<<n1+n2<<endl;
			break;
		case 2:
			cout<<n1-n2<<endl;
			break;
		case 3:
			cout<<n1*n2<<endl;
			break;
		case 4:
			pot=pow(n1,n2);
			cout<<pot<<endl;
			break;
		case 5:
			if(n2==0)
				cout<<"Calculo impossível"<<endl;
			else
			{
				cout<<n1/n2<<endl;
			}
			
		
	} 
	
	
		
	
	
	
	
	return 0;
}