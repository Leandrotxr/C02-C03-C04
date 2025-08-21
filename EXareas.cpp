#include <iostream>
#include <iomanip>
using namespace std;
int main() 
{
    //declaração de variaveis
    double A,B,C,Atri,Ac,Atra,Aq,Ar;
    //entrada de dados
    cin>>A;
	cin>>B;
	cin>>C;
    //calculos
	Atri=(A*C)/2;
	Ac=C*C*3,14159;
	Atra=((A+B)/2)*C;
	Aq=B*B;
	Ar=A*B;
    //saida de dados
    cout<<fixed<<setprecision(3);
    cout<<"TRIANGULO: "<<Atri<<endl;
    cout<<"CIRCULO: "<<Ac<<endl;
    cout<<"TRAPEZIO: "<<Atra<<endl;
    cout<<"QUADRADO: "<<Aq<<endl;
    cout<<"RETANGULO: "<<Ar<<endl;
   return 0;
}