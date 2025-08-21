#include <iostream> //função in e out //bibliotecas possuem as funções que serão utilizadas
#include <locale> //função linguagem
using namespace std; //padrão
int main() //função principal
{
	setlocale (LC_ALL, "Portuguese"); //uso da lingua portuguesa(acentos)
    //declaração de variaveis
    char nome[51];
    char estado[3];
    int idade;
    //entrada
    cout<<"Digite o nome: ";
    cin.getline(nome,51);//armazena o nome completo
    cout<<"Digite o estado: ";
    cin.getline(estado,3);//armazena o cpf
    cout<<"digite a idade: ";
    cin>>idade;
    //saida de dados
    cout<<"Nome: "<<nome<<endl;
    cout<<"Estado: "<<estado<<endl;
    cout<<"Idade: "<<idade<<endl;
    return 0;
}