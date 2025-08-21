//media de 100 números
#include <iostream>
using namespace std;
int main()
{
	double s=0,x;
	
	for(int i=0; i<5;i++)
	{
		cin>>x;
		s=s+x;
	}
	cout<<s/5;
	
	
	return 0;
}

//quantos são acima da média? quantos são abaixo?
/*para solucionar este problema, é necessário que que se tenha uma estrutura 
de dados que possa ser armazenados esses 100 números, e cada um desses possa 
ser referenciado e acessado individualmente.*/
//exemplo
/*valore:   x1 x2 x3 x4 ... x100
posição:  0  1  2  3  ... 99

/*esta estrutura é conhecida como ARRAY(arranjo)*/ 
double x[100]; //uma variavel x que possui 100 posições, de 0 a 99

#include <iostream>
using namespace std;
int main()
{
	double s=0,x[5],media,contador=0;
	int i;
	for(i=0; i<5;i++)
	{
		cin>>x[i];
		s=s+x[i];
	}
	
	media=s/5;
	cout<<"media = "<<media<<endl;
	
	for(i=0;i<5;i++)
	{
		if(x[i]>media)
		{
			contador++;
		}
	}
	cout<<contador;
	return 0;
}




