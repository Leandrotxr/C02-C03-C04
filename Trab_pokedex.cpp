#include <iostream>
#include <vector>
#include <set>
#include <list>
#include <locale>
#include <cmath>
#include <cstring>
#include <stack>
#include <stdlib.h>
using namespace std;

vector <set<int> > adj;

// Struct dos dados pokemons
struct pokemonInfo {
    int id;
    string nome;
    string tipo;
    int vida;
    int poder;
    double x;
    double y;
};

// Struct da arvore
struct treenode {
    pokemonInfo info;
    int fb;
    treenode *esq;
    treenode *dir;
};

// Struct do mapa
struct cidadeInfo {
    char nome[100];
    int id;
    double x;
    double y;
    int pokecenter;
};

//struct do no
struct no{
    int v;
    double peso;
};

list <cidadeInfo> cidades;

typedef treenode* treenodeptr;

treenodeptr arvore = NULL;
treenodeptr arvoreNome = NULL;

void buscarPorCoordenadas(treenodeptr arvore, double x, double y, bool& pokemonEncontrado) {
    if (arvore != NULL) {
        double margemErro = 0.001; // Define a margem de erro aceit?vel
        if (abs(arvore->info.x - x) <= margemErro && abs(arvore->info.y - y) <= margemErro) {
            cout << "ID: " << arvore->info.id << endl;
            cout << "Nome: " << arvore->info.nome << endl;
            cout << "Tipo: " << arvore->info.tipo << endl;
            cout << "Vida: " << arvore->info.vida << endl;
            cout << "Poder: " << arvore->info.poder << endl;
            cout << "--------------------" << endl;
            pokemonEncontrado = true;
        }

        // Chama a funcao para os nos filhos
        buscarPorCoordenadas(arvore->esq, x, y, pokemonEncontrado);
        buscarPorCoordenadas(arvore->dir, x, y, pokemonEncontrado);
    }
}

// Funcao para inserir pokemon na arvore
void tInsere(treenodeptr &p, pokemonInfo aux) {
    if (p == NULL) {
        p = new treenode;
        p->info = aux;
        p->esq = NULL;
        p->dir = NULL;
    } else {
        if (aux.id < p->info.id)
            tInsere(p->esq, aux);
        else
            tInsere(p->dir, aux);
    }
}

// Função para inserir Pokémon na árvore por nome
void tInsereNome(treenodeptr& p, pokemonInfo aux) {
    if (p == NULL) {
        p = new treenode;
        p->info = aux;
        p->esq = NULL;
        p->dir = NULL;
    } else {
        if (aux.nome < p->info.nome)
            tInsereNome(p->esq, aux);
        else
            tInsereNome(p->dir, aux);
    }
}

//função para calcular a altura
int altura(treenodeptr raiz)
{
    if (!raiz)
        return -1;

    int esq, dir;

    esq = altura(raiz->esq);
    dir = altura(raiz->dir);

    if (esq > dir)
        return 1 + esq;
    else
        return 1 + dir;
}

//função para calcular o fator de balanceamento
int fatorBalanceamento(treenodeptr raiz)
{
    return altura(raiz->esq) - altura(raiz->dir);
}

//função para atualizar o fator de balanceamento
void atualizaFB(treenodeptr g)
{
    if (g) {
        g->fb = fatorBalanceamento(g);
        atualizaFB(g->esq);
        atualizaFB(g->dir);
    }
}

treenodeptr rotacionarEsqEsq(treenodeptr p)
{
    treenodeptr temp = p;
    treenodeptr esq = temp->esq;

    temp->esq = esq->dir;
    esq->dir = temp;

    return esq;
}

treenodeptr rotacionarEsqDir(treenodeptr p)
{
    treenodeptr temp = p;
    treenodeptr esq = temp->esq;
    treenodeptr dir = esq->dir;

    temp->esq = dir->dir;
    esq->dir = dir->esq;
    dir->esq = esq;
    dir->dir = temp;

    return dir;
}

treenodeptr rotacionarDirEsq(treenodeptr p)
{
    treenodeptr temp = p;
    treenodeptr dir = temp->dir;
    treenodeptr esq = dir->esq;

    temp->dir = esq->esq;
    dir->esq = esq->dir;
    esq->dir = dir;
    esq->esq = temp;

    return esq;
}

treenodeptr rotacionarDirDir(treenodeptr p)
{
    treenodeptr temp = p;
    treenodeptr dir = temp->dir;

    temp->dir = dir->esq;
    dir->esq = temp;

    return dir;
}

//função para balancear
treenodeptr balancear(treenodeptr p)
{
    if (!p)
        return NULL;

    treenodeptr balanceado = NULL;
    if (p->esq)
        p->esq = balancear(p->esq);

    if (p->dir)
        p->dir = balancear(p->dir);

    int fator = p->fb;
    if (fator >= 2) {
        if (p->esq->fb <= -1)
            balanceado = rotacionarEsqDir(p);
        else
            balanceado = rotacionarEsqEsq(p);

    } else if (fator <= -2) {
        if (p->dir->fb >= 1)
            balanceado = rotacionarDirEsq(p);
        else
            balanceado = rotacionarDirDir(p);
    } else {
        balanceado = p;
    }

    return balanceado;
}

// Funcao para cadastrar pokemon na arvore
void cadastrarPokemon(treenodeptr &arvore) {
    pokemonInfo aux;
    cout << "\nDigite quantos pokemons deseja cadastrar: ";
    int quant;
    do{
    	cin >> quant;
    	if(quant < 1){
			cout << "Erro de entrada, digite novamente: ";
		}
	}while(quant < 1);

    while (quant--) {
        cout << "\nDigite o id do pokemon a ser cadastrado: ";
        cin >> aux.id;

        if (aux.id == -1)
            break;
        
        cout << "Digite o nome do pokemon: ";
        cin >> aux.nome;
        cout << "Digite o tipo do pokemon: ";
        cin >> aux.tipo;
        cout << "Digite quanto de vida este pokemon possui: ";
        cin >> aux.vida;
        cout << "Digite quanto de poder este pokemon possui: ";
        cin >> aux.poder;
        cout << "Digite a posicao X e Y do pokemon: ";
        cin >> aux.x >> aux.y;

        tInsere(arvore, aux);
        tInsereNome(arvoreNome, aux);
        atualizaFB(arvore);
        arvore = balancear(arvore);
        atualizaFB(arvore);
    }
}

// Função para exibir Pokemon em ordem alfabetica
void exibirEmOrdemAlfabetica(treenodeptr p) {
    if (p != NULL) {
        exibirEmOrdemAlfabetica(p->esq);
        cout << "ID: " << p->info.id << endl;
        cout << "Nome: " << p->info.nome << endl;
        cout << "Tipo: " << p->info.tipo << endl;
        cout << "Vida: " << p->info.vida << endl;
        cout << "Poder: " << p->info.poder << endl;
        cout << "--------------------" << endl;
        exibirEmOrdemAlfabetica(p->dir);
    }
}

// Funcao para imprimir as informacoes de todos os pokemons da arvore em pre-ordem
void preOrdem(treenodeptr arvore) {
    if (arvore != NULL) {
        cout << "ID: " << arvore->info.id << endl;
        cout << "Nome: " << arvore->info.nome << endl;
        cout << "Tipo: " << arvore->info.tipo << endl;
        cout << "Vida: " << arvore->info.vida << endl;
        cout << "Poder: " << arvore->info.poder << endl;
        cout << "--------------------" << endl;
        preOrdem(arvore->esq);
        preOrdem(arvore->dir);
    }
}

// Vetor para armazenar os contadores de cada tipo de pokemon
int contadorTipos[5] = {0};

// Funcao recursiva para percorrer a arvore e contar os tipos de pokemon
void contarTipos(treenodeptr arvore) {
    if (arvore != NULL) {
        if (arvore->info.tipo == "fogo") {
            contadorTipos[0]++;
        } else if (arvore->info.tipo == "agua") {
            contadorTipos[1]++;
        } else if (arvore->info.tipo == "grama") {
            contadorTipos[2]++;
        } else if (arvore->info.tipo == "pedra") {
            contadorTipos[3]++;
        } else if (arvore->info.tipo == "normal") {
            contadorTipos[4]++;
        }

        // Chama a funcao para os nos filhos
        contarTipos(arvore->esq);
        contarTipos(arvore->dir);
    }
}

// Funcao para exibir a contagem de pokemons por tipo
void exibirContagemTipos() {
    cout << endl;
    cout << "Contagem de pokemons por tipo:" << endl;
    cout << "Fogo: " << contadorTipos[0] << endl;
    cout << "Agua: " << contadorTipos[1] << endl;
    cout << "Grama: " << contadorTipos[2] << endl;
    cout << "Pedra: " << contadorTipos[3] << endl;
    cout << "Normal: " << contadorTipos[4] << endl;
}

// Funcao recursiva para buscar um pokemon pelo nome na arvore
void buscarPorNome(treenodeptr arvore, const string& nomeBuscado) {
	
	int enc = 0;
	
    if (arvore != NULL) {
        if (arvore->info.nome == nomeBuscado) {
        	enc = 1;
            cout << "\nPokemon encontrado:" << endl;
            cout << "ID: " << arvore->info.id << endl;
            cout << "Nome: " << arvore->info.nome << endl;
            cout << "Tipo: " << arvore->info.tipo << endl;
            cout << "Vida: " << arvore->info.vida << endl;
            cout << "Poder: " << arvore->info.poder << endl;
            return; // Sai da funcao quando encontrar o pokemon
        }

        // Chama a funcao para os nos filhos
        buscarPorNome(arvore->esq, nomeBuscado);
        buscarPorNome(arvore->dir, nomeBuscado);
    }
    if(enc = 0){
    	cout << "\nPokemon não encontrado. "; 
	}
}

// Funcao para buscar um pokemon pelo nome na arvore
void buscarPokemonPorNome(treenodeptr arvore) {
    cout << "Digite o nome do pokemon que deseja buscar: ";
    string nomeBuscado;
    cin >> nomeBuscado;

    buscarPorNome(arvore, nomeBuscado);
}

double distancia(double x1, double x2, double y1, double y2){
	return sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
}

struct Point
{
	int x, y;
};

Point p0;


Point nextToTop(stack<Point> &S)
{
	Point p = S.top();
	S.pop();
	Point res = S.top();
	S.push(p);
	return res;
}


void swap(Point &p1, Point &p2)
{
	Point temp = p1;
	p1 = p2;
	p2 = temp;
}


int distSq(Point p1, Point p2)
{
	return (p1.x - p2.x) * (p1.x - p2.x) +
		   (p1.y - p2.y) * (p1.y - p2.y);
}


int orientation(Point p, Point q, Point r)
{
	int val = (q.y - p.y) * (r.x - q.x) -
			  (q.x - p.x) * (r.y - q.y);

	if (val == 0) return 0;  
	return (val > 0) ? 1 : 2; 
}


int compare(const void *vp1, const void *vp2)
{
	Point *p1 = (Point *)vp1;
	Point *p2 = (Point *)vp2;


	int o = orientation(p0, *p1, *p2);
	if (o == 0)
		return (distSq(p0, *p2) >= distSq(p0, *p1)) ? -1 : 1;

	return (o == 2) ? -1 : 1;
}
double distancia(Point p1, Point p2)
{
	return sqrt((p1.x - p2.x) * (p1.x - p2.x) +
				(p1.y - p2.y) * (p1.y - p2.y));
}


void grahan_scan(Point points[], int n)
{
	
	int ymin = points[0].y, min = 0;
	for (int i = 1; i < n; i++)
	{
		int y = points[i].y;

		
		if ((y < ymin) || (ymin == y &&
						   points[i].x < points[min].x))
			ymin = points[i].y, min = i;
	}


	swap(points[0], points[min]);


	p0 = points[0];
	qsort(&points[1], n - 1, sizeof(Point), compare);


	int m = 1; 
	for (int i = 1; i < n; i++)
	{
	
		while (i < n - 1 && orientation(p0, points[i],
										points[i + 1]) == 0)
			i++;


		points[m] = points[i];
		m++;  
	}


	if (m < 3) return;


	stack<Point> S;
	S.push(points[0]);
	S.push(points[1]);
	S.push(points[2]);


	for (int i = 3; i < m; i++)
	{
		
		while (S.size() > 1 && orientation(nextToTop(S), S.top(), points[i]) != 2)
			S.pop();
		S.push(points[i]);
	}

	double soma = 0;
	Point r = S.top();

	while (!S.empty())
	{
		Point p = S.top();
		S.pop();
		if(S.size() == 0)
		{
			soma += distancia(p, r);
		}
		else
		{
			Point q = S.top();
			soma += distancia(p, q);
		}
	}
	cout  << "\nPerímetro: " << soma << endl;
}
void preenche_arvore(treenodeptr arvore, double x, double y, Point points[], int *index) {
    if (arvore != NULL) {
        double x1 = arvore->info.x;
        double y1 = arvore->info.y;
        double raio = distancia(x, x1, y, y1);

        if (raio <= 100) {
            points[*index].x = arvore->info.x;
            points[*index].y = arvore->info.y;
            (*index)++;
        }

        preenche_arvore(arvore->esq, x, y, points, index);
        preenche_arvore(arvore->dir, x, y, points, index);
    }
}
void contar_pontos(treenodeptr arvore, double x, double y, int *cont) {
    if (arvore != NULL) {
        double x1 = arvore->info.x;
        double y1 = arvore->info.y;
        double raio = distancia(x, x1, y, y1);

        if (raio <= 100) {
            (*cont)++;
        }

        contar_pontos(arvore->esq, x, y, cont);
        contar_pontos(arvore->dir, x, y, cont);
    }
}
int verarvore(treenodeptr arvore, double x, double y) {
    int cont = 0;

    contar_pontos(arvore, x, y, &cont);


    if (cont < 3) {
        cout << "\nPerímetro igual a 0" << endl;
        return cont;
    }

 
    Point points[cont];
    int index = 0;
    preenche_arvore(arvore, x, y, points, &index);

  
    grahan_scan(points, cont);

    return cont;
}

void pokemonsProximos(treenodeptr arvore){
	
	double x, y;
	
	int cont1 = 0;
	int cont2;
	
	cout << "\nDigite a posição X e Y da pokedex: ";
	cin >> x >> y;
	
	cont2 = verarvore(arvore, x, y);
	
	cout << "\nPodem ser encontrados " << cont2 << " pokemons em um raio de 100 metros. ";
	
}

// Menu pokedex
void pokedexMenu(treenodeptr &arvore) {
    bool ligado = true;

    while (ligado) {
        cout << "\nDigite uma opcao valida:" << endl;
        cout << "1 - Cadastrar pokemon" << endl;
        cout << "2 - Exibir informacoes sobre os pokemons cadastrados" << endl;
        cout << "3 - Mostrar quantos pokemons tem de cada tipo" << endl;
        cout << "4 - Exibir informacoes de um pokemon" << endl;
        cout << "5 - Exibir pokemons próximos" << endl;
        cout << "6 - Exibir informacoes sobre os pokemons cadastrados em ordem alfabetica" << endl;
        cout << "7 - Sair" << endl;

        int aux = 0;
        cin >> aux;

        switch (aux) {
            case 1:
                cadastrarPokemon(arvore);
                break;
            case 2:
                preOrdem(arvore);
                break;
            case 3:
                memset(contadorTipos, 0, sizeof(contadorTipos));
                contarTipos(arvore);
                exibirContagemTipos();
                break;
            case 4:
                buscarPokemonPorNome(arvore);
                break;
            case 5:
            	pokemonsProximos(arvore);
            	break;
            case 6:
            	exibirEmOrdemAlfabetica(arvoreNome);
            	break;
            case 7:
                ligado = false;
                break;
        }
    }
}

// Funcao para cadastrar cidade
void cadastrarCidade() {
    cidadeInfo aux;
    
    cout << "\nDigite quantas cidades deseja cadastrar: ";
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
        cin.ignore();
        cin.getline(aux.nome,100);
        
        cout << "Digite a posicao X e Y da cidade: ";
        cin >> aux.x >> aux.y;
        
        cout << "Digite 1 se a cidade tiver centro pokemon e 0 se nao tiver: ";
        do{
            cin >> aux.pokecenter;
            if(aux.pokecenter != 1 && aux.pokecenter != 0)
                cout << "Erro de entrada, digite novamente: ";
        }while(aux.pokecenter != 1 && aux.pokecenter != 0);
        
        cidades.push_back(aux);
        quant--;
    }
}

//Funcao para mostrar as cidades
void mostrarCidade(){
	cout << "\nCidades cadastradas: " << endl;
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

//Função para pesquisar cidade
void PesquisarCidade(){
	
	string cidade;
    cout << "\nDigite o nome da cidade que voce deseja pesquisar :";
    cin.ignore();
    cin >> cidade;
    
    cidadeInfo auxiliar;
    
    // Busca a cidade na lista de cidades
    for(int i = 0; i < cidades.size(); i++){
        auxiliar = cidades.front();
        cidades.push_back(auxiliar);
        cidades.pop_front();
        
        if(auxiliar.nome == cidade){
        	cout << "Cidade encontrada. " << endl;
            break;
        }
    }
}

//Funcao para criar aresta do grafo
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

//Funcao para criar o mapa
void CriarMapa(list <no> adj[], int num){
    
    int id1, id2,idteste1,idteste2;
    
    cout << "\nDigite os id's das cidades que deseja interligar: ";
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
            cout << "ID's nao encontrados, digite novamente: ";
        }
        cin >> id1 >> id2;
    }
}

//Funcao para exibir a cidade mais proxima
void exibirCidade(list <no> adj[],int num,int ide){
    
    cidadeInfo aux;
    cidadeInfo auxiliar;
    
    for(int i = 0; i < cidades.size(); i++){
        
        auxiliar = cidades.front();
        
        if(ide == auxiliar.id){
            aux = auxiliar;
            
            if(aux.pokecenter == 1){
                cout << "Ha um pokecenter na cidade que voce esta. " << endl;
            }
        }
        
        cidades.push_back(auxiliar);
        cidades.pop_front();
    }
}

void exebirPokemonCidade(treenodeptr arvore) {
    string cidade;
    cout << "Digite o nome da cidade que voce deseja saber quais pokemons podem ser capturados: " << endl;
    cin.ignore();
    getline(cin, cidade);
    
    cidadeInfo auxiliar;
    bool cidadeEncontrada = false;
    
    // Busca a cidade na lista de cidades
    for(int i = 0; i < cidades.size(); i++){
        auxiliar = cidades.front();
        cidades.push_back(auxiliar);
        cidades.pop_front();
        
        if(auxiliar.nome == cidade){
            cidadeEncontrada = true;
            break;
        }
    }
    
    if(!cidadeEncontrada){
        cout << "Cidade n?o encontrada." << endl;
        return;
    }
    
    // Percorre a ?rvore de pok?mons
    bool pokemonEncontrado = false;
    cout << "Pokemons encontrados na cidade " << cidade << ":" << endl;
    buscarPorCoordenadas(arvore, auxiliar.x, auxiliar.y, pokemonEncontrado);
    
    if(!pokemonEncontrado){
        cout << "Nenhum pokemon encontrado nesta cidade." << endl;
    }
}

// Menu mapa
void mapaMenu() {
    
    cadastrarCidade();
    
    int num = cidades.size();
    int id,idteste;
    
    cidadeInfo auxiliar;
    
    list <no> adj[num];
    
    bool ligado = true;

    while (ligado) {
        cout << "\nDigite uma opcao valida:" << endl;
        cout << "1 - Criar mapa" << endl;
        cout << "2 - Exibir cidades cadastradas" << endl;
        cout << "3 - Pesquisar cidade" << endl;
        cout << "4 - Exibir os pokemons que podem ser encontradas na cidade desejada" << endl;
        cout << "5 - Sair" << endl;

        int aux = 0;
        cin >> aux;

        switch (aux) {
            case 1:
                CriarMapa(adj,num);
                break;
            case 2:
                mostrarCidade();
                break;
            case 3:
            	PesquisarCidade();
            	break;
            case 4:
            	exebirPokemonCidade(arvore);
            	break;
            case 5:
                ligado = false;
                break;
        }
    }
}

int main() {
    bool ligado = true;
    
    setlocale (LC_ALL, "portuguese");

    cout << "--POKEMONDEX--" << endl;
    while (ligado) {
        cout << "\nDigite uma opção valida:" << endl;
        cout << "1 - Pokedex" << endl;
        cout << "2 - Mapa" << endl;
        cout << "3 - Desligar" << endl;

        int aux = 0;
        cin >> aux;

        switch (aux) {
            case 1:
                pokedexMenu(arvore);
                break;
            case 2:
                mapaMenu();
                break;
            case 3:
                ligado = false;
                break;
        }
    }

    return 0;
}