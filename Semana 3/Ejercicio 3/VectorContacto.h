#pragma once
#include"Contacto.h"

class VectorContacto
{
public:
	VectorContacto();
	~VectorContacto();
	void insertar(Contacto objeto);
	void modificar(int pos, Contacto objeto);
	void eliminar(int pos);
	//reportes
	void Contactos_anios_setiembre();
	void Contactos_varones();
	void Contactos_facebook_whatsApp();
	void imprimir_todos();
private:
	vector<Contacto>Contactos;
};

VectorContacto::VectorContacto() {}
VectorContacto::~VectorContacto() {}

void VectorContacto::insertar(Contacto objeto)
{
	Contactos.push_back(objeto);
}
void VectorContacto::modificar(int pos, Contacto objeto)
{
	Contactos[pos] = objeto;
}
void VectorContacto::eliminar(int pos)
{
	Contactos.erase(Contactos.begin() + pos);
}
//reportes
void VectorContacto::Contactos_anios_setiembre()
{
	for (int i = 0; i < Contactos.size(); i++)
		if (Contactos[i].get_MesNacimiento() == "setiembre")
			Contactos[i].imprimir();
}
void VectorContacto::Contactos_varones()
{
	for (int i = 0; i < Contactos.size(); i++)
		if (Contactos[i].get_Sexo() == "m")
			Contactos[i].imprimir();
}
void VectorContacto::Contactos_facebook_whatsApp()
{
	for (int i = 0; i < Contactos.size(); i++)
		if (Contactos[i].get_RedSocial()=="facebook" || Contactos[i].get_RedSocial() == "whatsApp")
			Contactos[i].imprimir();
}
void VectorContacto::imprimir_todos()
{
	for (int i = 0; i < Contactos.size(); i++)
		Contactos.at(i).imprimir();//Contactos[i].imprimir();
}
