#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

struct regAmigo
{
	char nombre[30], sexo, estado;
	int edad;
};

void nuevoAmigo()
{
	FILE *ptr;
	regAmigo reg;
	cout << "Introducir nombre:" << endl;

	do {
		gets(reg.nombre);
		if (strlen(reg.nombre) == 0) cout << "Ingrese un nombre" << endl;
	} while (strlen(reg.nombre) == 0);

	cout << "Edad:" << endl;
	do {
		cin >> reg.edad;
		if (reg.edad < 1 || reg.edad > 100) cout << "Ingrese una edad valida (0-100) " << endl;
	} while (reg.edad < 0 || reg.edad >= 100);

	cout << "Sexo <F/M>:" << endl;

	do {
		cin >> reg.sexo;
		reg.sexo = toupper(reg.sexo);
		if (reg.sexo != 'F' && reg.sexo != 'M') cout << "Ingrese una ocion valida (F/M)" << endl;
	} while (reg.sexo != 'F' && reg.sexo != 'M');

	reg.estado = 'A';
	ptr = fopen("amigos.data", "ab");
	fwrite(&reg, sizeof(regAmigo), 1, ptr);
	fclose(ptr);
}

void listarAmigos()
{
	int n = 0;
	FILE *ptr = fopen("amigos.data", "rb");
	regAmigo reg;
	if (ptr != NULL)
	{
		cout << "=========================================================" << endl;
		cout << "\t ********* Lista de amigos ********* " << endl;
		cout << "---------------------------------------------------------" << endl;
		cout << "Nro.Reg    Nombre               Edad         Sexo " << endl;
		cout << "=========================================================" << endl;

		fread(&reg, sizeof(reg), 1, ptr);
		while(!feof(ptr))
		{
			if (reg.estado = 'A') cout << ++n << "\t" << reg.nombre << "\t\t" << reg.edad << "\t\t" << reg.sexo;
			cout << endl;
			fread(&reg, sizeof(reg), 1, ptr);
		}

		fclose(ptr);
	}
	else 
	{
		cout << "Archivo no existe" << endl;
	}
}

void busquedaAmigo(int id)
{
	int n = 0;
	FILE *ptr = fopen("amigos.data", "rb");
	regAmigo reg;
	if (ptr != NULL)
	{

		fseek(ptr, (id - 1) * sizeof(reg), SEEK_SET);
		fread(&reg, sizeof(reg), 1, ptr);
		if (!feof(ptr))
		{
			if (reg.estado = 'A') 
			{
				cout << "=========================================================" << endl;
				cout << "\t ********* Busqueda de amigos ********* " << endl;
				cout << "---------------------------------------------------------" << endl;
				cout << "Nro.Reg    Nombre               Edad         Sexo " << endl;
				cout << "=========================================================" << endl;
				cout << id << "\t" << reg.nombre << "\t\t" << reg.edad << "\t\t" << reg.sexo << endl;
			}
			else cout << "Registro Eliminado" << endl;
			fread(&reg, sizeof(reg), 1, ptr);
		}
		else cout << "El registro no existe" << endl;

		fclose(ptr);
	}
	else 
	{
		cout << "Archivo no existe" << endl;
	}
}

void modificarAmigo(int id)
{
	int n = 0;
	FILE *ptr = fopen("amigos.data", "rb+");
	regAmigo reg;
	if (ptr != NULL)
	{
		fseek(ptr, (id - 1) * sizeof(reg), SEEK_SET);
		fread(&reg, sizeof(reg), 1, ptr);
		if (!feof(ptr))
		{
			if (reg.estado = 'A') 
			{
				cout << "=========================================================" << endl;
				cout << "\t ********* Busqueda de amigos ********* " << endl;
				cout << "---------------------------------------------------------" << endl;
				cout << "Nro.Reg    Nombre               Edad         Sexo " << endl;
				cout << "=========================================================" << endl;
				cout << id << "\t" << reg.nombre << "\t\t" << reg.edad << "\t\t" << reg.sexo << endl;
				cout << endl << endl << "Esta seguro que desea modificar el registro? " << endl << "1.- Confirmar" << endl << "2.- Cancelar" << endl;
				cin >> n;
				cin.ignore();
				if (n == 1)
				{
					cout << "Nombre:" << endl;
					do {
						gets(reg.nombre);
						if (strlen(reg.nombre) == 0) cout << "Ingrese un nombre" << endl;
					} while (strlen(reg.nombre) == 0);

					cout << "Edad:" << endl;
					do {
						cin >> reg.edad;
						if (reg.edad < 1 || reg.edad > 100) cout << "Ingrese una edad valida (0-100) " << endl;
					} while (reg.edad < 0 || reg.edad >= 100);

					cout << "Sexo <F/M>:" << endl;
					do {
						cin >> reg.sexo;
						reg.sexo = toupper(reg.sexo);
						if (reg.sexo != 'F' && reg.sexo != 'M') cout << "Ingrese una ocion valida (F/M)" << endl;
					} while (reg.sexo != 'F' && reg.sexo != 'M');
					fseek(ptr, (id - 1) * sizeof(reg), SEEK_SET);					
					fwrite(&reg, sizeof(regAmigo), 1, ptr);	
				}
				else cout << "No se ha hecho ningun cambio" << endl;
			}
			else cout << "Registro Eliminado" << endl;
		}
		else cout << "El registro no existe" << endl;

		fclose(ptr);
	}
	else 
	{
		cout << "Archivo no existe" << endl;
	}
}

void estadisticaAmigos()
{
	
	float promedioG = 0, promedioF = 0, promedioM = 0;
	int cantG = 0, cantF = 0, cantM = 0;
	FILE *ptr = fopen("amigos.data", "rb");
	regAmigo reg;
	if (ptr != NULL)
	{
		fread(&reg, sizeof(reg), 1, ptr);
		while(!feof(ptr))
		{
			++cantG;
			promedioG += reg.edad;
			if (reg.sexo == 'F')
			{
				++cantF;
				promedioF += reg.edad;			
			}
			if (reg.sexo == 'M')
			{
				++cantM;
				promedioM += reg.edad;
			}
			fread(&reg, sizeof(reg), 1, ptr);
		}
		promedioG /= float(cantG);
		cout << "Promedio general: " << promedioG << endl;

		if (cantF != 0) 
		{
			promedioF /= float(cantF);
			cout << "Promedio Femenino: " << promedioF << endl;
		}
		else cout << "No existe ninguna amiga" << endl;

		if (cantM != 0)
		{
			promedioM /= float(cantM);
			cout << "Promedio Masculino: " << promedioM << endl;
		}
		else cout << "No existe ningun amigo" << endl;

		fclose(ptr);
	}
	else 
	{
		cout << "Archivo no existe" << endl;
	}
}

void main()
{
	int op, n;
	do
	{
		system("CLS");
		cout << "1. Nuevo amigo" << endl;
		cout << "2. Mostrar amigos" << endl;
		cout << "3. Estadistica" << endl;
		cout << "4. Buscar amigos por id" << endl;
		cout << "5. Modificar amigo por id" << endl;
		cout << "6. Salir" << endl;
		cin >> op;
		switch (op)
		{
			case 1:
				nuevoAmigo();
				break;
			case 2:
				listarAmigos();
				system("PAUSE");
				break;
			case 3:
				estadisticaAmigos();
				system("PAUSE");				
				break;
			case 4:
				cout << "Ingrese el id a buscar" << endl;
				cin >> n;
				busquedaAmigo(n);
				system("PAUSE");
				break;
			case 5:
				cout << "Ingrese el id a buscar" << endl;
				cin >> n;
				modificarAmigo(n);
				system("PAUSE");
				break;	
			case 6:
				cout << "Saliendo" << endl;
				break;
			default: 
				cout << "Opcion invalida" << endl;
				system("PAUSE");
				break;
		}	
	} while (op != 6);
	system("PAUSE");
}
