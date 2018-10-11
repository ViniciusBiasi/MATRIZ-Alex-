#include <iostream>
using namespace std;
int main()
{
	int j,i;
	float A[7][7];
	
	for(j=0;j < 5;j++)
	{
		for(i=0;i < 6;i++)
		{
		cout << "Digite um numero para a matriz A ["<<j<<"] ["<<i<<"]: " <<endl;	
		cin>>A[j][i];
		}
	}
	for(j=0;j < 5;j++)
	{
		for(i=0;i < 6;i++)
		{
		cout<<A[j][i]<<" ";	
		}
		cout<<"\n";
	}
	cout<<"\nA matriz tem 30 elementos\n";
	
	cout<<"\nO conteudo da matriz na posição (4,5) é: "<<A[3][4];
	
	cout<<"\nA soma da matriz na posição (3,2)+(5,1): "<<A[2][1]+A[4][0];
	
	cout<<"\nO Matriz na posição(6,2) terá lixo: "<<A[6][2];
	
	cout<<"\nA soma dos elementos  (1,4) (2,4) (3,4) (4,4) (5,4): "<<A[0][3]+A[1][3]+A[2][3]+A[3][3]+A[4][3];
	
	cout<<"\nA soma dos elementos da terceira coluna é: "<<A[2][0]+A[2][1]+A[2][2]+A[2][3];
	
}
