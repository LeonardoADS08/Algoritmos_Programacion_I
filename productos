#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

struct producto
{
	int IdProducto, stock;
	float precio;
	char nombre[30], estado;
};

void nuevoProducto()
{
	FILE *ptr;
	producto nuevoProducto;
	cout << "Introducir nombre:" << endl;
	do {
		gets(nuevoProducto.nombre);
		if (strlen(nuevoProducto.nombre) == 0) cout << "Ingrese un nombre" << endl;
	} while (strlen(nuevoProducto.nombre) == 0);

	cout << "Precio:" << endl;
	do {
		cin >> nuevoProducto.precio;
		if (nuevoProducto.precio < 1) cout << "Ingrese un precio valido (>1)" << endl;
	} while (nuevoProducto.precio < 0);

	cout << "Cantidad en stock:" << endl;

	do {
		cin >> nuevoProducto.stock;
		if (nuevoProducto.stock < 1) cout << "Ingrese un stock valido (>1)" << endl;
	} while (nuevoProducto.stock < 0);


	nuevoProducto.estado = 'A';
	ptr = fopen("producto.data", "ab");
	fwrite(&nuevoProducto, sizeof(producto), 1, ptr);
	fclose(ptr);
}

bool buscarProducto(int IdProducto, producto &busqueda)
{
	FILE *ptr = fopen("producto.data", "rb");
	producto busqueda.estado = 'I';
	if (ptr != NULL)
	{
		fseek(ptr, (IdProducto - 1) * sizeof producto, SEEK_SET);
		fread(&busqueda, sizeof producto, 1, ptr);
		if (busqueda.estado = 'A') return true;
		else cout << "El registro fue eliminado" << endl;
	}
	else cout << "El archivo no existe" << endl;
	return false;
}

void listarProductos()
{
	int n = 0;
	FILE *ptr = fopen("producto.data", "rb");
	producto reg;
	if (ptr != NULL)
	{
		cout << "=========================================================" << endl;
		cout << "\t ********* Lista de amigos ********* " << endl;
		cout << "---------------------------------------------------------" << endl;
		cout << "Nro.Reg		Nombre        Precio		Stock " << endl;
		cout << "=========================================================" << endl;

		fread(&reg, sizeof(reg), 1, ptr);
		while(!feof(ptr))
		{
			if (reg.estado = 'A') cout << ++n << "\t\t" << reg.nombre << "\t\t" << reg.precio << "\t\t" << reg.stock;
			cout << endl;
			fread(&reg, sizeof(producto), 1, ptr);
		}

		fclose(ptr);
	}
	else 
	{
		cout << "Archivo no existe" << endl;
	}
}

void main()
{
	//nuevoProducto();
	//listarProductos();
	producto res = buscarProducto(1);
	cout << res.nombre << endl;
	system("PAUSE");
}
