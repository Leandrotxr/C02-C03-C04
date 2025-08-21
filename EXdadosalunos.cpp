#include <iostream> //função in e out //bibliotecas possuem as funções que serão utilizadas
#include <locale> //função linguagem
#include <iomanip>//função set precision
using namespace std; //padrão
int main() //função principal
{
	setlocale (LC_ALL, "Portuguese"); //uso da lingua portuguesa(acentos)
    //declaração de variaveis
    int matricula,N1,N2;
    char nome[41];
    char sexo[2];
    double Mf;
    //entrada
    cout<<"Matricula: ";
    cin>>matricula;
    cout<<"Nome: ";
    cin.ignore();//ignora o valor colocado anteriormente em "matricula"
    cin.getline(nome,41);//armazena o nome completo
    cout<<"Sexo('M' OU 'F'): ";
    cin.ignore();
    cin.getline(sexo,2);
    cout<<"Notas: ";
    cin>>N1>>N2;
    //calculos
    Mf=(N1+N2)/2.0;
    //saida de dados
    cout<<"Matricula: "<<matricula<<endl;
    cout<<fixed<<setprecision(1);
    cout<<"Média: "<<Mf<<endl;
    return 0;
}