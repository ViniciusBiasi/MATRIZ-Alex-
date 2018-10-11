#include <iostream>
using namespace std;
int main()
{
	int j,i,soma;
	float B[100][200];
	
	for(j=0;j < 4;j++)
	{
		for(i=0;i < 4;i++)
		{
		cout << "Digite um numero para a matriz B ["<<j<<"] ["<<i<<"]: " <<endl;	
		cin>>B[j][i];
		}
	}
	for(j=0;j < 4;j++)
	{
		for(i=0;i < 4;i++)
		{
		cout<<B[j][i]<<" ";	
		}
		cout<<"\n";
	}
	
		for(j=0;j < 4;j++)
	{
		for(i=0;i < 4;i++)
		{
             soma+=B[j][i];
	
     }
  } 
	cout << " " <<soma<<endl;
	cout <<" 40: "<<B[j][2]<<endl;
}
