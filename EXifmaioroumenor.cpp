#include <iostream> //função in e out //bibliotecas possuem as funções que serão utilizadas
#include <locale> //função linguagem
using namespace std; //padrão
int main() //função principal
{
	setlocale (LC_ALL, "Portuguese"); //uso da lingua portuguesa(acentos)
    //declaração de variaveis
    int idade;
    //entrada de dados
    cout<<"digite a idade: ";
    cin>>idade;
    //teste
    if(idade>=18)
    	cout<<"Maior de idade!!"<<endl;
    else
    	cout<<"Menor de idade!!"<<endl;
    return 0;
}