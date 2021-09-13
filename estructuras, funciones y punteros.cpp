#include<iostream>
#include<string.h>
using namespace std;
struct Estudiante{
	int *codigo;
	string *nombre;
	int **pm_notas;
}estudiante;
void bd(int x, int y);
main (){
	int fila_estudiante=0,columna_notas=0;
	bd(fila_estudiante, columna_notas);
	return 0;
}

void bd(int x, int y){
	cout<<"Cuantos Estudiantes Desea Ingresar: ";
	cin>>x;	
	cout<<"Cuantas Notas Desea Ingresar: ";
	cin>>y;	
	estudiante.pm_notas = new  int *[x];
	estudiante.codigo = new int[x];
	estudiante.nombre = new string[x];
	for (int i=0;i<x;i++){
	estudiante.pm_notas[i] = new int[y]; 	
	}
	
	for (int j=0;j<x;j++){
	cout<<"Codigo de Estudiante: ";
	cin>>estudiante.codigo[j];
	cin.ignore();
	cout<<"Nombre Completo: ";
	getline(cin,estudiante.nombre[j]);
	
	for (int ii=0;ii<y;ii++){
	cout<<"Digite Nota"<<j + 1<<": ";
	cin>>*(*(estudiante.pm_notas+j)+ii);
	}
	cout<<"----------------"<<endl;
}

cout<<"--------------Mostrar Notas--------------"<<endl;
for (int i=0;i<x;i++){
cout<<"Codigo: "<<estudiante.codigo[i]<<" - Nombre: "<<estudiante.nombre[i]<<"."<<endl;
for (int ii=0;ii<y;ii++){
	cout<<"Nota ["<<ii + 1 <<"]: "
	<<*(*(estudiante.pm_notas+i)+ii);
	cout<<endl;
	}
		cout<<"------------------------------------"<<endl;
}
}
