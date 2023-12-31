#pragma once
#include<iostream>
#include<conio.h>
using namespace std;

class Eclipse
{
public:
	Eclipse();
	Eclipse(string TipoEclips,string Fecha,string Hora,
		string Sismos,string Lluvias,string Visibilidad);
	~Eclipse();

	//set
	void set_TipoEclipse(string TipoEclipse);
	void set_Fecha(string Fecha);
	void set_Hora(string Hora);
	void set_Sismos(string Sismos);
	void set_Lluvias(string Lluvias);
	void set_Visibilidad(string Visibilidad);

	//get
	string get_TipoEclipse();
	string get_Fecha();
	string get_Hora();
	string get_Sismos();
	string get_Lluvias();
	string get_Visibilidad();
	void imprimir();
private:
	string TipoEclipse;
	string Fecha;
	string Hora;
	string Sismos;
	string Lluvias;
	string Visibilidad;
};

Eclipse::Eclipse(){}
Eclipse::Eclipse(string TipoEclipse, string Fecha, string Hora,
	string Sismos, string Lluvias, string Visibilidad)
{
	this->TipoEclipse = TipoEclipse;
	this->Fecha= Fecha;
	this->Hora= Hora;
	this->Sismos= Sismos;
	this->Lluvias= Lluvias;
	this->Visibilidad= Visibilidad;
}
Eclipse::~Eclipse(){}


//set
void Eclipse::set_TipoEclipse(string TipoEclipse) { this->TipoEclipse = TipoEclipse; }
void Eclipse::set_Fecha(string Fecha) {this->Fecha = Fecha;}
void Eclipse::set_Hora(string Hora){ this->Hora = Hora; }
void Eclipse::set_Sismos(string Sismos){ this->Sismos = Sismos; }
void Eclipse::set_Lluvias(string Lluvias){ this->Lluvias = Lluvias; }
void Eclipse::set_Visibilidad(string Visibilidad){ this->Visibilidad = Visibilidad; }

//get
string Eclipse::get_TipoEclipse() { return TipoEclipse; }
string Eclipse::get_Fecha() { return Fecha; }
string Eclipse::get_Hora() { return Hora; }
string Eclipse::get_Sismos() { return Sismos; }
string Eclipse::get_Lluvias() { return Lluvias; }
string Eclipse::get_Visibilidad() { return Visibilidad; }

void Eclipse::imprimir()
{
	cout << "\n\tTipoEclipse: "<<TipoEclipse;
	cout<<"\tFecha: "<<Fecha;
	cout<<"\tHora: "<<Hora;
	cout<<"\tSismos: "<<Sismos;
	cout << "\tLluvias: "<<Lluvias;
	cout<<"\tVisibilidad: "<<Visibilidad;
}
