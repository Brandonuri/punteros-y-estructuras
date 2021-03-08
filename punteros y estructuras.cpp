#include<iostream>
using namespace std;
struct Estudiante{
	int codigo;
	string nombre;
	int nota;
};

main(){
	int fila=0,columna=0,**codigo;

cout<<"Cuantos Estudiantes Desea Ingresar: ";
cin>>fila;	
cout<<"Cuantas Notas Desea Ingresar: ";
cin>>columna;	
codigo = new  int *[fila];
for (int i=0;i<fila;i++){
codigo[i] = new int[columna]; 	
}
cout<<"--------------Ingrese Notas--------------"<<endl;
for (int i=0;i<fila;i++){
for (int ii=0;ii<columna;ii++){
Estudiante estudiante;
	cout<<"Ingrese Codigo: ";
	cin>>estudiante.codigo;
	cin.ignore();
	cout<<"Ingrese Nombre: ";
	getline(cin,estudiante.nombre);
	cout<<"Ingrese Nota: ";
	cin>>estudiante.nota;
	
	
		cout<<"------------------------------------"<<endl;


cout<<"--------------Mostrar Notas--------------"<<endl;
cout<<"Codigo: "<<estudiante.codigo<<" Estudiante:"<<estudiante.nombre<<" Nota:"<<estudiante.nota<<endl;
for (int i=0;i<fila;i++){
for (int ii=0;ii<columna;ii++){
	cout<<*(*(codigo+i)+ii)<<endl;
	}
	cout<<"------------------------------------"<<endl;
	
	system("PAUSE");

	
}
}
}
}
