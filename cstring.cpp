//A BIBLIOTECA <CSTRING>
#include <iostream>
#include <locale>
#include <cstring>

using namespace std;
int main()
{
	setlocale (LC_ALL, "portuguese");
	
	char txt1[50],txt2[50],txt3[50];
	
	cin.getline(txt1,50);
	cout<<txt1<<endl;
	
	strcpy(txt2,txt1); //"strcpy" copia o que tem em 1 para 2 (recebe,origem)
	cout<<txt2<<endl;
	
	strncpy(txt3,txt1,3); //"strncpy" copia o que tem em 1 para 2 até determinada parte(recebe,origem,tamanho)
	cout<<txt3<<endl;
	
	
	
	
	
	
	
	
	
	return 0;
}