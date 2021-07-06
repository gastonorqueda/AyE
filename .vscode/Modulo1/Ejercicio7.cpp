#include <iostream>
using namespace std;
int main ()
{
int ve;
float qp, RD, sp;
cin >> ve;

//a)

qp=ve/5;

//b)

RD= (ve%5)*5;

//c)

sp= qp/7;

cout << "La Quinta parte: " << qp << endl << "Resto de division: " << RD << endl << "La septima parte del resultado del punto a): " << sp <<endl;
return 0;
}

