#include <iostream>
using namespace std;
int main()
{
	int A[20][20],p,q;
	cout<< "Entre com os valores desejados: "<<endl;
	for (p=1; p<=20; p++){
		   
		   for (q=1;q<=20;q++){
		   	cin >> A[p][q];
		   }
	}
	for (p=1;p<=20;p++){
		for (q=1;q<=20;q++){
			if (A[q][p]==A[q][p])
			{
				cout << "Simetrica...."<<endl;
			}
			else {
				cout << "Não e simetrica...."<<endl;
			}
		}
	}
}
