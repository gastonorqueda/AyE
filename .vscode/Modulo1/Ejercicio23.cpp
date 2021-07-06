// M = 5
// 3 6 9 12 -/15/-
#include <iostream>
using namespace std;
int main ()
{
int M;
int cont=0;
cin >> M;
for (int i=0;i<M;i++)
{
	cont=cont+3;
	if(cont%5==0)
	{
	}
	else
	{
		cout << "Los primeros "<< M << " multiplos de 3 son: " << cont << endl;
	}
}
return 0;
}

