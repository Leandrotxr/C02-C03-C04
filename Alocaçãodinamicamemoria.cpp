#include <iostream>
#include <stdio.h> //para função gets
#include <stdlib.h> //para função de memory alocation (malloc)

using namespace std;

int main()
{
	char vnome[50];
	
	/*cin >> vnome; //não pega nomes compostos
	
	cout << vnome << endl;*/
	
	gets(vnome); //pega o nome completo agora
	
	cout << vnome << endl;
	
	//para usar a malloc devemos transformar em ponteiro e não indicar o tamanho
	
	char *vnome2;
	
	vnome2 = (char *) malloc(sizeof(char)); //malloc retorna void, o (char *) transforma o void em char
	//o sizeof(char) é para mostrar o tamanho do tipo de variavel, pode ser char, int, float, etc.
	
	gets(vnome2);
	
	cout << vnome2 << endl;
	
	
	
	
	return 0;
}