#include <iostream>
#include <locale>
#include <iomanip>
using namespace std;
int main()
{
	setlocale (LC_ALL, "portuguese");
	
	struct ficha
	{
		int mat;
		double n1,n2,md;
	};
	
	ficha dados;
	
	cout<<"Matricula: ";
	cin>>dados.mat;
	cout<<"Nota 1: ";
	cin>>dados.n1;
	cout<<"Nota 2: ";
	cin>>dados.n2;
	
	dados.md=(dados.n1+dados.n2)/2;
	
	cout<<endl;
	cout<<"Matricula do aluno: "<<dados.mat<<endl;
	cout<<fixed<<setprecision(2);
	cout<<"Nota da primeira prova: "<<dados.n1<<endl;
	cout<<"Nota da segunda prova: "<<dados.n2<<endl;
	cout<<"média: "<<dados.md<<endl;
	return 0;
}