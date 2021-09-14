#include <iostream>
using namespace std;

/* Ejercicio 1 
int main(){
	int N;
	cout<<"Ingrese cantidad de valores que quiera del vector, tiene que ser menor a 30"<<endl;
	cin>>N;
	int Vec[N];
	int i;
	for(i=0;i<N;i++){
		Vec[i]=(i+1)*2;
		cout<<Vec[i]<<endl;
	}
	}
*/


/* Ejercicio 2
int main(){
	int N;
	cout<<"Ingrese cantidad de valores que quiera del vector, tiene que ser menor a 30"<<endl;
	cin>>N;
	int Vec[N];
	int i;
	for(i=0;i<N;i++){
		cout<<"Ingrese el valor que usted quiera"<<endl;
		cin>>Vec[i];
	}
	cout<<endl<<endl<<Vec[N-1]<<endl<<endl;
	if(Vec[N]<10){
	for(i=0;i<N;i++){
		if(Vec[i]<0){
			cout<<Vec[i]<<endl;
		}
		}
	}else{
		for(i=0;i<N;i++){
		if(Vec[i]>0){
			cout<<Vec[i]<<endl;
		}
	}
	}
}
*/

/* Ejercicio 3
int main(){
	int N,prod=1;
	cout<<"Ingrese cantidad de valores que quiera del vector, tiene que ser menor a 100"<<endl;
	cin>>N;
	int Vec[N];
	int i;
	int j=0;
	int p=0;
	int min=101;
	int posm[N];
	for(i=0;i<N;i++){
		cout<<"Ingrese un valor para el vector"<<endl;
		cin>>Vec[i];
		if((i+1%2)==0){
			if((Vec[i]%2)==1){
			prod=prod*Vec[i];
			}
		}
		
		if(Vec[i]<min){
			min=Vec[i];
		}
		
		if(i==N-1){
			Vec[i]=0;
		}
	}
	cout<<"El producto de los numeros impares en posiciones pares es: "<<prod<<endl;
	cout<<"El menor valor fue: "<<min<<endl<<"Y se encontro en las pocisiones: "<<endl;
	for(p=0;p<N;p++){
		if(Vec[p]==min){
		cout<<p<<endl;
		}
	}
	}
*/	

/* Ejercicio 4
int main(){
	int N,prod=1;
	cout<<"Ingrese cantidad de valores que quiera del vector, tiene que ser menor a 25"<<endl;
	cin>>N;
	int VecA[N];
	int VecB[N];
	int VecC[N];
	int VecD[N];
	for(i=0;i<N;i++){
	cout<<"Ingrese un valor para el vector"<<endl;
	cin>>VecA[i];
	}
	cout<<"Vamos con el otro vector"<<Endl:
	for(i=0;i<N;i++){
	cout<<"Ingrese un valor para el vector"<<endl;
	cin>>VecB[i];
	}
	cout<<"Vecto C"<<endl:
	for(i=0;i<N;i++){
	if((i%2)==1){
	VecC[i]=VecA[i];
	}
	if((i%2)==0){
	VecC[i]=VecB[i];
	}
	}
	cout<<"Vecto D"<<endl:
	for(i=0;i<N;i++){
	if(VecA[i]==VecB[i]){
	VecD[i]=0;
	}
	if(VecA[i]==VecB[i]){
	VecD[i]=1;
	}
	cout<<VecD[i]<<Endl;
	}
}
*/	


/* Ejercicio 5
int main(){
	int N=0;
	int prom;
	
	cout<<"Ingrese cantidad de valores que quiera del vector, tiene que ser entre 5 a 20"<<endl;
	cin>>N;
	
	int Vec[N];
	int i,h;
	for(i=0;i<N;i++){
		cout<<"Ingrese una temperatura que usted quiera"<<endl;
		cin>>Vec[i];
		prom=prom+Vec[i];
	}
	prom=prom/i;
	cout<<"El promedio de las temperaturas es: "<<prom<<endl;
	cout<<"Las temperaturas que pasan ese promedio son: "<<endl;
	for(h=0;h<N;h++){
		if(prom <= Vec[h]){
			cout<<Vec[h]<<endl;
		}
	}
	
}
*/


/* Ejercicio 6
int main(){
	int cs=1;
	int n,i,max=0;
	int cd[20]
	
	while(cs!=0){
	cout<<"Ingrese el codigo de deporte que quiere inscribirse"<<endl;
	cin>>n;
	cd[n]=cd[n]+1;
	cout<<"Ingrese el codigo de socio"<<endl;
	cin>>cs;
	}
	cout<<"La cantidad de inscriptos en cada deporte es: "<<endl;
	for(i=0;i<20;i++){
	cout<<"Deporte: "<<i+1<<" cantidad de inscriptos: "<<cd[i]<<endl;
	if(cd[i]>max){
		max=cd[i];
		n=i;
	}
	}
	cout<<"El deporte con mas incriptos es: "<<i;
	}	
*/

int main(){
	int N,Ca,i,j,p,k,No;
	cout<<"Ingrese cantidad de cursos a registrar"<<endl;
	cin>>N;
	int VecA[N];
	int VecD[N];
	int VecAu[N];
	while(i<N){
	cout<<"Ingrese cantidad de alumnos"<<endl;
	cin>>Ca;
		VecA[i]=0;
		VecAu[i]=0;
		VecD[i]=0;
		int VecN[10];
		for(k=0;k<10;k++){
			VecN[k]=0;
		}
		for(j=0;j<Ca;j++){
			cout<<"Ingrese nota del alumno: "<<j+1<<endl;
			cin>>No;
			switch(No){
				case 1:
					VecN[No+1]=VecN[No+1]+1;
					VecAu[i]=VecAu[i]+1;
				break;
				case 2:
					VecN[No+1]=VecN[No+1]+1;
					VecD[i]=VecD[i]+1;
				break;
				case 3:
					VecN[No+1]=VecN[No+1]+1;
					VecD[i]=VecD[i]+1;
				break;
				case 4:
					VecN[No+1]=VecN[No+1]+1;
					VecD[i]=VecD[i]+1;
				break;
				case 5:
					VecN[No+1]=VecN[No+1]+1;
					VecD[i]=VecD[i]+1;
				break;
				case 6:
					VecN[No+1]=VecN[No+1]+1;
					VecA[i]=VecA[i]+1;
				break;
				case 7:
					VecN[No+1]=VecN[No+1]+1;
					VecA[i]=VecA[i]+1;
				break;
				case 8:
					VecN[No+1]=VecN[No+1]+1;
					VecA[i]=VecA[i]+1;
				break;
				case 9:
					VecN[No+1]=VecN[No+1]+1;
					VecA[i]=VecA[i]+1;
				break;
				case 10:
					VecN[No+1]=VecN[No+1]+1;
					VecA[i]=VecA[i]+1;
				break;
				default:
				break;
			}
		}
	cout<<"El curso: "<<i+1<<" tuvo: "<<((VecA[i]*100)/Ca)<<"% de aprobados,"<<" y el de desaprobados es: "<<((VecAu[i]+VecD[i])*100)/Ca<<"%"<<endl;
	for(p=0;p<10;p++){
	cout<<"Los alumnos que se sacaron: "<<p+1<<" fueron: "<<VecN[p]<<endl;
	}
	i=i+1;
	}
}
	




