#include <iostream>
#include <iomanip>
using namespace std;

int main(){

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

    cout << "R$ " << valor << setprecision(2) << endl;

    return 0;

}