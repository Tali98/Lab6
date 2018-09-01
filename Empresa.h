#ifndef EMPRESA_H
#define EMPRESA_H

#include "Persona.h"
#include "Estudiantes.h"

#include<string>
#include<vector>
using namespace std;

class Empresa{
	private:
		string nombre;
		string creacion;
		string rubro;
		string permiso;
		string dueno;
		string ingresos;
		string departamentos;
		string RTN;
		string vice;
		string proveedores;
		string type;
		vector<Estudiantes*>empleados;
	public:
		Empresa(string,string,string,string,string,string);//nombre.creacion.rubro.permiso
		string getNombre();
		string getCreacion();
		string getRubro();
		string getPermiso();
		string getDueno();
		string getIngresos();
		string getDepartamentos();
		string getRTN();
		string getVice();
		string getProveedores();
		string getType();
		void setType(string);
		void setNombre(string);
		void setCreacion(string);
		void setRubro(string);
		void setPermiso(string);
		void setDueno(string);
		void setIngresos(string);
		void setDepartamentos(string);
		void setRTN(string);
		void setVice(string);
		void setProveedores(string);
		void addEmpleados(Estudiantes*);
		vector<Estudiantes*> getEmpleados();
		void eliminarEmpleados(int);
		void seeEmpleados();
		Estudiantes* getEmpleado2(int);

};
#endif