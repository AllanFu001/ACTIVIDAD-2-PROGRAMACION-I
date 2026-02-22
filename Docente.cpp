#include "Persona.cpp"
#include <iostream>

using namespace std;

class Docente : Persona {

private : string codigo,nit,profesion;
float salario;

public :
Docente (){
}
Docente (string c,string nom,string ape,string dir,string fn,int tel,bool gen,string cod,string n,string prof,float sal) : Persona (c,nom,ape,dir,fn,tel,gen){
	
	codigo = cod;
	nit = n;
	profesion = prof;
	salario = sal;
	
	
}

void setCodigo(string cod){codigo=cod;}
void setNit(string n){nit=n;}
void setProfesion(string prof){profesion=prof;}
void setSalario(float sal){salario=sal;}
void setCui(string c){cui=c;}
void setNombres(string nom){nombres=nom;}
void setApellidos(string ape){apellidos=ape;}
void setDireccion(string dir){direccion=dir;}
void setFechaNacimiento(string fn){fecha_nacimiento=cui;}
void setTelefono(int tel){telefono=tel;}
void setCui(bool gen){genero=gen;}



string getCodigo(){return codigo;}
string getNit(){return nit;}
string getProfesion(){return profesion;}
float getSalario(){return salario;}
string getCui(){return cui;}
string getNombres(){return nombres;}
string getApellidos(){return apellidos;}
string getDireccion(){return direccion;}
string getFechaNacimiento(){return fecha_nacimiento;}
int getTelefono(){return telefono;}
bool getGenero(){return genero;}



};


