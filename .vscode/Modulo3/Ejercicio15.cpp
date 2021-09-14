#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;



int main() {
	float matriznotas1[30][5];
	float matriznotas2[30][5];
	float matriznotas3[30][5];
	float matriznotas4[30][5];
	float matriznotas5[30][5];
	int notas[]={0,1,2,3,4,5,6,7,8,9,10};
    float promedio;

	
	for(int i=0;i<30;i++){
		for(int j=0;j<5;j++){
			matriznotas1[i][j]=notas[rand() % 10+1];
		    matriznotas2[i][j]=notas[rand() % 10+1];
	     	matriznotas3[i][j]=notas[rand() % 10+1];
			matriznotas4[i][j]=notas[rand() % 10+1];
			matriznotas5[i][j]=notas[rand() % 10+1];
		}
		for(int i=0;i<30;i++){
		for(int j=0;j<5;j++){
		cout<<"Notas del alumno:"<<endl;
		
		cout<<"La primer nota es: "<<matriznotas1[i][j]<<endl;
 	    
		cout<<"La segunda nota es: "<<matriznotas2[i][j]<<endl;
	    
		cout<<"La tercera nota es: "<<matriznotas3[i][j]<<endl;
		
		cout<<"La quarta nota es: "<<matriznotas4[i][j]<<endl;
		
		cout<<"La quinta nota es: "<<matriznotas5[i][j]<<endl;
	    
	    promedio=(matriznotas1[i][j]+matriznotas2[i][j]+matriznotas3[i][j]+matriznotas4[i][j]+matriznotas5[i][j])/5;
	    
	    cout<<"El promedio es: "<<promedio<<endl;
	    
	  
	}
		
	}
}
    return 0;
	
}
  










