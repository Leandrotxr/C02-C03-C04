//bibliotecas possuem as funções que serão utilizadas
#include <iostream> //função in/out 
#include <iomanip> //função setprecision
#include <cmath> //funções matemáticas
#include <locale> //função linguagem 
#include <cstdlib> //função system

#define pi 3.1415 //declaração de constantes
#define canal cout<<"canal abc"<<endl;

using namespace std; //padrão

int main() //função principal
{
	setlocale (LC_ALL, "Portuguese"); //uso da lingua portuguesa(acentos)
	
	//OPERAÇÕES MATEMÁTICAS BÁSICAS
	+  adição
	-  subtração
	*  multiplicação
	/  divisão
	%  resto da divisão
	() prioridade
    
	//VARIAVEIS
    /*Entidade destinada a armazenar uma informação, podendo ser de diferentes 
	tipos, ocupando um ou mais bytes de memória, dependendo de seu tipo.*/
	/*a variavel pode ser local ou global:
	GLOBAL: declarada fora da função
	LOCAL: declarada dentro da função, assim só pode ser usada em uma função*/
	int vidas; //valores inteiros, ex: 10;6
	char nome[51];//caracteres, ex: leandro. sempre reservar um espaço a mais pois há um finalizador
	float x,z;//numeros decimais com baixa precisão, ex: 2.5
	double y; //numeros decimais com alta precisao, ex: 2.499997
	bool vivo;//true or false, false=0 sempre, true=outro numero qualquer
	cout<<"digite o valor de x:"<<endl;
	cin>>x;//comando de entrada para a variavel 
	
	//A VARIAVEL STRING
	/*É um vetor do tipo char com n+1 posições*/
	char nm[7]; //vetor nm de 7 posições
	//a entrada pode ser feita de varias maneiras
	
	cin>>nm;/*desse modo o espaço funciona como enter, ou seja, caso digite 
			"ana clara", só vai sair "ana"*/
	cin.getline(nm,7); /*assim, o espaço não funciona como enter, então é possível 
			  		  escrever algo com espaço, ex:ana clara*/
						/*sempre que antes de usar getline houver uma entrada com valor 
						numérico, é necessário usar cin.ignore()*/
	cin.ignore();
	cin.getline(nm,7);		
	
	//INCREMENTO E DECREMENTO DE VARIAVEL
	int n1=10;
	n1=n1+1   /*forma normal*/   n1+=1   /*forma reduzida*/
	n1=n1-1   /*forma normal*/   n1-=1   /*forma reduzida*/
	n1=n1*10  /*forma normal*/   n1*=10  /*forma reduzida*/
	n1=n1/10  /*forma normal*/   n1/=10  /*forma reduzida*/
	n1++ //incrementa 1 unidade
	n1-- //decrementa 1 unidadde
	
	//IF E IF ELSE
	/*se uma condição for verdadeira, um bloco de comandos é executados,
	se a condição for falsa, outro bloco de comando é executado*/
	//é permitido usar varios if um dentro do outro
	
	//Operadores
	>  maior 
	>= maior ou igual
	<  menor
	<= menor ou igual
	== igual
	!= diferente
	
	//exemplo
	int x;
	cin>>x;
	if(x==0)
	{
		cout<<"zero";
	}
	if(x<0)
	{
		cout<<"negativo";
	}
	if(x>0)
	{
		cout<<"positivo";
	}
	//ou
	if(x==0)
	{
		cout<<"zero";
	}
	else if(x<0)
	{
		cout<<"negativo";
	}
	else
	{
		cout<<"positivo";	
	} 
	
	//O COMANDO GOTO
	int x;
	char opc;
	
	inicio:
	
	system("cls");//para limpar a tela
	
	cout<<"digite o valor de x:"<<endl;
	cin>>x;
	cout<<x<<endl;
	cout<<"deseja digitar outro valor(s/n)?"<<endl;
	cin>>opc;
	if(opc=='s')
	{
		goto inicio; //função para fazer um looping
	}
	else 
		return 0;
	
	//COMANDO SWITCH
	/*o comando switch é parecido com o if, porém só admite teste de igualdade*/
	switch(expressão)
	{
		case constante1:
			comandos;
			break;
		case constante2:
			comandos;
			break;//usado para sair da função
		default: 
			comandos;
	}
	   //primeiro caso	
	int val;
	
	cout<<"digite uma cor: "<<endl;
	cout<<"[1]verde, [2]azul, [3]vermelho"<<endl;
	cin>>val;
	switch(val)
	{
		case 1:
			cout<<"verde"<<endl;
			break;
		case 2:
			cout<<"azul"<<endl;
			break;
		case 3:
			cout<<"vermelho"<<endl;
			break;
		default:
			cout<<"valor invalido"<<endl;
	}
	// segundo caso
	int val;
	
	cout<<"digite uma cor: "<<endl;
	cout<<"[1,2,3]verde, [4,5,6]azul"<<endl;
	cin>>val;
	switch(val)
	{
		case 1:
		case 2:
		case 3:
			cout<<"verde"<<endl;
			break;
		case 4:
		case 5:
		case 6:
			cout<<"azul"<<endl;
			break;
		default:
			cout<<"valor invalido"<<endl;
	}

	//terceiro caso
	int val;
	
	cout<<"selecione um transporte: "<<endl;
	cout<<"[1}carro,[2]moto,[3]aviao,[4]helicoptero"<<endl;
	cin>>val;
	switch(val)
	{
		case 1:
		case 2:
			cout<<"transporte terrestre"<<endl;
			switch(val)
			{
				case 1:
					cout<<"carro"<<endl;
					break;
				case 2:
					cout<<"moto"<<endl;
					break;
			}
 		case 3:
		case 4:
			cout<<"transporte aereo"<<endl;
			switch(val)
			{
				case 3:
					cout<<"aviao"<<endl;
					break;
				case 2:
					cout<<"helicoptero"<<endl;
					break;
			}
			default:
				cout<<"valor invalido"<<endl;
	}
	
	//COMANDO DE REPETIÇÃO FOR
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}