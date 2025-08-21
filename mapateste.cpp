#include <iostream>
#include <vector>
#include <set>
#include <list>
#include <cmath>

using namespace std;

struct cidadeInfo {
	string nome;
    int id;
    double x;
    double y;
    int pokecenter;
};

struct no{
	int v;
	int peso;
};

struct edge{
	int orig;
	int dest;
	int weigth;
};

list <cidadeInfo> cidades;

void cadastrarCidade() {
    cidadeInfo aux;
    
    cout << "Digite quantas cidades deseja cadastrar: ";
    int quant;
    
    do{
    	cin >> quant;
    	if(quant < 1)
    		cout << "Erro de entrada, digite novamente: ";
	}while(quant < 1);
    	
    	
    while(quant > 0){
		cout << "\nDigite o id da cidade cadastrada: ";
		
		do{
			cin >> aux.id;
			if(aux.id < 0)
				cout << "Erro de entrada, digite novamente: ";
		}while(aux.id < 0);
		
		if(aux.id == -1)
			break;
		
		cout << "Digite o nome da cidade: ";
		cin >> aux.nome;
		
		cout << "Digite a posição X e Y da cidade: ";
		cin >> aux.x >> aux.y;
		
		cout << "Digite 1 se a cidade tiver centro pokemon e 0 se não tiver: ";
		do{
			cin >> aux.pokecenter;
			if(aux.pokecenter != 1 && aux.pokecenter != 0)
				cout << "Erro de entrada, digite novamente: ";
		}while(aux.pokecenter != 1 && aux.pokecenter != 0);
		
		cidades.push_back(aux);
		quant--;
	}
}

void mostrarcidade(){
	cidadeInfo aux;
	for(int i = 0; i < cidades.size(); i++)
	{
		cout << cidades.front().nome;
		cout << endl;
		
		aux = cidades.front();
		
		cidades.push_back(aux);
		cidades.pop_front();
	}
}

void cria_aresta(list <no> adj[],int id1,int id2){
	
	cidadeInfo auxiliar, aux1, aux2;
	
	for(int i = 0; i < cidades.size(); i++){
		
		auxiliar = cidades.front();
			
			if(id1 == auxiliar.id)
				aux1 = auxiliar;
			if(id2 == auxiliar.id)
				aux2 = auxiliar;
			
			cidades.push_back(auxiliar);
			cidades.pop_front();
	}
	
	int numero;
	
	double peso;
	numero = (aux2.x - aux1.x)*(aux2.x - aux1.x) + (aux2.y - aux1.y)*(aux2.y - aux1.y);
	
	peso = sqrt(numero);
	
	no novo;
	novo.v = id2;
	novo.peso = peso;
    
    adj[id1].push_back(novo);
    
    novo.v = id1;
    adj[id2].push_back(novo);
}

void mostrar_grafo(list <no> adj[],int num){
	for (int u = 0; u < num; ++u) 
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

void CriarMapa(){
	
	cout << endl;
	
	int num = cidades.size();
	
	list <no> adj[num];
	
	int id1, id2,idteste1,idteste2;
	
	cout << "Digite os id's das cidades que deseja interligar: ";
	cin >> id1 >> id2;
	
	cidadeInfo auxiliar;
	
	while(id1 != -1 && id2 !=-1){
		for(int i = 0; i < cidades.size(); i++){
			
			auxiliar = cidades.front();
			
			if(id1 == auxiliar.id)
				idteste1 = 1;
			if(id2 == auxiliar.id)
				idteste2 = 1;
			
			cidades.push_back(auxiliar);
			cidades.pop_front();
		}
		
		if(idteste1 == 1 && idteste2 == 1){
			cria_aresta(adj,id1,id2);
			cout << "Digite os id's das cidades que deseja interligar: ";
		}
		else
		{
			cout << "ID's não encontrados, digite novamente: ";
		}
		cin >> id1 >> id2;
	}
	
	mostrar_grafo(adj,num);
}

int main(){
	
	setlocale (LC_ALL, "portuguese");
	
	cadastrarCidade();
	
	mostrarcidade();
	
	CriarMapa();
	
}