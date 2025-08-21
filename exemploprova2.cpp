#include <iostream>
#include <iomanip>
#include <locale>
using namespace std;

int main(){
	
	setlocale(LC_ALL,"portuguese");

    int N;

    cout << "Digite o número de pessoas cadastradas: ";
    
    do{
        cin >> N;
        if(N < 0){
            cout << "Erro de entrada, digite novamente: ";
        }
    }while(N < 0);
    
    float altura[N];

    for(int i = 0; i < N; i++){
    	do{
			cin >> altura[i];
		}while(altura[i] < 0);
	}
	
	float maior = 0;
	float menor = 1000;
	
	for(int i = 0; i < N; i++){
		if(altura[i] < menor){
			menor = altura[i];
		}
		if(altura[i] > maior){
			maior = altura[i];
		}
	}

	cout << fixed << setprecision(2);
	cout << "Menor altura: " << menor << endl;
	cout << "Maior altura: " << maior << endl;
    return 0;
}