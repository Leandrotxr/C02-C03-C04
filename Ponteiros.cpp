#include <iostream>

using namespace std;

void somar(float var, float valor)
{
	var+=valor; //somar o valor na variavel
}

void somar_pont(float *var, float valor)
{
	*var+=valor; //somar o valor na variavel
}

int main ()
{
	string veiculo = "carro";
	
	string *pv; //é necessário que o ponteiro seja do mesmo tipo da variável e precisa do * para declarar
	
	pv = &veiculo; //ponteiro pv recebe o endereço de veiculo
	
	cout << pv << "\n" << &veiculo << endl;
	
	*pv = "moto"; //no endereço apontado por pv adicione o valor "moto"
	
	cout << veiculo << "\n" << *pv;
	
	//-----------------------------------------------------------------------------------------------------------
	
	int *p;
	int vetor[10];
	
	p = &vetor[0];
	
	cout << "\n\n" << p << "\n"; //vai mostrar o endereço do vetor na posição 0
	
	* (p+=1);
	cout << p << "\n"; //vai mostrar o endereço do vetor na posição 1
	
	* (p+=1);
	cout << p << "\n"; //vai mostrar o endereço do vetor na posição 2
	
	*p = 10; //no endereço apontado por p (posição 2) adicione o valor 10
	//o comando *p = 10 é a mesma coisa que o comando vetor[2] = 10;
	
	cout << vetor[2] << endl; //será apresentado o valor da posição 2 (10)
	cout << endl;
	
	//-----------------------------------------------------------------------------------------------------------
	
	float num = 0;
	
	cout << num << endl; //vai mostrar o valor 0
	
	somar(num,15);
	
	cout << num << endl; //ainda vai mostrar o valor 0
	
	somar_pont(&num,15); //agora estamos passando o endereço de num
	
	cout << num << endl; //vai mostrar o valor 15
	
	return 0;
}