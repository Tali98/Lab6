#include "Estudiantes.h"
#include<string>
#include<iostream>
using namespace std;


Estudiantes::Estudiantes(string pNombre,string pSexo,string pID,string pNacionalidad,string pEdad, string pCarrera, string pUniversidad, 
	string pNumero_Cuenta,string pAcademico,string pPuesto,string pIdentificador,string pSalario,string pDuracion){
//nombre sexo ID nacionalidad edad carrera uni numero_cuenta academico puesto identificador salario duracion
		nombre=pNombre;
		sexo=pSexo;
		ID=pID;
		nacionalidad=pNacionalidad;
		edad=pEdad;
		carrera=pCarrera;
		universidad=pUniversidad;
		numero_cuenta=pNumero_Cuenta;
		academico=pAcademico;
		puesto=pPuesto;
		identificador=pIdentificador;
		salario=pSalario;
		duracion=pDuracion;
}

string Estudiantes::getNombre(){
	return nombre;
}

void Estudiantes::setNombre(string pNombre){
	nombre = pNombre;
}

string Estudiantes::getSexo(){
	return sexo;
}

void Estudiantes::setSexo(string pSexo){
	sexo = pSexo;
}

string Estudiantes::getID(){
	return ID;
}

void Estudiantes::setID(string pID){
	ID = pID;
}

string Estudiantes::getNacionalidad(){
	return nacionalidad;
}

void Estudiantes::setNacionalidad(string pNacionalidad){
	nacionalidad=pNacionalidad;
}

string Estudiantes::getEdad(){
	return edad;
}

void Estudiantes::setEdad(string pEdad){
	edad = pEdad;
}

string Estudiantes::getCarrera(){
	return carrera;
}

void Estudiantes::setCarrera(string pCarrera){
	carrera = pCarrera;
}

string Estudiantes::getUniversidad(){
	return universidad;
}

void Estudiantes::setUniversidad(string pUniversidad){
	universidad = pUniversidad;
}

string Estudiantes::getNumero_Cuenta(){
	return numero_cuenta;
}

void Estudiantes::setNumero_Cuenta(string pNumero_Cuenta){
	numero_cuenta = pNumero_Cuenta;
}

string Estudiantes::getAcademico(){
	return academico;
}

void Estudiantes::setAcademico(string pAcademico){
	academico = pAcademico;
}

string Estudiantes::getPuesto(){
	return puesto;
}

void Estudiantes::setPuesto(string pPuesto){
	puesto = pPuesto;
}

string Estudiantes::getIdentificador(){
	return identificador;
}

void  Estudiantes::setIndentificador(string pIdentificador){
	identificador = pIdentificador;
}

string Estudiantes::getSalario(){
	return salario;
}

void Estudiantes::setSalario(string pSalario){
	salario = pSalario;
}

string Estudiantes::getDuracion(){
	return duracion;
}

void Estudiantes::setDuracion(string pDuracion){
	duracion = pDuracion;
}

string Estudiantes::getId_pasante(){
	return pasante;
}
void Estudiantes::setId_pasante(string pPasantes){
	pasante = pPasantes;
}