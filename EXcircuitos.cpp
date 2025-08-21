#include <iostream> //função in e out //bibliotecas possuem as funções que serão utilizadas
#include <locale> //função linguagem
using namespace std; //padrão
int main() //função principal
{
	setlocale (LC_ALL, "Portuguese"); //uso da lingua portuguesa(acentos)
    //declaração de variaveis
    double V,R1,R2,R3,It,Req;
    //entrada de dados
    cin>>V>>R1>>R2>>R3;
    //calculos
    It=V*(1.0/R1+1.0/R2+1.0/R3);
    Req=(R1*R2*R3)/(R1*R2+R1*R3+R2*R3);
    //saida de dados
    cout<<"Itotal = "<<It<<" e "<<"Requivalente = "<<Req<<endl;
    return 0;
}
