#include <iostream>
#include <list>

using namespace std;

struct no
{
	int v;
	int peso;
};

void cria_aresta(list<no>adj[], int u, int v, int p)
{
	no novo;
    novo.v = v;
    novo.peso = p;
    
    no volta;
    volta.v = u;
    volta.peso = p;
    
    adj[u].push_back(novo);
    adj[v].push_back(volta);
}

void bfs (list<no>adj[], int num, int ini)
{
	int status[num];
	int pai[num];
	int u, v;
	int p;
	
	for(int u = 0; u < num; u++)
	{
		if(u != ini)
		{
			status[u] = -1; //não visitado
			pai[u] = -1; //sem pais
		}
	}
	
	status[ini] = 0;
	pai[ini] = -1;
	
	list <int> q;
	
	q.push_back(ini);
	
	 while (!q.empty())
    {
        u = q.front();
        q.pop_front();
        cout << u << endl;

        for (list<no>::iterator p = adj[u].begin(); p != adj[u].end(); ++p)
        {
            v = p->v;
            cout << u << " " << v << endl;

            if (status[v] == -1)
            {
                status[v] = 0;
                pai[v] = u;
                q.push_back(v);
            }
        }
        status[u] = 2;
    }
}

int main()
{
	int num; // número de vertices
	int ini; // vertice inicial
	
	cin >> num >> ini;
	
	list <no> adj[num]; 
	
	int u, v, p;
	
	cin >> u >> v >> p;
	
	while(u != -1 || v != -1 || p != -1)
	{
		cria_aresta(adj, u, v, p);
		cin >> u >> v >> p;
	}
	
	bfs(adj, num, ini);
	
	return 0;
}