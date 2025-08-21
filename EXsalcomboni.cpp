#include <iostream> //função in e out //bibliotecas possuem as funções que serão utilizadas
#include <locale> //função linguagem
#include <iomanip>//função set precision
using namespace std; //padrão
int main() //função principal
{
	setlocale (LC_ALL, "Portuguese"); //uso da lingua portuguesa(acentos)
    //declaração de variaveis
    int matricula;
    char nome[61];
    double sal,boni,St;
    //entrada
    cout<<"Digite a matricula: ";
    cin>>matricula;
    cout<<"Digite o nome: ";
    cin.ignore();//ignora o valor colocado anteriormente em "matricula"
    cin.getline(nome,61);//armazena o nome completo
    cout<<"Digite o salário: ";
	cin>>sal;//armazena o cpf
    cout<<"digite a bonificação(%): ";
    cin>>boni;
    //calculos
    St=sal+sal*(boni/100);
    //saida de dados
    cout<<"Matricula: "<<matricula<<endl;
    cout<<"Nome: "<<nome<<endl;
    cout<<fixed<<setprecision(2);
    cout<<"Salário final: R$ "<<St<<endl;
    return 0;
}