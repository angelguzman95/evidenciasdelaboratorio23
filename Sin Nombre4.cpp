//incluir la libreria
#include<iostream>
/* utilizar todos los caracteres y funciones 
de la libreria
*/
using namespace std;
// funcion principal
int main(){
	// declarar variable 
	int a,b,c,d,e,suma,promedio;
	cout<<"bienvenido a este programa que dira tu promedio";
	cout<<"dime el primer promedio"<<endl;
	cin>>a;
	cout<<"dime el segundo promedio"<<endl;
	cin>>b;
	cout<<"dime el tercer promedio"<<endl;
	cin>>c;
	cout<<"dime el cuarto promedio"<<endl;
	cin>>d;
	cout<<"dime el quinto promedio"<<endl;
	cin>>e;
	promedio = (a+b+c+d+e)/5;
	cout<<"tu promedio general es de:"<<promedio<<endl;
	if(promedio >=7){
		cout<<"tu calificacion es aprobatoria"<<endl;
	{
	else {
		cout<<"lo lamento tu calificacion no es aprobatoria";
	}	
	cout<<"gracias por su tiempo en la aplicacion";
	return 0;
	
	
	
}
