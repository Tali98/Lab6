#ifndef ESTUDIANTES_H
#define ESTUDIANTES_H

#include "Persona.h"

#include<string>
using namespace std;

class Estudiantes:public Persona{
	private:
	protected:
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
		string pasante;
	public:
		Estudiantes(string,string,string,string,string,string,string,string,string,string,string,string,string);//nombre sexo ID nacionalidad edad carrera uni numero_cuenta academico puesto identificador salario duracion
		virtual string getNombre();
		virtual string getSexo();
		virtual string getID();
		virtual string getNacionalidad();
		virtual string getEdad();
		virtual void setNombre(string);
		virtual void setSexo(string);
		virtual void setID(string);
		virtual void setNacionalidad(string);
		virtual void setEdad(string);
		virtual string getCarrera();
		virtual string getUniversidad();
		virtual string getNumero_Cuenta();
		virtual string getAcademico();
		virtual void setCarrera(string);
		virtual void setUniversidad(string);
		virtual void setNumero_Cuenta(string);
		virtual void setAcademico(string);
		virtual string getPuesto();
		virtual void setPuesto(string);
		virtual string getIdentificador();
		virtual void setIndentificador(string);
		virtual string getSalario();
		virtual void setSalario(string);
		virtual string getDuracion();
		virtual void setDuracion(string);
		virtual void setId_pasante(string);
		virtual string getId_pasante();

};

#endif