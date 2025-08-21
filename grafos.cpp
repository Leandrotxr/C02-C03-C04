#include <iostream>
#include <list>

using namespace std;

#define VERTICES 5

bool eh_conexo(bool adj[VERTICES][VERTICES], int vertices) //busca largura
{
	list<int> fila_espera; //assim define uma lista
	bool visitado[vertices]; //vetor auxiliar para saber se tal vertices ja foi visitado, se ja ele n precisa ser visto novamente
	
	for(int i = 0; i < vertices; i++)
	{
		visitado[i] = false;
	}
	
	fila_espera.push_back(0); //primeiro elemento
	
	int atual;
	
	while(!fila_espera.empty()) //enquanto a fila de espera não está vazia
	{
		atual = fila_espera.front(); 
		visitado[atual] = true;
		for(int i = 0; i < vertices; i++)
		{
			if(adj[atual][i] && visitado[i] == false)
			{
				fila_espera.push_back(i); //colocar em uma fila de espera
			}
		}
		fila_espera.pop_front(); //remover o primeiro elemento para que não entre em loop
	}
	
	for(int i = 0; i<vertices; i++)
	{
		if(visitado[i] == false)
		{
			return false;
		}
	}
	return true;
}

void bfs(bool adj[VERTICES][VERTICES], int vertices, int origem) //busca largura
{
	list<int> fila_espera; //assim define uma lista
	bool visitado[vertices]; //vetor auxiliar para saber se tal vertices ja foi visitado, se ja ele n precisa ser visto novamente
	
	for(int i = 0; i < vertices; i++)
	{
		visitado[i] = false;
	}
	
	fila_espera.push_back(0); //primeiro elemento
	
	int atual;
	
	while(!fila_espera.empty()) //enquanto a fila de espera não está vazia
	{
		atual = fila_espera.front(); 
		visitado[atual] = true;
		for(int i = 0; i < vertices; i++)
		{
			if(adj[atual][i] && visitado[i] == false)
			{
				fila_espera.push_back(i); //colocar em uma fila de espera
			}
		}
		fila_espera.pop_front(); //remover o primeiro elemento para que não entre em loop
	}
	
}

int main()
{
	
	bool matriz_adj[VERTICES][VERTICES]; //booleana pq não tem peso nas arestas, se tivesse deveria ser int
	
	for(int i = 0; i<VERTICES; i++) //colocar todos como falso (0)
	{
		for(int j = 0; j<VERTICES; j++)
		{
			matriz_adj[i][j] = false;
		}
	}
	
	int i =0, j = 0;
	
	/*while(i != -1 && j != -1)
	{
		cin >> i >> j;
		
		matriz_adj[i][j] = true;
		matriz_adj[j][i] = true;
	}*/
	
	matriz_adj[0][1] = true;
	matriz_adj[1][0] = true;
	matriz_adj[1][2] = true;
	matriz_adj[2][1] = true;
	matriz_adj[2][3] = true;
	matriz_adj[3][2] = true;
	
	bfs(matriz_adj,4,0);
	
	if(eh_conexo(matriz_adj,5) == true)
	{
		cout << "Conexo" << endl;
	}
	else
	{
		cout << "Desconexo" << endl;
	}
	
	return 0;
}