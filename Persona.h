#ifndef PERSONA_H
#define PERSONA_H

#include<string>
using namespace std;

class Persona{
	private:
	protected:
	public:
		virtual string getNombre()=0;
		virtual string getSexo()=0;
		virtual string getID()=0;
		virtual string getNacionalidad()=0;
		virtual string getEdad()=0;
		virtual void setNombre(string)=0;
		virtual void setSexo(string)=0;
		virtual void setID(string)=0;
		virtual void setNacionalidad(string)=0;
		virtual void setEdad(string)=0;
		virtual string getCarrera()=0;
		virtual string getUniversidad()=0;
		virtual string getNumero_Cuenta()=0;
		virtual string getAcademico()=0;
		virtual void setCarrera(string)=0;
		virtual void setUniversidad(string)=0;
		virtual void setNumero_Cuenta(string)=0;
		virtual void setAcademico(string)=0;
		virtual string getPuesto()=0;
		virtual void setPuesto(string)=0;
		virtual string getIdentificador()=0;
		virtual void setIndentificador(string)=0;
		virtual string getSalario()=0;
		virtual void setSalario(string)=0;
		virtual string getDuracion()=0;
		virtual void setDuracion(string)=0;
		virtual void setId_pasante(string)=0;
		virtual string getId_pasante()=0;

};

#endif