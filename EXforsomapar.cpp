#include <iostream>
#include <locale>

using namespace std;

int main()

{
	setlocale (LC_ALL, "Portuguese");
		
	int N, soma=0;
	
	cout<<"Digite um número: ";
	cin>>N;
	
	for (int i = 2; i <= N; i += 2) 
	{
    	soma += i;
	}
  
	cout<<soma<<endl;
	
	return 0;
}
	