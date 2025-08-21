#include <iostream>
#include <locale>

using namespace std;

int main()

{
	setlocale (LC_ALL, "Portuguese");	
	int idade,tempo;
	cout<<"Digite sua idade e seu tempo de serviço: "<<endl;
	cin>>idade>>tempo;
	
	if(idade>=65 || tempo>=30)
	{
		cout<<"Qualificado"<<endl;
	}
	else if(idade>=60 && tempo>=25)
	{
		cout<<"Qualificado"<<endl;
	}
	else
	{
		cout<<"Não qualificado"<<endl;
	}
	
	
	return 0;
}