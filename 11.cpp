#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	float A[23][10],mp=0,media;
	int m, e,  est, muni;
	cout << "Entre com os valores necessarios: "<<endl;
	for (e=1;e<4;e++)
	{
		for (m=1;m<4;m++)
		{
			cout << "Entre com os valores necessarios ["<<e<<"] ["<<m<<"]: "<<endl;
			cin >> A[e][m];
			if (A[e][m]>mp)
	    	{
			mp=A[e][m];
			est=e;
			muni=m;
	     	}
		   if (m=1){
				
	      	media+=A[m][e];
	             	}
		}
	}
	media=media/23;
	cout << "O municipio "<<m<< " do estado" <<est<< "é o mais populoso. "<<endl;
	cout << "A media populacional das capitais é: "<<media;
}

