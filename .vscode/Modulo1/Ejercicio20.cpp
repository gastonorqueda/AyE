#include <iostream>
using namespace std;

/* 0 Se realiza una inspección en una fábrica de pinturas, y se detectaron 20 infracciones. De
cada infracción se tomó nota de los siguientes datos:
- Tipo de Infracción (1, 2, 3, ó 4)
- Motivo de la infracción
- Valor de la multa
- Gravedad de la infracción (‘L’,‘M’, ‘G’)
Se pide informar al final del proceso:
Los valores totales de la multa a pagar de acuerdo al tipo de gravedad.
La leyenda “Clausurar fábrica” si la cantidad de infracciones 3 y 4 con gravedad “G” sean mayor a 3. */


  main() {
	
	int valorTotalGravedadL = 0;
	int valorTotalGravedadM = 0;
	int valorTotalGravedadG = 0;
	int contadorInfraccionesG = 0;
	
	
	for(int i=0;i<4;i++){
		
		cout<<"Introduce el tipo de infraccion: ";
	    int tipo;
	    cin>>tipo;
	    
	    
	    cout<<"Introduce el motivo de la infraccion: ";
	    string motivo;
	    cin>>motivo;
	    
	    
	    cout<<"Introduce el valor de la multa: ";
	    int valor;
	    cin>>valor;
	    
	    
	    cout<<"Introduce la gravedad de la infraccion: ";
	    string gravedad;
	    cin>>gravedad;
	    
	     if(gravedad == "G"){
    		valorTotalGravedadG += valor;
	    	if(tipo>2){
	    		contadorInfraccionesG++;
			}	
		}
	
		if(gravedad == "M"){
	    	valorTotalGravedadM += valor;
	    	
		}
	
		if(gravedad == "L"){
	    	valorTotalGravedadL += valor;
	    	
		}
	        
	   
	}
	
	if(contadorInfraccionesG>3){
		cout<<"Clausurar fabrica";
	}
	else{
	cout<<"El valor de las multas de gravedad L es: "<<valorTotalGravedadL<< "\n";
	cout<<"El valor de las multas de gravedad M es: "<<valorTotalGravedadM<<"\n";
	cout<<"El valor de las multas de gravedad G es: "<<valorTotalGravedadG<<"\n";
		}
		

	
}

   



   
	
     

	

