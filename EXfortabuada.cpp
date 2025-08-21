#include <iostream>
#include <locale>

using namespace std;

int main()

{
	setlocale (LC_ALL, "Portuguese");	
	int numero;
	
	cout<<"Digite um número de 1 a 10: ";
	cin>>numero;
	
	for (int i=0; i<=10; i++)
	{
	 cout << numero << " x " << i << " = " << numero*i << endl;
	}
	
	
	
	
	
	
	
	return 0;
}