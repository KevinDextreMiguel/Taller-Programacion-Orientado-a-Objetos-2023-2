#pragma once
#include"Contrasenia.h"

class VectorContrasenias
{
public:
	VectorContrasenias();
	~VectorContrasenias();

	void generar_contrasenias();
	void imprimir();
private:
	vector<Contrasenia>contrasenias;
};

VectorContrasenias::VectorContrasenias()
{
}

VectorContrasenias::~VectorContrasenias()
{
}

void VectorContrasenias::generar_contrasenias()
{
	for (int i = 0; i < 10; i++)
	{
		Contrasenia obj;
		obj.generar();
		obj.es_segura();
		contrasenias.push_back(obj);
	}
}
void VectorContrasenias::imprimir()
{
	for (int i = 0; i < contrasenias.size(); i++)
		contrasenias[i].get_info();
}
