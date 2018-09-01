#include "Persona.h"
#include "Estudiantes.h"
#include "Empresa.h"

#include<string>
#include<iostream>
#include<vector>
using namespace std;

//crear estudiante
Estudiantes* crearEstudiante();
Empresa* crearEmpresa();
int ImprimirLista(vector<Estudiantes*> pVector);
int ImprimirLista(vector<Empresa*> pVector);
void ImprimirEmpresas(vector<Empresa*> pVector);
void ImprimirEliminados(vector<Estudiantes*> pVector);

int main(){
	vector<Estudiantes*>eliminados;
	vector<Estudiantes*>lista;
	vector<Empresa*>lista_empresa;
	cout<<"MENU"<<endl;
	cout<<"1. Crear Estudiante \n";
	cout<<"2. Crear Empresa \n";
	cout<<"3. Anadir Estudiantes a Empresas \n";
	cout<<"4. Agregar Proveedores \n";
	cout<<"5. Eliminar Empleado \n";
	cout<<"6. Mostrar Info Empresa \n";
	cout<<"7. Mostrar Info Deleted \n";
	int menu=0;
	cin>>menu;
	while(menu>0 && menu<8){
		switch (menu){
			case 1:{
				Estudiantes* estudiante = crearEstudiante();
				lista.push_back(estudiante);


				break;
			}
			case 2:{
				Empresa* empresa = crearEmpresa();
				lista_empresa.push_back(empresa);
				break;
			}
			case 3:{
				int elected = ImprimirLista(lista);
				int selected = ImprimirLista(lista_empresa);
				cout<<"Quiere que el estudiante sea 1.Empleado o 2.Pasante(numero)\n";
				int lugar=0;
				cin>>lugar;
				Estudiantes* estudiante = lista[elected];
				if(lugar==1){
					estudiante->setPuesto("Empleado");
					cout<<"Ingrese identificador del empleado: \n";
					string identificador;
					cin>>identificador;
					cout<<"Ingrese el salario: \n";
					string salario;
					cin>>salario;
					estudiante->setIndentificador(identificador);
					estudiante->setSalario(salario);
					lista_empresa[selected]->addEmpleados(estudiante);
				}else{
					estudiante->setPuesto("Pasante");
					cout<<"Ingrese id pasante del empleado: \n";
					string identificador;
					cin>>identificador;
					cout<<"Ingrese el duracion: \n";
					string salario;
					cin>>salario;
					estudiante->setId_pasante(identificador);
					estudiante->setDuracion(salario);
					lista_empresa[selected]->addEmpleados(estudiante);
				}
				delete lista[elected];
				break;
			}
			case 4:{
				cout<<"Ingrese nuevo proveedor: \n";
				string provider;
				cin>>provider;
				int selected = ImprimirLista(lista_empresa);
				provider = provider+" "+lista_empresa[selected]->getProveedores();
				lista_empresa[selected]->setProveedores(provider);
				break;
			}
			case 5:{
				
				int selected = ImprimirLista(lista_empresa);
				cout<<lista_empresa.size()<<endl;
				cout<<lista_empresa[0]<<endl;
				lista_empresa[0]->seeEmpleados();
				cout<<"CUAL DESEA ELIMINAR? \n";
				int elected;
				cin>>elected;
				Estudiantes* fire = lista_empresa[selected]->getEmpleado2(elected);
				eliminados.push_back(fire);
				lista_empresa[selected]->eliminarEmpleados(elected);
				
				break;
			}
			case 6:{
				cout<<"EMPRESAS: \n";
				ImprimirEmpresas(lista_empresa);
				break;
			}
			case 7:{
				cout<<"ELIMINADOS: \n";
				ImprimirEliminados(eliminados);
			}
		}
		cout<<"1. Crear Estudiante \n";
		cout<<"2. Crear Empresa \n";
		cout<<"3. Anadir Estudiantes a Empresas \n";
		cout<<"4. Agregar Proveedores \n";
		cout<<"5. Eliminar Empleado \n";
		cout<<"6. Mostrar Info Empresa \n";
		cout<<"7. Mostrar Info Deleted \n";
		menu=0;
		cin>>menu;
	}
	lista.clear();
	lista_empresa.clear();
	eliminados.clear();
	return 0;
}

Estudiantes* crearEstudiante(){
	string nombre;
	string sexo;
	string ID;
	string nacionalidad;
	string edad;
	string carrera;
	string universidad;
	string numero_cuenta;
	string academico;
	string puesto;
	string identificador;
	string salario;
	string duracion;
	cout<<"Ingrese el nombre de el estudiante: \n";
	cin>>nombre;
	cout<<"Ingrese su sexo: \n";
	cin>>sexo;
	cout<<"Ingrese su ID: \n";
	cin>>ID;
	cout<<"Ingrese su nacionalidad: \n";
	cin>>nacionalidad;
	cout<<"Ingrese su edad: \n";
	cin>>edad;
	cout<<"Ingrese su carrera: \n";
	cin>>carrera;
	cout<<"Ingrese su universidad: \n";
	cin>>universidad;
	cout<<"Ingrese su numero de cuenta: \n";
	cin>>numero_cuenta;
	cout<<"Ingrese su indice academico: \n";
	cin>>academico;
	Estudiantes* estudiante = new Estudiantes(nombre,sexo,ID,nacionalidad,edad,carrera,universidad,numero_cuenta,academico,"","","","");
	return estudiante;
}

int ImprimirLista(vector<Estudiantes*> pVector){
	int elected;
	for (int a = 0; a < pVector.size();a++){
		cout<<a<<". Nombre: "<<pVector[a]->getNombre()<<" ID: "<<pVector[a]->getID()<<endl;
	}
	cout<<"A quien desea ingresar/eliminar(numero porfavor): \n ";
	cin>>elected;
	return elected;
}

Empresa* crearEmpresa(){
	string nombre;
	string creacion;
	string rubro;
	string permiso;
	string dueno;
	string type;
	cout<<"Ingrese nombre empresa: \n";
	cin>>nombre;
	cout<<"Ingrese creacion empresa: \n";
	cin>>creacion;
	cout<<"Ingrese rubro empresa: \n";
	cin>>rubro;
	cout<<"Ingrese permiso empresa: \n";
	cin>>permiso;
	cout<<"Ingrese dueno empresa: \n";
	cin>>dueno;
	type = "MICROEMPRESA";
	Empresa* empresa = new Empresa(nombre,creacion,rubro,permiso,dueno,type);
	return empresa;
}

int ImprimirLista(vector<Empresa*> pVector){
	int elected;
	for (int a = 0; a < pVector.size();a++){
		cout<<a<<". Nombre: "<<pVector[a]->getNombre()<<" Rubro: "<<pVector[a]->getRubro()<<endl;
	}
	cout<<"A donde desea ingresar/eliminar ese empleado/proveedor: \n ";
	cin>>elected;
	return elected;
}

void ImprimirEmpresas(vector<Empresa*> pVector){
	for(int a = 0 ; a < pVector.size();a++){
		cout<<"Nombre: "<<pVector[a]->getNombre()<<" Rubro: "<<pVector[a]->getRubro()<<" Tamano: "<<pVector.size()<<endl;
	}
}

void ImprimirEliminados(vector<Estudiantes*> pVector){
	for (int a = 0; a < pVector.size();a++){
		cout<<a<<". Nombre: "<<pVector[a]->getNombre()<<" ID: "<<pVector[a]->getID()<<endl;
	}
}