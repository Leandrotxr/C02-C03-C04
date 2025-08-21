//ESTRUTURA BÁSICA
#include <iostream>     //função in e out
#include <iomanip>      //função setprecision
#include <setlocale>    //função linguagem
#include <cmath>        //função matemática
#include <string>       //funçaõ para criar vetores

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
	se a condição for falsa, outro bloco de comando é executado*/if(expressão)
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
	{cout<<"Negativo"<<endl;
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
	}---------------------------------------------------------------------------------------------
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
	//VETORES (ARRAY)
	---------------------------------------------------------------------------------------------
	
	//como declarar:
	int vetor1[100]; //é necessário informar o tipo, o nome e o tamanho do vetor
	/*neste caso, é um vetor do tipo int, chamado "vetor1" que possui 100 posições*/
	/*cada posição de um vetor pode armazenar uma informação ou um grupo de informações*/
	
	/*o vetor começa na posição 0 e vai até a penultima, já que a ultima é o /n
	exemplo: 1 8 2 7 5 9 7 -> valores
             0 1 2 3 4 5 6 -> posição                                         */
	
	/*o tamanho da posiçao pode ser declarado antes, por exemplo:*/
	cin>>n;
	double vetor2[n];
	
	/*as funçoes FOR, WHILE e DO WHILE podem ser usadas para preencher valores*/
	
	for(int i=0;i<n;i++)
	{
		cin>>vetor2[i];
	}
	
	---------------------------------------------------------------------------------------------
	//PESQUISA (BUSCA)
	---------------------------------------------------------------------------------------------
	//BUSCA SEQUENCIAL
	/*é o método mais objetivo para se buscar um elemento num vetor que não está pré-ordenado
	por algum critério (ex: ordem crescente)*/
	/*esta técnica envolve uma simples verificação de cada componente do vetor sequencialmente 
	até que o elemento seja encontrado (busca bem sucedida) ou não(busca mal sucedida)*/
	
	//exemplo usando for e if
	int busca_sequencial(int vetor[], int cont, int procurar)
	{
		for(int i=0;i<cont;i++)
		{
			if(vetor[i] == procurar)
			{
				return i; //busca bem sucedida
			}
		}
		int nao_encontrado = -1; //busca mal sucedida
		return nao_encontrado;
	}
	
	//exemplo usando while e if
	int busca_sequencial(int vetor[], int tamanho, int procurar)
	{
		bool achou = false; //var p/ auxiliar a busca (false=0)
		int i=0;
		
		while(achou == false && i<tamanho)
		{
			if(vetor[i] == procurar)
			{
				achou = vetor[i]; //busca bem sucedida
			}
			i++;
		}
		
		if(achou) //se achou for true, ou seja, diferente de 0
		{
			return (i-1); //-1 pq no final do while somou 1
		}
		else
		{
			return -1; //busca mal sucedida
		}
	}

	//BUSCA BINÁRIA
	/*quando os elementos de um vetor está previamente ordenado, há métodos de pesquisas
	muito mais eficientes, como a busca binária*/
	/*funcionamento:
	-elemento que divide o vetor ao meio é encontrado e comparado com o valor procurado
		-se ele for igual a busca é bem sucedida
	-se o elemento do meio for maior que o valor buscado, repete-se a primeira etapa na 
	primeira metade do vetor
	-se o elemento do meio for menor que o valor buscado, repete-se a primeira etapa na 
	segunda metade do vetor*/
	
	/*esses passos são seguidos até o elemento ser encontrado (busca bem sucedida) ou até
	não restar mais trechos do vetor a ser pesquisado (busca mal sucedida)*/
	
	//este método tem como DESVANTAGEM: necessidade de pré ordenação
	//este método tem como VANTAGEM: em média, muito mais rápido que a busca seuqencial
	
	//exemplo de busca binária
	int busca_binaria(int vetor[],int N, int procurar)
	{
		int inicio = 0;
		int fim = N-1;
		int meio;
		
		while(inicio<=fim)
		{
			meio = (inicio + fim)/2;
			if(vetor[meio] < procurar)
			{
				inicio = meio + 1;
			}
			else if(vetor[meio] > procurar)
			{
				fim = meio - 1;
			}
			else
			{
				return meio; //busca bem sucedida
			}
		}
		return -1; //busca mal sucedida
	}
	
	---------------------------------------------------------------------------------------------
	//ORDENAÇÃO
	---------------------------------------------------------------------------------------------
	//INSERTIONSORT
	/*é conhecido como método das cartas, já que se assemelha muito a quando ordenamos cartas de um
	baralho. Não é um método muito eficiente, mas é um pouco melhor que o bubblesort.
	funcionamento:
	-o vetor é dividido em 2, ordenado e não ordenado
	-pega-se o primeiro elemento do vetor não ordenado e compara com os elementos do vetor ordenado
	até que ele ache sua posição (sempre decrescendo).
	-repete-se até que todo o array esteja ordenado.*/
	
	void insertion_sort(double vetor[],int tamanho)
	{
		int aux; //auxiliar no swap
			
		for(int i = 0; i < tamanho-1; i++)
		{
			for(int j = i+1; j > 0; j--)
			{
				if(vetor[j] < vetor[j-1]) //analise de pior caso do if:  
				{
						aux = vetor[j];
						vetor[j] = vetor[j-1];
						vetor[j-1] = aux;
				}
			}
		}	
	}
	
	//BUBBLESORT
	/*é conhecido como método das bolhas, pois os maiores valores "flutuam" até o fim do array.
	Não é um método muito eficiente também, pode demorar muito tempo para arrays grandes.
	funcionamento:
	-os elementos do array são comparados 2 a 2
	-se o elemento 1 > elemento 2, eles trocam de posição
	-reprete-se até que todo o array esteja ordenado.*/
	
	void bubblesort(double vet[],int n)
	{
		double aux;
		
		for(int j=0;j<n-1;j++)
		{
			for(int i=0;i<n-1;i++)
			{
				if(vet[i]>vet[i+1])
				{
					aux = vet[i];
					vet[i] = vet[i+1];
					vet[i+1] = aux;
				}
			}
		}
	}
	
	//SELETIONSORT
	/*este é o método da seleção, também não é muito eficiente.
	funcionamento:
	-encontra-se o menor valor do array
	-troca o menor valor com a posição de inicio
	-reprete-se o método até que todo o array esteja ordenado.*/
	
	void seletionsort(int vetor[],int n)
	{
		
		for(int i = 0 ; i < n-1; i++) //for para ordenar
		{
			int menor = 999999;
			
			for(int j = 0; j < n; j++) //for apensa para achar o menor valor e sua posição
			{
				if(vetor[j] < menor)
				{
					menor = vetor[j]
					pos_min = j;
				}
			}
			temp = vet[i];
			vet[i] = min;
			vet[pos_min] = temp;
		}
	}
	
	//QUICKSORT
	/*é o melhor método para ordenar, sua complexidade é O(n*log(n))*/
	
	---------------------------------------------------------------------------------------------
	//PONTEIROS
	---------------------------------------------------------------------------------------------
	//funções usadas no estudo
	void somar(float var, float valor)
	{
		var+=valor; //somar o valor na variavel
	}
	
	void somar_pont(float *var, float valor)
	{
		*var+=valor; //somar o valor na variavel
	}
	
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