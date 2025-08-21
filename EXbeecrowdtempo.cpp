#include <iostream>
using namespace std;
int main() 
{
    //declaração de variaveis
    int N,horas,minutos,segundos,resth,restm;
    //entrada de dados
    cin>>N;
    //calculos
    horas=N/3600;//achar o valor inteiro de horas
    resth=N%3600;//dar o resto da divisao de horas(minutos que sobraram)
    minutos=resth/60;//achar o valor inteiro de minutos
    restm=resth%60;//dar o resto da divisao de minutos(segundos que sobraram)
    //é possivel usar o "restm" como segundos
    //saida de dados
    cout<<horas<<":"<<minutos<<":"<<restm<<endl;
   return 0;
}