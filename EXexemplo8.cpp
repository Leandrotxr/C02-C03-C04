#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	int mat,apro=0,repro=0;
	double n1,n2,media;
	do
	{
		cout<<"Matrícula: ";
		cin>>mat;	
	}while(mat<=0);
	
	while(mat!=0)
		{
			do
			{
				cout<<"Digite a primeira nota: ";
				cin>>n1;
			}while(n1<0 ||n1>100);
		
			do
			{
				cout<<"digite a segunda nota: ";
				cin>>n2;
			}while(n2<0 || n2>100);
	
			media=(n1+n2)/2;
	
			if(media>=50)
			{
				apro++;
			}
			else
			{
				repro++;
			}
			do
			{
				cout<<"Matrícula: ";
				cin>>mat;
			}while(mat<0);
		}while(mat!=0);
	
		
	cout<<"Alunos aprovados: "<<apro<<endl;
	cout<<"Alunos reprovados: "<<repro<<endl;
	
	return 0;
}