#include <iostream>
using namespace std;

int main() {
	
	int valores [20], n, factoriales [20], factorial = 1;
	
	cout << "Ingrese un numero: "; cin >> n;
	cout << "\nIngresar el conjunto de elementos: \n";
	valores [n + 1] = 0;
	
	for (int i = 0; i < n; i++){
		cin >> valores [i];
	}
	
	for (int i = 0; i < n; i++){
		
		for (int j = 1; j < valores [i]; j++){
			if (j == 1){
				factorial *= (valores [i] - j);
			}
		}
		factoriales [i] = factorial;
	}
	
	cout << "\nLos factoriales de los valores son: \n";
	
	for (int i = 0; i < n; i++){
		cout << factoriales [i] << " " << endl << endl;
	}
	
	system ("pause");
	return 0;
}
