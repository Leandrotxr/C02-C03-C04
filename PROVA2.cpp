//ESTRUTURA BÁSICA 
#include <iostream>     //função in e out
#include <setlocale>    //função linguagem 
#include <cmath>        //função matemática
#include <iomanip>      //função setprecision

using namespace std;    //padrão

#define pi=3.14         //definir algo

int main()              //função principal
{
	setlocale (LC_ALL, "portuguese"); //definir o português
	
	//OPERAÇÕES MATEMÁTICAS BÁSICAS
	+   adição
	-   subtração
	*   multiplicação
	/   divisão
	%   divisão sem resto
	()  prioridade
	
	//VARIÁVEIS
	/*Entidade destinada a armazenar uma informação, podendo ser de diferentes 
	tipos, ocupando um ou mais bytes de memória, dependendo de seu tipo.*/
	/*a variavel pode ser local ou global:
	GLOBAL: declarada fora da função
	LOCAL: declarada dentro da função, assim só pode ser usada em uma função*/
	
	int vidas;       //números inteiros
	double x;        //números decimais com maior precisão
	float y;         //números decimais com menor precisão
	char nome[51];   //caracteres (sempre colocar uma casa a mais)
	bool vivo;       //true or false, false=0 sempre, true = qualquer outro número
	
	//A VARIAVEL STRING 
	char name[11]; 
	//a entrada pode ser feita de várias maneiras:
	cin>>name; /*desse modo, o espaço funciosa como enter, ou seja, caso digite
               "Ana Clara", só vai sair "Ana"*/
	cin.getline(name,11); /*assim, o espaço não funciona como enter, então é possível 
			  		  escrever algo com espaço, ex:ana clara*/
						/*sempre que antes de usar getline houver uma entrada com valor 
						numérico, é necessário usar cin.ignore()*/
	cin.ignore();
	cin.getline(nm,7);
	//a variavel string deve ser representada sempre por 'x'
	
	//INCREMENTO E DECREMENTO DE VARIÁVEIS
	int n1=10;
	n1=n1+1   /*forma normal*/  n1+=1   /*forma reduzida*/
	n1=n1-1   /*forma normal*/  n1-=1   /*forma reduzida*/
	n1=n1*10  /*forma normal*/  n1*=10  /*forma reduzida*/
	n1=n1/10  /*forma normal*/  n1/=10  /*forma reduzida*/
	n1++ /*sempre incrementa uma unidade*/
	n1-- /*sempre decrementa uma unidade*/
			   
	//OPERADORES DE COMPARAÇÃO
	>   maior
	>=  maior ou igual
	<   menor
	<=  menor ou igual
	==  igual
	!=	diferente	
	
	//PORTA LÓGICA
	&& (E/AND) conjunção
	|| (OU/OR) disjunção
	!  (NÂO)   negação
	
	---------------------------------------------------------------------------------------------
	//ESTRUTURAS DE DECISÃO
	---------------------------------------------------------------------------------------------
	
	//IF E IF ELSE
	/*se uma condição for verdadeira, um bloco de comandos é executados,
	se a condição for falsa, outro bloco de comando é executado*/
	if(expressão)
	{
		comandos;
	}
	//exemplo
	int ex1;
	cin>>ex1;
	
	if(ex1==0)
	{
		cout<<"zero"<<endl;
	}
	if(ex1<0)
	{
		cout<<"Negativo"<<endl;
	}
	if(ex1>0)
	{
		cout<<"Positivo"<<endl;
	}
	//ou
	if(ex1==0)
	{
		cout<<"zero"<<endl;
	}
	else if(ex1<0)
	{
		cout<<"Negativo"<<endl;
	}
	else 
	{
		cout<<"Positivo"<<endl;
	}
	
	//SWITCH
	/*o comando switch é parecido com o if, porém só admite teste de igualdade*/
	switch(expressão)
	{
		case constante1:
			comandos;
			break;
		case constante2:
			comandos;
			break;//usado para sair da função
		default: //não precisa de break
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
	---------------------------------------------------------------------------------------------
	//ESTRUTURAS DE REPETIÇÃO
	---------------------------------------------------------------------------------------------
	//FOR
	/*comando for é utilizado para fazer ciclos, muito usado quando sabemos o 
	número de vezes que um trecho do algoritmo deve ser repetido.*/ 
	for(inicialização;condição;incremento)
	{
		comandos;
	}
	/*variavel inicia e é testada, se a condição for verdadeira: comandos executados 
	e a variavel é incrementada, após isso repete-se o loop até que a condição seja 
	falsa e os comandos não sejam mais executados.*/
	
	//exemplos
	for(int i=1;i<=10;i++)
	{
		cout<<i<<endl;
	}
	
	//WHILE
	/*comando while é usado em ciclos, mas quando não se sabe quantas vezes o 
	algorítimo será repetido.*/
	/*no loop while pode acontecer de não executar nenhuma vez, se a variavel
	ja estiver satizfeita*/
	while(condição)
	{
		comandos;
	}
	/*enquanto a condição for verdadeira, os comandos serão executados, a partir do
	momento que a condição for falsa, os comandos param de ser executados.*/
 
    //exemplos
    int n=0;
    while(n<10)
	{
		cout<<n<<endl;
		n++;
	}
	
	//DO WHILE
	/*comando do while é usado em ciclos, mas diferente do while, o do while sempre 
	executa ao menos uma vez o loop.*/
	do
	{
		comandos;
	}while(condição);
	
	//exemplos
	char op;
	do
	{
		cout<<"Digite 's' para novo cadastro: "<<endl;
		cin>>op;
	}while(op=='s')
	
	---------------------------------------------------------------------------------------------
	---------------------------------------------------------------------------------------------
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}