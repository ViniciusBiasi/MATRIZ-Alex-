#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	int B[200][100],i,j,s=0;
	for (i=1;i<=200;i++){
		for (j=1;j<=100;j++){
			cin >> B[i][j];
		}
	}
	for (i=1;i<200;i++)
	{
		s+=B[i][30];
	}
	cout << "  " <<s<<endl;
}
