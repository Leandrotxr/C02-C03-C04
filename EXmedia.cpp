#include <iostream> //função in e out //bibliotecas possuem as funções que serão utilizadas
#include <locale> //função linguagem
#include <iomanip> //função setprecision()
using namespace std; //padrão
int main() //função principal
{
	setlocale (LC_ALL, "Portuguese"); //uso da lingua portuguesa(acentos)
    //declaração de variaveis
    double PV1,PV2,EP,MF;
    //entrada de dados
    cout<<"digite o valor de PV1, PV2 e EP:";
    cin>>PV1>>PV2>>EP;
    //calculos
    MF=((PV1+PV2)/2)*0.9 + EP*0.1;
    //saida de dados
    cout<<fixed<<setprecision(1);
    cout<<MF<<endl;
    return 0;
}
