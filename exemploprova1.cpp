#include <iostream>
#include <iomanip>
#include <locale>
using namespace std;

int main(){
	
	setlocale(LC_ALL,"portuguese");

    int N;
    float valor;

    cout << "Digite o número de maçãs compradas: ";
    
    do{
        cin >> N;
        if(N < 0){
            cout << "Erro de entrada, digite novamente: ";
        }
    }while(N < 0);

    if(N < 12){
        valor = N * 0.3;
    }else{
        valor = N * 0.25;
    }

	cout << fixed << setprecision(2);
    cout << "R$ " << valor << endl;

    return 0;

}