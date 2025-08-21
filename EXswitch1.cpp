	#include <iostream>
	using namespace std;
	int main()
	{
	
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
			break;
 		case 3:
		case 4:
			cout<<"transporte aereo"<<endl;
			switch(val)
			{
				case 3:
					cout<<"aviao"<<endl;
					break;
				case 4:
					cout<<"helicoptero"<<endl;
					break;
			}
			break;
			default:
				cout<<"valor invalido"<<endl;
				
	}
				
				return 0;
	}