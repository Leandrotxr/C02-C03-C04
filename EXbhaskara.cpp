#include <iostream> 
#include <iomanip> 
using namespace std; 
int main() 
{
    //declaração de variaveis
    double A,B,C,AQ,BQ,CQ,SQ;
    cin>>A>>B>>C;
    
    AQ=A*A;
    BQ=B*B;
    CQ=C*C;
    SQ=BQ+CQ;
    
    if(A>B && B>C)
	{
    	A=A;
    	B=B;
    	C=C;
    	
    	if(A>=B+C)
    	{
			cout<<"NAO FORMA TRIANGULO"<<endl;
		}
		else if(AQ==SQ)
		{
			if(A==B && B==C)
			{
				cout<<"TRIANGULO RETANGULO"<<endl;
				cout<<"TRIANGULO EQUILATERO"<<endl;
			}
			else if(A==B || B==C || C==A)
			{
				cout<<"TRIANGULO RETANGULO"<<endl;
				cout<<"TRIANGULO ISOSCELES"<<endl;
			}
			else
			{
				cout<<"TRIANGULO RETANGULO"<<endl;
			}
		}
		else if(AQ>SQ)
		{
			if(A==B && B==C)
			{
				cout<<"TRIANGULO OBTUSANGULO"<<endl;
				cout<<"TRIANGULO EQUILATERO"<<endl;
			}
			else if(A==B || B==C || C==A)
			{
				cout<<"TRIANGULO OBTUSANGULO"<<endl;
				cout<<"TRIANGULO ISOSCELES"<<endl;
			}
			else
			{
				cout<<"TRIANGULO OBTUSANGULO"<<endl;
			}
		}
		else if(AQ<SQ)
		{
			if(A==B && B==C)
			{
				cout<<"TRIANGULO ACUTANGULO"<<endl;
				cout<<"TRIANGULO EQUILATERO"<<endl;
			}
			else if(A==B || B==C || C==A)
			{
				cout<<"TRIANGULO ACUTANGULO"<<endl;
				cout<<"TRIANGULO ISOSCELES"<<endl;
			}
			else
			{
				cout<<"TRIANGULO ACUTANGULO"<<endl;
			}
		}
	}
	if(A>C && C>B)
	{
    	A=A;
    	B=C;
    	C=B;
    	
    	if(A>=B+C)
    	{
			cout<<"NAO FORMA TRIANGULO"<<endl;
		}
		else if(AQ==SQ)
		{
			if(A==B && B==C)
			{
				cout<<"TRIANGULO RETANGULO"<<endl;
				cout<<"TRIANGULO EQUILATERO"<<endl;
			}
			else if(A==B || B==C || C==A)
			{
				cout<<"TRIANGULO RETANGULO"<<endl;
				cout<<"TRIANGULO ISOSCELES"<<endl;
			}
			else
			{
				cout<<"TRIANGULO RETANGULO"<<endl;
			}
		}
		else if(AQ>SQ)
		{
			if(A==B && B==C)
			{
				cout<<"TRIANGULO OBTUSANGULO"<<endl;
				cout<<"TRIANGULO EQUILATERO"<<endl;
			}
			else if(A==B || B==C || C==A)
			{
				cout<<"TRIANGULO OBTUSANGULO"<<endl;
				cout<<"TRIANGULO ISOSCELES"<<endl;
			}
			else
			{
				cout<<"TRIANGULO OBTUSANGULO"<<endl;
			}
		}
		else if(AQ<SQ)
		{
			if(A==B && B==C)
			{
				cout<<"TRIANGULO ACUTANGULO"<<endl;
				cout<<"TRIANGULO EQUILATERO"<<endl;
			}
			else if(A==B || B==C || C==A)
			{
				cout<<"TRIANGULO ACUTANGULO"<<endl;
				cout<<"TRIANGULO ISOSCELES"<<endl;
			}
			else
			{
				cout<<"TRIANGULO ACUTANGULO"<<endl;
			}
		}
	}
	if(B>A && A>C)
	{
    	A=B;
    	B=A;
    	C=C;
    	
    	if(A>=B+C)
    	{
			cout<<"NAO FORMA TRIANGULO"<<endl;
		}
		else if(AQ==SQ)
		{
			if(A==B && B==C)
			{
				cout<<"TRIANGULO RETANGULO"<<endl;
				cout<<"TRIANGULO EQUILATERO"<<endl;
			}
			else if(A==B || B==C || C==A)
			{
				cout<<"TRIANGULO RETANGULO"<<endl;
				cout<<"TRIANGULO ISOSCELES"<<endl;
			}
			else
			{
				cout<<"TRIANGULO RETANGULO"<<endl;
			}
		}
		else if(AQ>SQ)
		{
			if(A==B && B==C)
			{
				cout<<"TRIANGULO OBTUSANGULO"<<endl;
				cout<<"TRIANGULO EQUILATERO"<<endl;
			}
			else if(A==B || B==C || C==A)
			{
				cout<<"TRIANGULO OBTUSANGULO"<<endl;
				cout<<"TRIANGULO ISOSCELES"<<endl;
			}
			else
			{
				cout<<"TRIANGULO OBTUSANGULO"<<endl;
			}
		}
		else if(AQ<SQ)
		{
			if(A==B && B==C)
			{
				cout<<"TRIANGULO ACUTANGULO"<<endl;
				cout<<"TRIANGULO EQUILATERO"<<endl;
			}
			else if(A==B || B==C || C==A)
			{
				cout<<"TRIANGULO ACUTANGULO"<<endl;
				cout<<"TRIANGULO ISOSCELES"<<endl;
			}
			else
			{
				cout<<"TRIANGULO ACUTANGULO"<<endl;
			}
		}
	}
	if(B>C && C>A)
	{
    	A=B;
    	B=C;
    	C=A;
    	
    	if(A>=B+C)
    	{
			cout<<"NAO FORMA TRIANGULO"<<endl;
		}
		else if(AQ==SQ)
		{
			if(A==B && B==C)
			{
				cout<<"TRIANGULO RETANGULO"<<endl;
				cout<<"TRIANGULO EQUILATERO"<<endl;
			}
			else if(A==B || B==C || C==A)
			{
				cout<<"TRIANGULO RETANGULO"<<endl;
				cout<<"TRIANGULO ISOSCELES"<<endl;
			}
			else
			{
				cout<<"TRIANGULO RETANGULO"<<endl;
			}
		}
		else if(AQ>SQ)
		{
			if(A==B && B==C)
			{
				cout<<"TRIANGULO OBTUSANGULO"<<endl;
				cout<<"TRIANGULO EQUILATERO"<<endl;
			}
			else if(A==B || B==C || C==A)
			{
				cout<<"TRIANGULO OBTUSANGULO"<<endl;
				cout<<"TRIANGULO ISOSCELES"<<endl;
			}
			else
			{
				cout<<"TRIANGULO OBTUSANGULO"<<endl;
			}
		}
		else if(AQ<SQ)
		{
			if(A==B && B==C)
			{
				cout<<"TRIANGULO ACUTANGULO"<<endl;
				cout<<"TRIANGULO EQUILATERO"<<endl;
			}
			else if(A==B || B==C || C==A)
			{
				cout<<"TRIANGULO ACUTANGULO"<<endl;
				cout<<"TRIANGULO ISOSCELES"<<endl;
			}
			else
			{
				cout<<"TRIANGULO ACUTANGULO"<<endl;
			}
		}
	}
	if(C>A && A>B)
	{
    	A=C;
    	B=A;
    	C=B;
    	
    	if(A>=B+C)
    	{
			cout<<"NAO FORMA TRIANGULO"<<endl;
		}
		else if(AQ==SQ)
		{
			if(A==B && B==C)
			{
				cout<<"TRIANGULO RETANGULO"<<endl;
				cout<<"TRIANGULO EQUILATERO"<<endl;
			}
			else if(A==B || B==C || C==A)
			{
				cout<<"TRIANGULO RETANGULO"<<endl;
				cout<<"TRIANGULO ISOSCELES"<<endl;
			}
			else
			{
				cout<<"TRIANGULO RETANGULO"<<endl;
			}
		}
		else if(AQ>SQ)
		{
			if(A==B && B==C)
			{
				cout<<"TRIANGULO OBTUSANGULO"<<endl;
				cout<<"TRIANGULO EQUILATERO"<<endl;
			}
			else if(A==B || B==C || C==A)
			{
				cout<<"TRIANGULO OBTUSANGULO"<<endl;
				cout<<"TRIANGULO ISOSCELES"<<endl;
			}
			else
			{
				cout<<"TRIANGULO OBTUSANGULO"<<endl;
			}
		}
		else if(AQ<SQ)
		{
			if(A==B && B==C)
			{
				cout<<"TRIANGULO ACUTANGULO"<<endl;
				cout<<"TRIANGULO EQUILATERO"<<endl;
			}
			else if(A==B || B==C || C==A)
			{
				cout<<"TRIANGULO ACUTANGULO"<<endl;
				cout<<"TRIANGULO ISOSCELES"<<endl;
			}
			else
			{
				cout<<"TRIANGULO ACUTANGULO"<<endl;
			}
		}
	}
	if(C>B && B>A)
	{
    	A=C;
    	B=B;
    	C=A;
    	
    	if(A>=B+C)
    	{
			cout<<"NAO FORMA TRIANGULO"<<endl;
		}
		else if(AQ==SQ)
		{
			if(A==B && B==C)
			{
				cout<<"TRIANGULO RETANGULO"<<endl;
				cout<<"TRIANGULO EQUILATERO"<<endl;
			}
			else if(A==B || B==C || C==A)
			{
				cout<<"TRIANGULO RETANGULO"<<endl;
				cout<<"TRIANGULO ISOSCELES"<<endl;
			}
			else
			{
				cout<<"TRIANGULO RETANGULO"<<endl;
			}
		}
		else if(AQ>SQ)
		{
			if(A==B && B==C)
			{
				cout<<"TRIANGULO OBTUSANGULO"<<endl;
				cout<<"TRIANGULO EQUILATERO"<<endl;
			}
			else if(A==B || B==C || C==A)
			{
				cout<<"TRIANGULO OBTUSANGULO"<<endl;
				cout<<"TRIANGULO ISOSCELES"<<endl;
			}
			else
			{
				cout<<"TRIANGULO OBTUSANGULO"<<endl;
			}
		}
		else if(AQ<SQ)
		{
			if(A==B && B==C)
			{
				cout<<"TRIANGULO ACUTANGULO"<<endl;
				cout<<"TRIANGULO EQUILATERO"<<endl;
			}
			else if(A==B || B==C || C==A)
			{
				cout<<"TRIANGULO ACUTANGULO"<<endl;
				cout<<"TRIANGULO ISOSCELES"<<endl;
			}
			else
			{
				cout<<"TRIANGULO ACUTANGULO"<<endl;
			}
		}
	}
   
    
    
    
    
    
    
    return 0;
}