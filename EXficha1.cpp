#include <iostream> //função in e out //bibliotecas possuem as funções que serão utilizadas
#include <locale> //função linguagem
using namespace std; //padrão
int main() //função principal
{
	setlocale (LC_ALL, "Portuguese"); //uso da lingua portuguesa(acentos)
    //declaração de variaveis
    char nome[61];
    char cpf[12];
    int ano;
    //entrada
    cout<<"digite o nome: ";
    cin.getline(nome,61);//armazena o nome completo
    cout<<"digite o cpf: ";
    cin.getline(cpf,12);//armazena o cpf
    cout<<"digite o nascimento: ";
    cin>>ano;
    //saida de dados
    cout<<"Nome: "<<nome<<endl;
    cout<<"CPF: "<<cpf<<endl;
    cout<<"Nascimento: "<<ano<<endl;
    return 0;
}