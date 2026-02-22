#include "Persona.cpp"
#include <iostream>

using namespace std;

class Estudiante : Persona{
	
	private : string carnet;
	
	public :
Estudiante(){
	}
	
  Estudiante (string c,string nom,string ape,string dir,string fn,int tel,bool gen,string car) :  Persona (c,nom,ape,dir,fn,tel,gen){
		carnet = car;
		
	}
	
void setCarnet (string car){carnet=car;}
void setCui(string c){cui=c;}
void setNombres(string nom){nombres=nom;}
void setApellidos(string ape){apellidos=ape;}
void setDireccion(string dir){direccion=dir;}
void setFechaNacimiento(string fn){fecha_nacimiento=cui;}
void setTelefono(int tel){telefono=tel;}
void setCui(bool gen){genero=gen;}

string getCarnet (){return carnet;}
string getCui(){return cui;}
string getNombres(){return nombres;}
string getApellidos(){return apellidos;}
string getDireccion(){return direccion;}
string getFechaNacimiento(){return fecha_nacimiento;}
int getTelefono(){return telefono;}
bool getGenero(){return genero;}
	
	
	
};
