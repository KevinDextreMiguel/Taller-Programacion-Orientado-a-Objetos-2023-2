#include"VectorContacto.h"
int menu()
{
	int opc;
	cout << "\n1. Insetar dato";
	cout << "\n2. Eliminar dato";
	cout << "\n3. modificar dato";
	cout << "\n4. Contactos varones";
	cout << "\n5. Contactos que cumplen años en setiembre";
	cout << "\n6. Contactos con facebook y whatsApp()";
	cout << "\n7. Mostrar todo";
	do
	{
		cout << "\nOpcíon?: "; cin >> opc;
	} while (opc < 1 || opc>7); return opc;
}

int main()
{
	string NombreContacto;
	string Telefono;
	string Sexo;
	string Facultad;
	string MesNacimiento;
	string Email;
	string RedSocial;

	Contacto obj;
	VectorContacto objVector;
	int opc, posicion;
	while (true)
	{
		system("cls");
		opc = menu();
		switch (opc)
		{
		case 1:
			cout << "\nNombreContacto: ";cin>> NombreContacto;
			cout << "Telefono: " ;cin>>Telefono;
			cout << "Sexo: " ;cin>>Sexo;
			cout << "Facultad: " ;cin>>Facultad;
			cout << "MesNacimiento: " ;cin>>MesNacimiento;
			cout << "Email: " ;cin>>Email;
			cout << "RedSocial: " ;cin>>RedSocial;
			obj = Contacto(NombreContacto, Telefono, Sexo, Facultad, MesNacimiento, Email, RedSocial);
			objVector.insertar(obj);
			cout << "\nSe insertó correctamente";
			break;
		case 2:
			cout << "\nIngrese la posición: "; cin >> posicion;
			objVector.eliminar(posicion);
			cout << "\nSe eliminó correctamente";
			break;
		case 3:
			cout << "\nIngrese la posición: "; cin >> posicion;
			cout << "\nNombreContacto: "; cin >> NombreContacto;
			cout << "Telefono: "; cin >> Telefono;
			cout << "Sexo: "; cin >> Sexo;
			cout << "Facultad: "; cin >> Facultad;
			cout << "MesNacimiento: "; cin >> MesNacimiento;
			cout << "Email: "; cin >> Email;
			cout << "RedSocial: "; cin >> RedSocial;
			obj.set_NombreContacto(NombreContacto);
			obj.set_Telefono(Telefono);
			obj.set_Sexo(Sexo);
			obj.set_Facultad(Facultad);
			obj.set_MesNacimiento(MesNacimiento);
			obj.set_Email(Email);
			obj.set_RedSocial(RedSocial);
			objVector.modificar(posicion, obj);
			break;
		case 4: objVector.Contactos_varones(); break;
		case 5:objVector.Contactos_anios_setiembre(); break;
		case 6:objVector.Contactos_facebook_whatsApp(); break;
		case 7:objVector.imprimir_todos();
		}
		getch();
	}

	return 0;
}
