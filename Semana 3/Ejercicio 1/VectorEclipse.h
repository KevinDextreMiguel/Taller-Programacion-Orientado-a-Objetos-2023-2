#pragma once
#include"Eclipse.h"
#include<vector>

class VectorEclipse
{
public:
	VectorEclipse();
	~VectorEclipse();
	void insertar(Eclipse objeto);
	void modificar(int pos, Eclipse objeto);
	void eliminar(int pos);
	//reportes
	void eclipses_visibles_europa();
	void eclipses_con_sismos();
	void eclipses_lunares();
	void imprimir_todos();
private:
	vector<Eclipse>eclipses;
};

VectorEclipse::VectorEclipse(){}
VectorEclipse::~VectorEclipse(){}

void VectorEclipse::insertar(Eclipse objeto)
{
	eclipses.push_back(objeto);
}
void VectorEclipse::modificar(int pos, Eclipse objeto)
{
	eclipses[pos] = objeto;
}
void VectorEclipse::eliminar(int pos)
{
	eclipses.erase(eclipses.begin() + pos);
}
//reportes
void VectorEclipse::eclipses_visibles_europa()
{
	for (int i = 0; i < eclipses.size(); i++)
		if(eclipses[i].get_Visibilidad()=="Europa")
			eclipses[i].imprimir();
}
void VectorEclipse::eclipses_con_sismos()
{
	for (int i = 0; i < eclipses.size(); i++)
		if (eclipses[i].get_Sismos() == "si")
			eclipses[i].imprimir();
}
void VectorEclipse::eclipses_lunares()
{
	for (int i = 0; i < eclipses.size(); i++)
		if (eclipses[i].get_TipoEclipse() == "lunar")
			eclipses[i].imprimir();
}
void VectorEclipse::imprimir_todos()
{
	for (int i = 0; i < eclipses.size(); i++)
		eclipses.at(i).imprimir();//eclipses[i].imprimir();
}
