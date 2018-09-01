#include "Empresa.h"

#include<string>
#include<vector>
#include<iostream>
using namespace std;


Empresa::Empresa(string pNombre , string pCreacion , string pRubro, string pPermiso,string pDueno,string pType){
	nombre = pNombre;
	creacion = pCreacion;
	rubro = pRubro;
	permiso = pPermiso;
	dueno = pDueno;
	type = pType;
}

string Empresa::getNombre(){
	return nombre;
}

string Empresa::getCreacion(){
	return creacion;
}

string Empresa::getRubro(){
	return rubro;
}

string Empresa::getPermiso(){
	return permiso;
}

string Empresa::getDueno(){
	return dueno;
}

string Empresa::getIngresos(){
	return ingresos;
}

string Empresa::getDepartamentos(){
	return departamentos;
}

string Empresa::getRTN(){
	return RTN;
}

string Empresa::getVice(){
	return vice;
}

string Empresa::getProveedores(){
	return proveedores;
}

void Empresa::setNombre(string pNombre){
	nombre = pNombre;
}

void Empresa::setCreacion(string pCreacion){
	creacion = pCreacion;
}

void Empresa::setRubro(string pRubro){
	rubro = pRubro;
}

void Empresa::setPermiso(string pPermiso){
	permiso = pPermiso;
}

void Empresa::setDueno(string pDueno){
	dueno = pDueno;
}

void Empresa::setIngresos(string pIngresos){
	ingresos = pIngresos;
}

void Empresa::setDepartamentos(string pDepartamentos){
	departamentos = pDepartamentos;
}

void Empresa::setRTN(string pRTN){
	RTN = pRTN;
}

void Empresa::setVice(string pVice){
	vice = pVice;
}

void Empresa::setProveedores(string pProveedores){
	proveedores = pProveedores;
}

void Empresa::addEmpleados(Estudiantes* pEstudiante){
	empleados.push_back(pEstudiante);
	cout<<"EXITO";
}

vector<Estudiantes*> Empresa::getEmpleados(){
	return empleados;
}


string Empresa::getType(){
	return type;
}

void Empresa::setType(string pType){
	type = pType;
}

void Empresa::eliminarEmpleados(int pNum){
	delete empleados[pNum];
}

void Empresa::seeEmpleados(){
	cout<<321;
	for(int a = 0 ; a < empleados.size() ; a++ ){
		cout<<a<<". "<<empleados[a]->getNombre()<<endl;
	}
	cout<<3212;
}

Estudiantes* Empresa::getEmpleado2(int a){
	return empleados[a];
}