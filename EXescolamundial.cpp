#include <iostream>
#include <locale>
#include <iomanip>
using namespace std;
int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	int N,i;
	int maior=0,menor=0;
	
	cout<<"Digite o número de alunos: ";
	cin>>N;
	
	double nota[N],soma=0,media;
	
	for(i=0;i<N;i++)
	{
		cin>>nota[i];
		soma=soma+nota[i];
	}
	
	media=soma/N;
	
	for(i=0;i<N;i++)
	{
		if(nota[i]<media)
		{
			menor++;
		}
		else
		{
			maior++;
		}
	}
	
	cout<<fixed<<setprecision(2);
	cout<<"Media da turma: "<<media<<endl;
	cout<<"Alunos com nota acima da media: "<<maior<<endl;
	cout<<"Alunos com nota abaixo da media: "<<menor<<endl;

	
	return 0;
}