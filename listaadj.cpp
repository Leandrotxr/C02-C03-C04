#include <iostream>
#include <list>

using namespace std;

struct no
{
    int v; // vertice adjacente
    int peso; // peso da aresta
};

void cria_aresta(list<no>adj[], int u, int v, int p, int orientado)
{
	no novo;
    novo.v = v;
    novo.peso = p;
    
    adj[u].push_back(novo);
    
    if (!orientado) 
	{
        novo.v = u;
        adj[v].push_back(novo);
    }
}

void mostra_grafo(list<no> adj[], int V) 
{
    for (int u = 0; u < V; ++u) 
	{
		while(!adj[u].empty())
		{	
			no novo;
			novo = adj[u].front();
	        
	        cout << u << " " << novo.v << " " << novo.peso<<endl;
	        
	        adj[u].pop_front();
		}
    }
}

int main()
{
	int num; //número de vértices
	int orientado; //se tem direção ou não
	
	cin>>num;
	
	list <no> adj[num]; 
	
	do
	{
		cin>>orientado;
	}while(orientado != 1 && orientado != 0);
	
	int u, v, p;
	
	cin >> u >> v >> p;
	
	while(u != -1 || v != -1 || p != -1)
	{
		cria_aresta(adj,u,v,p,orientado);
		cin >> u >> v >> p;
	}
	cout<<endl;
	
	mostra_grafo(adj, num);
	
	return 0;
}