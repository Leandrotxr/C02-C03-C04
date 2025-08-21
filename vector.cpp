#include <iostream>
#include <vector>

using namespace std;

int main()
{
	
	vector <int> num; //assim declaramos o vector: "vector <tipo> nome"
	vector <int> num2;
	
	int tam,i;
	
	num.push_back(1); //o .push_back() adicina um valor no final do vector
	num.push_back(2);
	num.push_back(3);
	num.push_back(4);
	
	num2.push_back(5); 
	num2.push_back(6);
	num2.push_back(7);
	num2.push_back(8);
	
	tam = num.size(); //o .size() retorna o tamanho do vector
	
	cout << "Tamanho do vector: " << tam << endl;
	
	for( i = 0; i < num.size(); i++) //poderia ter usado a variavel tam no lugar de num.size()
	{
		cout << num[i] << " ";
	}
	
	cout << endl;
	
	for( i = 0; i < num2.size(); i++)
	{
		cout << num2[i] << " ";
	}
	
	num.swap(num2); //faz a troca entre valores de 2 vector
	
	cout << endl;
	
	for( i = 0; i < num.size(); i++) //poderia ter usado a variavel tam no lugar de num.size()
	{
		cout << num[i] << " ";
	}
	
	cout << endl;
	
	for( i = 0; i < num2.size(); i++)
	{
		cout << num2[i] << " ";
	}
	
	num.swap(num2); //desfazendo o swap
	
	cout << "\nPrimeiro elemento de num.: " << num.front(); //o .front() pega o primeiro elemento do vector
	cout << "\nUltimo elemento de num...: " << num.back(); //o .back() pega o ultimo elemento do vector
	cout << "\nElemento central de num..: " << num.at(num.size()/2); //o .at() pega o elemento que eu desejar
	
	num.insert(num.end()-1,888); //o .insert(posição,valor) permite adicionar um valor em qualquer posição que eu quiser
	num.erase(num.end()-2); //o .erase(posição) apaga o valor da posição que eu quiser
	
	
	//enquanto num não estiver vazio
	while(!num.empty()) //.empty() siginifica vazio ! no inicio significa não
	{
		num.pop_back(); //o .pop_back() remove o ultimo elemento do vector
		num.pop_front(); // o .pop_front remove o primeiro elemento do vector
	}
	
	return 0;
}