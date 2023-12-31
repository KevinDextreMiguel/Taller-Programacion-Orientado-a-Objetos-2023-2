#include"VectorEclipse.h"
int menu()
{
	int opc;
	cout << "\n1. Insetar dato";
	cout << "\n2. Eliminar dato";
	cout << "\n3. modificar dato";
	cout << "\n4. Eclipses visbles en Europa";
	cout << "\n5. Eclipses con sismos";
	cout << "\n6. Eclipses lunares";
	cout << "\n7. Mostrar todo";
	do
	{
		cout << "\nOpcíon?: "; cin >> opc;
	} while (opc < 1 || opc>7); return opc;
}


int main()
{
	setlocale(LC_ALL, "spanish");
	string TipoEclipse;
	string Fecha;
	string Hora;
	string Sismos;
	string Lluvias;
	string Visibilidad;

	Eclipse objEclipse;
	VectorEclipse objeVector;
	int opc, posicion;
	while (true)
	{
		system("cls");
		opc = menu();
		switch (opc)
		{
		case 1:
			cout << "TipoEclipse: "; cin >> TipoEclipse;
			cout << "Fecha: "; cin >> Fecha;
			cout << "Hora: "; cin >> Hora;
			cout << "Sismos: "; cin >> Sismos;
			cout << "Lluvias: "; cin >> Lluvias;
			cout << "Visibilidad: "; cin >> Visibilidad;
			objEclipse = Eclipse(TipoEclipse, Fecha, Hora, Sismos, Lluvias, Visibilidad);
			objeVector.insertar(objEclipse);
			cout << "\nSe insertó correctamente";
			break;
		case 2:
			cout << "\nIngrese la posición: "; cin >> posicion;
			objeVector.eliminar(posicion);
			cout << "\nSe eliminó correctamente";
			break;
		case 3:
			cout << "\nIngrese la posición: "; cin >> posicion;
			cout << "TipoEclipse: "; cin >> TipoEclipse;
			cout << "Fecha: "; cin >> Fecha;
			cout << "Hora: "; cin >> Hora;
			cout << "Sismos: "; cin >> Sismos;
			cout << "Lluvias: "; cin >> Lluvias;
			cout << "Visibilidad: "; cin >> Visibilidad;
			objEclipse.set_TipoEclipse(TipoEclipse);
			objEclipse.set_Fecha(Fecha);
			objEclipse.set_Hora(Hora);
			objEclipse.set_Sismos(Sismos);
			objEclipse.set_Lluvias(Lluvias);
			objEclipse.set_Visibilidad(Visibilidad);
			objeVector.modificar(posicion, objEclipse);
			break;
		case 4: objeVector.eclipses_visibles_europa(); break;
		case 5:objeVector.eclipses_con_sismos(); break;
		case 6:objeVector.eclipses_lunares(); break;
		case 7:objeVector.imprimir_todos();
		}
		getch();
	}

	return 0;
}
