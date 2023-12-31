#pragma once
#include"Triangulo.h"

class Contrasenia
{
public:
	Contrasenia();
	~Contrasenia();

	void generar();
	void es_segura();
	void get_info();
private:
	int longitud;
	string valor;
	string var;
};

Contrasenia::Contrasenia()
{
	longitud = rand() % 6 + 10;
	valor = "";
	var="F";
}

Contrasenia::~Contrasenia(){}

void Contrasenia::generar()
{
	char aux;
	// para trabajar en rangos
	//aux = rand() % (max - min + 1) + min;
	for (int i = 0; i < longitud; i++)
	{
		switch (rand() % 6)
		{
			case 1: case 2: case 3:
			aux = rand() % (57 - 49 + 1) + 49; break;
			case 4:
				aux = rand() % (122 - 97 + 1) + 97; break;
			case 5:
				aux = rand() % (90 - 65 + 1) + 65; 
		}
		valor += aux;
	}
}
void Contrasenia::es_segura()
{
	int mayuscula =0, minuscula=0, numeros=0;

	for (int i = 0; i < valor.length(); i++)
	{
		if (isdigit(valor[i]))numeros++;
		else if (isupper(valor[i]))mayuscula++;
		else minuscula++;
	}

	if (numeros > 5 && mayuscula > 2 && minuscula > 1)
		var = "V";
}

void Contrasenia::get_info()
{
	cout << "\n" << valor << ": " << var;
}
