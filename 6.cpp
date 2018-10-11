#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	int A[20][50],i,j;
	for (i=1;i<=3;i++){
		for (j=1;j<=3;j++){
			cout << "Matriz A: ["<<i<<"]" "[" <<j<<"]"<<endl;
			cin >> A[i][j];
		}
	}
	for (j=1;j<3;j++)
	{
		for (i=1;i<=3;i++){
		cout << A[j][i] <<endl;
	}
}
	
}
