#include <iostream> //função in e out //bibliotecas possuem as funções que serão utilizadas
#include <locale> //função linguagem
using namespace std; //padrão
int main() //função principal
{
	setlocale (LC_ALL, "Portuguese"); //uso da lingua portuguesa(acentos)
    //declaração de variaveis
    double Vo,So,A,T,V,S;
    //entrada de dados
    cin>>Vo>>So>>A>>T;
    //calculos
    V=Vo+A*T;
    S=So+Vo*T+(A*T*T)/2;
    //saida de dados
    cout<<"V = "<<V<<" e "<<"S = "<<S<<endl;
    return 0;
}
