#include<iostream>
using namespace std;
int main()
{ 
	int a[20][10],b[20][11],i,j,m,n,s;
	cout<<"Digite o numero de linhas: ";
	cin>>m;
	cout<<"Digite o numero e colunas: ";
	cin>>n;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"A["<<i+1<<","<<j+1<<"]: ";
			cin>>a[i][j];
			b[i][j]=a[i][j];
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	for(i=0;i<m;i++)
	{
		for(j=0,s=1;j<n;j++)
		{
			s*=a[i][j];
		}
		b[i][n]=s;
		
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<=n;j++)
		{
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
		
	}
	
}
