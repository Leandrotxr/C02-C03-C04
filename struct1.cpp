#include <iostream>
#include <locale>
using namespace std;
int main()
{
	struct ficha
	{
		int mat;
		float n1,n2;
	};
	
	ficha dados;
	
	cout<<"Matricula: ";
	cin>>dados.mat;
	cout<<"Nota 1: ";
	cin>>dados.n1;
	cout<<"Nota 2: ";
	cin>>dados.n2;
	
	cout<<endl;
	cout<<"Matricula do aluno: "<<dados.mat<<endl;
	cout<<"Nota da primeira prova: "<<dados.n1<<endl;
	cout<<"Nota da segunda prova: "<<dados.n2<<endl;
	return 0;
}