/// Bibliotecas y constantes
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include <iomanip>
#include <string.h>
#include <ctime>
#include <limits>

#undef max
const int N = 50, MAX = 100;

/// Estructuras
struct regProducto
{
	int idProd;
	char nombre[30];
	int stock;
	float precio;
	char estado;
};

struct regCliente
{
	int idCliente;
	char nombre[30];
	char email[80];
	char telefono[12];
	char nit[15];
	char estado;
};

struct regVendedor
{
	int idVend;
	char nombre[30];
	char email[80];
	char telefono[12];
	char estado;
};

struct regVenta
{
	int idVenta;
	char fecha[12];
	int cantidad;
	float precioUnit;
	int idProd;
	int idVend;
	int idCliente;
	char estado;
};

struct regCompra
{
	int idCompra;
	char fecha[12];
	int cantidad;
	int idProd;
	char estado;
};

using namespace std;

/// Prototipos de funciones
void archivo_producto();
void archivo_cliente();
void archivo_vendedor();
void archivo_venta();
void archivo_compra();

regCompra obtenerCompra(int id);
regCliente obtenerCliente(int id);
regVendedor obtenerVendedor(int id);
regProducto obtenerProducto(int id);

bool ventaRelacionadaProducto(int idProd);
bool compraRelacionadaProducto(int idProd);
bool ventaRelacionadaCliente(int idCliente);
bool ventaRelacionadaVendedor(int idVend);
bool eliminarCompraPosible(int idCompra);

bool verif_solo_numeros(char cad[]);
bool verif_solo_letras(char cad[]);
bool validarnombre(char cad[30]);
bool validaremail(char cad[30]);
int chartotint(char a[30]);
void ValidarFecha();
int FechaAnho();
int FechaMes();
int FechaDia();
bool verificar_fecha(char fecha[12]);
int leerNumeros();
float leerDecimales();
void numLiteral(int n);
void numLiteralChar(int n, char v[]);

bool existeProducto(int n);
bool existeVendedor(int n);
bool existeCliente(int n);
bool existeCompra(int id);
bool existeVenta(int id);

void AumentaStockProducto(int cantidad, int prod);
bool ReducirStockProducto(int cantidad, int prod);

int GenerarIdProd();
void nombreProducto(char nom[20]);

int GenerarIdCliente();
int IdCliente();
void nombreCliente(char nom[30]);
void emailCliente(char nom[80]);
void telefonoCliente(char nom[12]);
void nitCliente(char nom[30]);

int GenerarIdVendedor();
int idVendedor();
void nombreVendedor(char nom[30]);
void emailVendedor(char nom[80]);
void telefonoVendedor(char nom[12]);

int GenerarIdVenta();
int cantidadVenta();
void precioUnitVenta(float n);

int GenerarIdCompra();
void generar_fecha(char cad[12]);
int cantidadCompra();
void precioUnitVenta(float n);

void agregar_producto();
void agregar_cliente();
void agregar_vendedor();
void agregar_venta();
void agregar_compra();

void eliminar_producto();
void eliminar_cliente();
void eliminar_vendedor();
void eliminar_venta();
void eliminar_compra();

void modificar_producto();
void modificar_cliente();
void modificar_vendedor();
void modificar_venta();
void modificar_compra();

void mostrar_producto();
void mostrar_cliente();
void mostrar_vendedor();
void mostrar_venta();
void mostrar_compra();

void menu_producto();
void menu_cliente();
void menu_vendedor();
void menu_venta();
void menu_compra();
void menu_reportes();

void cargar_letra(char logo[][MAX], char c, int pos, int &width);
void mostrar(char mat[][MAX] , int n, int m);
void cargar_logo(char logo[][MAX], char pal[]);
void caratula();

void ventasEntreFechas();
void ventasEntreFechasTexto();
void ventasEntreFechasProducto(int idProd);
void ventasEntreFechasProductoTexto(int idProd);
void comprasEntreFechasProducto(int idProd);
void comprasEntreFechasProductoTexto(int idProd);
void comprasEntreFechas();
void comprasEntreFechasTexto();
void ventasEntreFechasCliente(int idCliente);
void ventasEntreFechasClienteTexto(int idCliente);

void cargar_letra(char logo[][MAX], char c, int pos, int &width);
void mostrar(char mat[][MAX] , int n, int m);
void cargar_logo(char logo[][MAX], char pal[]);
void caratula();

void main()
{
	system("color 2E");
	cout << endl;
	cout << "  	  ########  #### ######## ##    ## ##     ## ######## ##    ## #### ########   #######  " << endl;
	cout << "	  ##     ##  ##  ##       ###   ## ##     ## ##       ###   ##  ##  ##     ## ##     ## " << endl;
	cout << "	  ##     ##  ##  ##       ####  ## ##     ## ##       ####  ##  ##  ##     ## ##     ## " << endl;
	cout << "	  ########   ##  ######   ## ## ## ##     ## ######   ## ## ##  ##  ##     ## ##     ## " << endl;
	cout << "	  ##     ##  ##  ##       ##  ####  ##   ##  ##       ##  ####  ##  ##     ## ##     ## " << endl;
	cout << "	  ##     ##  ##  ##       ##   ###   ## ##   ##       ##   ###  ##  ##     ## ##     ## " << endl;
	cout << "	  ########  #### ######## ##    ##    ###    ######## ##    ## #### ########   #######  " << endl;
	cout << endl;
	cout << endl;
	caratula();
	system("pause");
	system("cls");
	system ("color F0");

	char opcion[20];
	int op;
	do
	{
		do
		{
			cout << "		Menu General		"<< endl;
			cout << " 1. Productos " << endl;
			cout << " 2. Clientes " << endl;
			cout << " 3. Vendedores " << endl;
			cout << " 4. Ventas " << endl;
			cout << " 5. Compras " << endl;
			cout << " 6. Reportes " << endl;
			cout << " 0. Salir " << endl;
			cout << "Ingrese la opcion: "; 
			gets(opcion);
			system("cls");
		} while (!verif_solo_numeros(opcion));
		op  = atoi(opcion);
		switch(op)
		{
		case 1: menu_producto(); break;
		case 2: menu_cliente(); break;
		case 3: menu_vendedor(); break;
		case 4: menu_venta(); break;
		case 5: menu_compra(); break;
		case 6: menu_reportes(); break;
		default: break;
		}
	} while(op != 0);
	getch();
}

// Caratula
//CARATULA
void cargar_letra(char logo[][MAX], char c, int pos, int &width)
{
	char b = '#';
	switch (c)
	{
		case 'u':
			width = 4;
			logo[0][pos] = b;
			logo[1][pos] = b;
			logo[2][pos] = b;
			logo[3][pos] = b;

			logo[4][pos] = b;
			logo[4][pos + 1] = b;
			logo[4][pos + 2] = b;


			logo[4][pos + 3] = b;

			logo[0][pos + 3] = b;
			logo[1][pos + 3] = b;
			logo[2][pos + 3] = b;
			logo[3][pos + 3] = b;
			break;

		case 'p':
			width = 4;
			logo[0][pos] = b;
			logo[1][pos] = b;
			logo[2][pos] = b;
			logo[3][pos] = b;
			logo[4][pos] = b;

			logo[0][pos + 1] = b;
			logo[0][pos + 2] = b;
			logo[2][pos + 1] = b;
			logo[2][pos + 2] = b;

			logo[0][pos + 3] = b;
			logo[1][pos + 3] = b;
			logo[2][pos + 3] = b;
			break;
		
		case 's':
			width = 3;
			logo[0][pos] = b;
			logo[0][pos + 1] = b;
			logo[0][pos + 2] = b;
			logo[0][pos + 3] = b;
			
			logo[2][pos] = b;
			logo[2][pos + 1] = b;
			logo[2][pos + 2] = b;
			logo[2][pos + 3] = b;

			logo[4][pos] = b;
			logo[4][pos + 1] = b;
			logo[4][pos + 2] = b;
			logo[4][pos + 3] = b;

			logo[1][pos] = b;
			logo[3][pos + 3] = b;

			break;

		case 'a':
			width = 4;
			logo[0][pos] = b;
			logo[1][pos] = b;
			logo[2][pos] = b;
			logo[3][pos] = b;
			logo[4][pos] = b;

			logo[0][pos + 3] = b;
			logo[1][pos + 3] = b;
			logo[2][pos + 3] = b;
			logo[3][pos + 3] = b;
			logo[4][pos + 3] = b;

			logo[0][pos + 1] = b;
			logo[0][pos + 2] = b;
			logo[2][pos + 1] = b;
			logo[2][pos + 2] = b;

			break;
	}
	width +=4 ; // para darle espacio entre letras.
}

void mostrar(char mat[][MAX] , int n, int m)
{
	for	(int i = 0; i < n; i++)
	{
		for	(int j = 0; j < m; j++)
		{
			cout << mat[i][j];
		}
		cout << endl;
	}
}

void cargar_logo(char logo[][MAX], char pal[])
{
	int pos = 40, width;

	for	(int i = 0; i < (int)strlen(pal); i++)
	{
		cargar_letra(logo, pal[i], pos, width);
		pos += width;
	}
}

void caratula()
{
	char logo[5][MAX];
	char barra[MAX][MAX];

	memset(logo,' ', sizeof(logo));
	cargar_logo(logo, "upsa");
	
	mostrar(logo, 5, 100);
}

/// Manejo de archivos
void archivo_producto()
{
	FILE *ptr;
	ptr = fopen("producto.dat","wb");
	fclose(ptr);
}

void archivo_cliente()
{
	FILE *ptr;
	ptr = fopen("cliente.dat","wb");
	fclose(ptr);
}

void archivo_vendedor()
{
	FILE *ptr;
	ptr = fopen("vendedor.dat","wb");
	fclose(ptr);
}

void archivo_venta()
{
	FILE*ptr;
	ptr=fopen("venta.dat","wb");
	fclose(ptr);
}

void archivo_compra()
{
	FILE*ptr;
	ptr=fopen("compra.dat","wb");
	fclose(ptr);
}

// Funciones para hacer busquedas

regCompra obtenerCompra(int id)
{
	regCompra reg;
	FILE *ptr = fopen("compra.dat", "rb");
	if(ptr != NULL)
	{
		fseek(ptr, (id - 1) * sizeof(reg), SEEK_SET);
		fread(&reg, sizeof(reg), 1, ptr);
		fclose(ptr);
	}
	return reg;
}

regCliente obtenerCliente(int id)
{
	regCliente reg;
	FILE *ptr = fopen("cliente.dat", "rb");
	if(ptr != NULL)
	{
		fseek(ptr, (id - 1) * sizeof(reg), SEEK_SET);
		fread(&reg, sizeof(reg), 1, ptr);
		fclose(ptr);
	}
	return reg;
}

regVendedor obtenerVendedor(int id)
{
	regVendedor reg;
	FILE *ptr = fopen("vendedor.dat", "rb");
	if(ptr != NULL)
	{
		fseek(ptr, (id - 1) * sizeof(reg), SEEK_SET);
		fread(&reg, sizeof(reg), 1, ptr);
		fclose(ptr);
	}
	return reg;
}

regProducto obtenerProducto(int id)
{
	regProducto reg;
	FILE *ptr = fopen("producto.dat", "rb");
	if(ptr != NULL)
	{
		fseek(ptr, (id - 1) * sizeof(reg), SEEK_SET);
		fread(&reg, sizeof(reg), 1, ptr);
		fclose(ptr);
	}
	return reg;
}

/// Validaciones de lectura
bool verif_solo_numeros(char cad[])
{
	bool k = true;
	int i = 0;
	while(i < strlen(cad) && k==true)
	{
		if((cad[i] >= '0') && (cad[i] <= '9')) 
			i++;
		else 
			k = false;
	}
	if (strlen(cad)==0) 
		k =  false;
	return k;
}

bool verif_solo_letras(char cad[])
{
	int i = 0;
	bool k = true;
	while(i < strlen(cad) && k == true)
	{
		if(isalpha(cad[i]) != 0 || cad[i] == ' ')
			i++;
		else
			k=false;
		if(cad[0]==' ')
			k=false;
	}
	return k;
}

bool validarnombre(char cad[30])
{
	int n = strlen(cad),i;
	for(i = 0; i < n; i++)
	{
		if(cad[i] != ' ' && cad[i] != -92 && cad[i] != -91)
			if(!((cad[i] > 96 && cad[i] < 123) || (cad[i] > 64 && cad[i] < 91)))
				return false;
	}
	return true;
}

bool validaremail(char cad[30])
{
	int n = strlen(cad), i ,arr = 0, punto = 0;
	for(i  =0; i < n; i++)
	{
		if(cad[i] != '@' && cad[i] != '.' && cad[i] != '_'&& cad[i] != '-')
			if(cad[i] != -92 && cad[i] != -91)
				if(!((cad[i] > 96 && cad[i] < 123) || (cad[i] > 64 && cad[i] < 91)))
					return false;
		if(cad[i] == '@')
			arr++;
		if(cad[i] == '.')
			punto++;
	}
	if(punto  >0)
		if(arr == 1)
			return true;
	return false;
}

int chartoint(char a[30])
{
	int n;
	sscanf(a,"%d",&n);
	return n;
}

void ValidarFecha()
{  
	int d, m, y;
	char dc[N], mc[N], yc[N];
	bool bisiesto = false;  
	do
	{
		cout << "Introduce el dia: ";  
		cin >> dc;
	} while(verif_solo_numeros(dc) == false);
	do
	{
		cout << "Introduce el mes: ";  
		cin >> mc; 
	} while (verif_solo_numeros(mc) == false);
	do
	{
		cout << "Introduce el año: ";  
		cin >> yc;
	} while(verif_solo_numeros(yc) == false);
	d = atoi(dc);
	m = atoi(mc);
	y = atoi(yc);
	//comprobamos si el año es bisiesto  
	if (y%4 == 0 && (y%100 != 100 || y%400 == 0))  
		bisiesto = true;  

	//comprobamos que los datos ingresados esten en un rango valido  
	if (d>0 && d<32 && m>0 && m<13 && y>0) {  
		if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)  
		{  
			cout << "\nFecha valida";  
		}  
		else  
		{  
			if(m==2 && d < 30 && bisiesto)  
				cout << "\nFecha valida";  
			else if(m==2 && d < 29 && !bisiesto)  
				cout << "\nFecha valida";  
			else if(m!=2 && d<31)  
				cout << "\nFecha valida";  
			else  
				cout << "\nFecha no valida";  
		}  
	}  
	else  
		cout << "\nFecha no valida";  
} 

int FechaAnho() 
{
	time_t tSac = time(NULL);  // instante actual
	struct tm* pt1 = localtime (&tSac);
	return((pt1->tm_year+1900));

}

int FechaMes()
{
	time_t tSac = time(NULL);  // instante actual
	struct tm* pt1 = localtime (&tSac);
	return((pt1->tm_mon+1));

}

int FechaDia() 
{
	time_t tSac = time(NULL);  // instante actual
	struct tm* pt1 = localtime (&tSac);
	return((pt1->tm_mday));

}

bool verificar_fecha(char fecha[12])
{
	bool k = false;
	char dia_cad[30],mes_cad[30],anho_cad[30];
	int dia,mes,anho;
	dia_cad[0] = fecha[0];
	dia_cad[1] = fecha[1];
	dia_cad[2] = '\0';
	mes_cad[0] = fecha[3];
	mes_cad[1] = fecha[4];
	mes_cad[2] = '\0';
	anho_cad[0] = fecha[6];
	anho_cad[1] = fecha[7];
	anho_cad[2] = fecha[8];
	anho_cad[3] = fecha[9];
	anho_cad[4] = '\0';
	if ((fecha[2] == '/') && (fecha[5] == '/'))
	{
		if (verif_solo_numeros(dia_cad) && verif_solo_numeros(mes_cad) && verif_solo_numeros(anho_cad))
		{
			dia = chartoint(dia_cad);
			mes = chartoint(mes_cad);
			anho = chartoint(anho_cad);
			if ((anho > 999) && (anho <= 9999))
			{
				if (mes ==1 || mes ==3 || mes ==5 || mes ==7 || mes ==8 || mes ==10 || mes ==12)
				{
					if((dia > 0) && (dia <= 31))
						k = true;
				}
				if (mes ==2 || mes ==4 || mes ==6 || mes ==9 || mes ==11)
				{
					if((dia>0)&&(dia<=30))
						k = true;
				}
				if (anho%4 == 0)
				{
					if (mes == 2)
					{
						if ((dia > 0 ) && (dia <= 29))
							k = true;
					}
				}
				else
				{
					if (mes == 2)
					{
						if ((dia > 0) && (dia <= 28))
							k = true;
					}
				}
			}
		}
	}
	if(!k || strlen(fecha) != 10)
	{
		k = false;
		cout << "\n Introducir la fecha [DD/MM/AAAA]: ";
	}
	return k;
}

int leerNumeros()
{
	char numero[200];
	if (cin.peek() == '\n') cin.ignore();
	do
	{
		gets(numero);
		if (!verif_solo_numeros(numero)) cout << "Ingrese un numero" << endl;
	} while (!verif_solo_numeros(numero));
	return atoi(numero);
}

float leerDecimales()
{
	float res;
    cin >> res;
    while (cin.fail())
    {
        cout << "Ingrese un valor valido" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');;
        cin >> res;
    }
    return res;
}

void numLiteral(int n)
{
	char v[1000];
	v[0] = '\0';
	bool milesimas = false, decenas = false;
	if (n / 1000 != 0) milesimas = true;
	int aux = n / 1000;
	n %= 1000;
	switch (aux)
	{
	case 1: strcat(v, "mil "); break;
	case 2: strcat(v, "dos mil "); break;
	case 3: strcat(v, "tres mil "); break;
	case 4: strcat(v, "cuatro mil "); break;
	case 5: strcat(v, "cinco mil "); break;
	case 6: strcat(v, "seis mil "); break;
	case 7: strcat(v, "siete mil "); break;
	case 8: strcat(v, "ocho mil "); break;
	case 9: strcat(v, "nueve mil "); break;
	default: break;
	}
	aux = n / 100;
	n %= 100;
	switch (aux)
	{
	case 1: if (!milesimas) strcat(v, "ciento ");
			else if (n == 0) strcat(v, "cien ");
			else strcat(v, "cientos ");
			break;
	case 2: strcat(v, "doscientos "); break;
	case 3: strcat(v, "trescientos "); break;
	case 4: strcat(v, "cuatrocientos "); break;
	case 5: strcat(v, "quinientos "); break;
	case 6: strcat(v, "seiscientos "); break;
	case 7: strcat(v, "sietecientos "); break;
	case 8: strcat(v, "ochocientos "); break;
	case 9: strcat(v, "nuevecientos "); break;
	default: break;
	}
	if (n / 10 != 0) decenas = true;
	aux = n / 10;
	n %= 10;
	switch (aux)
	{
	case 1: if (n == 0) strcat(v, "diez ");
			else if (n <= 5)
			{
				decenas = false;
				switch (n)
				{
				case 1: strcat(v, "once"); break;
				case 2: strcat(v, "doce"); break;
				case 3: strcat(v, "trece"); break;
				case 4: strcat(v, "catorce"); break;
				case 5: strcat(v, "quince"); break;
				default: break;
				}
				n = 0;
			}
			break;
	case 2: strcat(v, "veinte "); break;
	case 3: strcat(v, "treinta "); break;
	case 4: strcat(v, "cuarenta "); break;
	case 5: strcat(v, "cincuenta "); break;
	case 6: strcat(v, "sesenta "); break;
	case 7: strcat(v, "setenta "); break;
	case 8: strcat(v, "ochenta "); break;
	case 9: strcat(v, "noventa "); break;
	default: break;
	}
	aux = n;
	if (n < 5) decenas = false;
	if (decenas) strcat(v, "y ");
	switch (aux)
	{
	case 1: strcat(v, "uno "); break;
	case 2: strcat(v, "dos "); break;
	case 3: strcat(v, "tres "); break;
	case 4: strcat(v, "cuatro "); break;
	case 5: strcat(v, "cinco "); break;
	case 6: strcat(v, "seis "); break;
	case 7: strcat(v, "siete "); break;
	case 8: strcat(v, "ocho "); break;
	case 9: strcat(v, "nueve "); break;
	default: break;
	}
	cout << v ;
}

void numLiteralChar(int n, char v[])
{
	v[0] = '\0';
	bool milesimas = false, decenas = false;
	if (n / 1000 != 0) milesimas = true;
	int aux = n / 1000;
	n %= 1000;
	switch (aux)
	{
	case 1: strcat(v, "mil "); break;
	case 2: strcat(v, "dos mil "); break;
	case 3: strcat(v, "tres mil "); break;
	case 4: strcat(v, "cuatro mil "); break;
	case 5: strcat(v, "cinco mil "); break;
	case 6: strcat(v, "seis mil "); break;
	case 7: strcat(v, "siete mil "); break;
	case 8: strcat(v, "ocho mil "); break;
	case 9: strcat(v, "nueve mil "); break;
	default: break;
	}
	aux = n / 100;
	n %= 100;
	switch (aux)
	{
	case 1: if (!milesimas) strcat(v, "ciento ");
			else if (n == 0) strcat(v, "cien ");
			else strcat(v, "cientos ");
			break;
	case 2: strcat(v, "doscientos "); break;
	case 3: strcat(v, "trescientos "); break;
	case 4: strcat(v, "cuatrocientos "); break;
	case 5: strcat(v, "quinientos "); break;
	case 6: strcat(v, "seiscientos "); break;
	case 7: strcat(v, "sietecientos "); break;
	case 8: strcat(v, "ochocientos "); break;
	case 9: strcat(v, "nuevecientos "); break;
	default: break;
	}
	if (n / 10 != 0) decenas = true;
	aux = n / 10;
	n %= 10;
	switch (aux)
	{
	case 1: if (n == 0) strcat(v, "diez ");
			else if (n <= 5)
			{
				decenas = false;
				switch (n)
				{
				case 1: strcat(v, "once"); break;
				case 2: strcat(v, "doce"); break;
				case 3: strcat(v, "trece"); break;
				case 4: strcat(v, "catorce"); break;
				case 5: strcat(v, "quince"); break;
				default: break;
				}
				n = 0;
			}
			break;
	case 2: strcat(v, "veinte "); break;
	case 3: strcat(v, "treinta "); break;
	case 4: strcat(v, "cuarenta "); break;
	case 5: strcat(v, "cincuenta "); break;
	case 6: strcat(v, "sesenta "); break;
	case 7: strcat(v, "setenta "); break;
	case 8: strcat(v, "ochenta "); break;
	case 9: strcat(v, "noventa "); break;
	default: break;
	}
	aux = n;
	if (n < 5) decenas = false;
	if (decenas) strcat(v, "y ");
	switch (aux)
	{
	case 1: strcat(v, "uno "); break;
	case 2: strcat(v, "dos "); break;
	case 3: strcat(v, "tres "); break;
	case 4: strcat(v, "cuatro "); break;
	case 5: strcat(v, "cinco "); break;
	case 6: strcat(v, "seis "); break;
	case 7: strcat(v, "siete "); break;
	case 8: strcat(v, "ocho "); break;
	case 9: strcat(v, "nueve "); break;
	default: break;
	}
}


/// Funciones para verificar si existe un registro
bool existeProducto(int n)
{
	bool k = false;
	regProducto reg;
	FILE *ptr;
	ptr = fopen("producto.dat", "rb");
	if (ptr != NULL)
	{
		fread(&reg, sizeof(reg), 1, ptr);
		while ((feof(ptr) == false) && (k == false))
		{
			if(reg.idProd == n)
				k = true;
			fread(&reg, sizeof(reg), 1, ptr);
		}
		fclose(ptr);
	}
	else cout << "El archivo no existe " ;
	return k;
}

bool existeVendedor(int n)
{

	regVendedor reg;
	FILE *ptr;
	bool k = false;
	ptr = fopen("vendedor.dat","rb");
	if (ptr != NULL)
	{
		fread(&reg, sizeof(reg), 1, ptr);
		while (feof(ptr) == false)
		{
			if (reg.idVend == n)
			{
				k = true;
			}
			fread(&reg, sizeof(reg), 1, ptr);
		}
		fclose(ptr);
	}
	else cout << "El archivo no existe ";
	return k;
}

bool existeCliente(int n)
{
	bool k = false;
	regCliente reg;
	FILE *ptr;
	ptr = fopen("cliente.dat","rb");
	if (ptr != NULL)
	{
		fread(&reg, sizeof(reg), 1, ptr);
		while(feof(ptr) == false)
		{
			if(reg.idCliente == n)
				k = true;
			fread(&reg, sizeof(reg), 1, ptr);
		}
		fclose(ptr);
	}
	else cout << "El archivo no existe ";
	return k;
}

bool existeCompra(int id)
{
	FILE *ptr = fopen("compra.dat", "rb");
	regCompra reg;
	if (ptr != NULL)
	{
		fseek(ptr, (id - 1) * sizeof(reg), SEEK_SET);
		fread(&reg, sizeof(reg), 1, ptr);
		if (!feof(ptr))
		{
			if (reg.estado == 'A') return true;
		}
		fclose(ptr);
	}
	else cout << "Archivo no existe" << endl;
	return false;
}

bool existeVenta(int id)
{
	FILE *ptr = fopen("venta.dat", "rb");
	regVenta reg;
	if (ptr != NULL)
	{
		fseek(ptr, (id - 1) * sizeof(reg), SEEK_SET);
		fread(&reg, sizeof(reg), 1, ptr);
		if (!feof(ptr))
		{
			if (reg.estado == 'A') return true;
		}
		fclose(ptr);
	}
	else cout << "Archivo no existe" << endl;
	return false;
}

/// Funciones para modificar/solicitar stock de un producto
void AumentaStockProducto(int cantidad, int prod)
{
	regProducto reg;
	FILE *ptr;
	int c = 1;
	ptr = fopen("producto.dat", "r+b");
	if (ptr != NULL)
	{ 
		fread(&reg, sizeof(reg), 1, ptr);
		while((feof(ptr) == false) && (reg.idProd != prod))
		{
			c++;
			fread(&reg, sizeof(reg), 1, ptr);
		}
		rewind(ptr);
		fseek(ptr, (c-1)*sizeof(reg), SEEK_SET);
		fread(&reg, sizeof(reg), 1, ptr);
		reg.stock = reg.stock + cantidad;
		fseek(ptr, (c-1)*sizeof(reg), SEEK_SET);
		fwrite(&reg, sizeof(reg), 1, ptr);
	}
	else cout <<"El Archivo no existe";
	fclose(ptr);
}

bool ReducirStockProducto(int cantidad, int prod)
{
	regProducto reg;
	FILE *ptr; 
	ptr = fopen("producto.dat", "r+b");
	bool puede = true;
	if (ptr != NULL)
	{ 
		fread(&reg, sizeof(reg), 1, ptr);
		while (!feof(ptr))
		{
			if (reg.idProd == prod)
			{
				reg.stock= reg.stock - cantidad;
				if (reg.stock < 0)
				{
					puede = false;
					cout<<endl<<"error: insuficiente stock"<<endl;
					break;
				}
				fseek(ptr, sizeof(reg)*(-1), SEEK_CUR);
				fwrite(&reg, sizeof(reg), 1,ptr);
				break;
			}
			fread(&reg,sizeof(reg), 1, ptr);
		}
		fclose(ptr);
	}
	else cout <<"El Archivo no existe";
	return puede;
}

/// Funciones para datos de un producto
int GenerarIdProd()
{
	FILE *ptr = fopen("producto.dat", "rb");
	regProducto reg;
	int n = 1;
	if (ptr != NULL)
	{
		fseek(ptr, 0, SEEK_END);
		n = ftell(ptr) / sizeof(reg) + 1;
		fclose(ptr);
	}
	return n;
}

void nombreProducto(char nom[20])
{
	do
	{
		do
		{
			cout << "Nombre: " ;
			gets(nom);
		} while (strlen(nom )== 0);
	} while (verif_solo_letras(nom) == false);
}

/// Funciones para datos de clientes
int GenerarIdCliente()
{
	FILE *ptr;
	regCliente reg;
	int n;
	ptr = fopen("cliente.dat","rb");
	if(ptr != NULL)
	{
		fseek(ptr, 0, SEEK_END);
		n = ftell(ptr) / sizeof(reg) + 1;
		fclose(ptr);
	}
	return n;
}

int IdCliente()
{
	int n;
	cout << endl << "Ingresar Id del Cliente: ";
	n = leerNumeros();
	return n;
}

void nombreCliente(char nom[30])
{
	cout << "Nombre: ";
	do
	{
		do
		{
			gets(nom);
		} while (strlen(nom) == 0);
	} while (verif_solo_letras(nom) == false);
}

void emailCliente(char nom[80])
{
	do
	{
		do
		{
			cout << "E-mail: ";
			gets(nom);
		} while (strlen(nom) == 0);
	} while (validaremail(nom) == false);
}

void telefonoCliente(char nom[12])
{
	do
	{
		do
		{
			cout << "Telefono: ";
			gets(nom);
		} while (strlen(nom) == 0);
	} while (verif_solo_numeros(nom) == false);
}

void nitCliente(char nom[30])
{
	do
	{
		do
		{
			cout << "NIT: ";
			gets(nom);
		} while(strlen(nom) == 0);
	} while(verif_solo_numeros(nom) == false);
}

/// Funciones para datos de vendedor
int GenerarIdVendedor()
{
	FILE *ptr;
	regVendedor reg;
	int n;
	ptr = fopen("vendedor.dat","rb");
	if(ptr != NULL)
	{
		fseek(ptr, 0, SEEK_END);
		n = ftell(ptr) / sizeof(reg) + 1;
		fclose(ptr);
	}
	return n;
}

int idVendedor()
{
	int n;
	do
	{
		cout <<endl << "Ingresar el Id del vendedor: ";
		n = leerNumeros();
	} while (!existeVendedor(n));
	return n;
}

void nombreVendedor(char nom[30])
{
	do
	{
		do
		{
			cout << "Nombre: ";
			gets(nom);
		} while (strlen(nom) == 0);
	} while (verif_solo_letras(nom) == false);
}

void emailVendedor(char nom[80])
{
	do
	{
		do
		{
			cout << "E-mail: ";
			gets(nom);
		} while(strlen(nom) == 0);
	} while(validaremail(nom) == false);
}

void telefonoVendedor(char nom[12])
{
	do
	{
		do
		{
			cout << "Telefono: ";
			gets(nom);
		} while (strlen(nom) == 0);
	} while (verif_solo_numeros(nom) == false);
}

///Funciones para datos de venta
int GenerarIdVenta()
{
	FILE *ptr;
	regVenta reg;
	int n;
	ptr = fopen("venta.dat","rb");
	if (ptr != NULL)
	{
		fseek(ptr, 0, SEEK_END);
		n = ftell(ptr) / sizeof(reg) + 1;
		fclose(ptr);
	}
	return n;
}

int cantidadVenta()
{
	int n;
	do
	{
		cout << "Cantidad: ";
		n = leerNumeros();
	} while (n < 0);
	return n;
}

void precioUnitVenta(float n)
{
	do
	{
		cout << "Precio Unitario: ";
		n = leerDecimales();
	} while (n < 0);
}

/// Funciones para datos de compra
int GenerarIdCompra()
{
	FILE *ptr;
	regCompra reg;
	int n;
	ptr = fopen("compra.dat", "rb");
	if (ptr != NULL)
	{
		fseek(ptr, 0, SEEK_END);
		n = ftell(ptr) / sizeof(reg) + 1;
		fclose(ptr);
	}
	return n;
}

void generar_fecha(char cad[12])
{
	cout << "Ingrese la fecha DD/MM/AAAA: ";
	do
	{
		gets(cad);
	} while (!verificar_fecha(cad));
}

int cantidadCompra()
{
	int n;
	do {
		cout << "Cantidad: ";
		n = leerNumeros();
	} while (n < 0);
	return n;
}


/// Funciones para añadir nuevos registros
void agregar_producto()
{
	regProducto reg;
	FILE *ptr = fopen("producto.dat", "ab");
	cout << "o------------------------o" << endl;
	cout << "      AGREGAR PRODUCTO" << endl;
	cout << "o------------------------o" << endl;
	reg.idProd = GenerarIdProd();
	nombreProducto(reg.nombre);
	cout << "Precio: ";
	reg.precio = leerDecimales();
	reg.stock = 0;
	reg.estado = 'A';
	fwrite(&reg, sizeof(reg), 1, ptr);
	fclose(ptr);
}

void agregar_cliente()
{
	regCliente reg;
	FILE *ptr = fopen("cliente.dat", "ab");
	cout << "o------------------------o" << endl;
	cout << "     AGREGAR CLIENTE " << endl;
	cout << "o------------------------o" << endl;
	reg.idCliente = GenerarIdCliente();
	nombreCliente(reg.nombre);
	emailCliente(reg.email);
	telefonoCliente(reg.telefono);
	nitCliente(reg.nit);
	reg.estado = 'A';
	fwrite(&reg, sizeof(reg), 1, ptr);
	fclose(ptr);
}

void agregar_vendedor()
{
	regVendedor reg;
	FILE *ptr = fopen("vendedor.dat", "ab");
	cout << "o------------------------o" << endl;
	cout << "     AGREGAR VENDEDOR " << endl;
	cout << "o------------------------o" << endl;
	reg.idVend = GenerarIdVendedor();
	nombreVendedor(reg.nombre);
	emailVendedor(reg.email);
	telefonoVendedor(reg.telefono);
	reg.estado = 'A';
	fwrite(&reg, sizeof(reg), 1, ptr);
	fclose(ptr);
}

void agregar_venta()
{
	regVenta reg;
	FILE *ptr = fopen("venta.dat", "ab");
	cout << "o------------------------o" << endl;
	cout << "       AGREGAR VENTA "  << endl;
	cout << "o------------------------o" << endl;
	reg.idVenta = GenerarIdVenta();
	cout << "Ingrese id del producto" << endl;
	reg.idProd = leerNumeros();
	if (!existeProducto(reg.idProd))
	{
		cout << "El producto no existe" << endl;
		system("pause");
		system("cls");
		fclose(ptr);
		return;
	}
	if (obtenerProducto(reg.idProd).stock == 0)
	{
		cout << "El producto carece de stock, no es posible hacer una venta" << endl;
		system("pause");
		system("cls");
		fclose(ptr);
		return;
	}
	generar_fecha(reg.fecha);
	do
	{
		reg.cantidad = cantidadVenta();
	} while(reg.cantidad <= 0 || !ReducirStockProducto(reg.cantidad, reg.idProd));
	
	reg.precioUnit = obtenerProducto(reg.idProd).precio;
	do
	{
		reg.idVend = idVendedor();
		if (!existeVendedor(reg.idVend)) cout << "No existe el vendedor" << endl;
	} while (!existeVendedor(reg.idVend));
	
	do
	{
		reg.idCliente = IdCliente();
		if (!existeCliente(reg.idCliente)) cout << "No existe el cliente" << endl;
	} while (!existeCliente(reg.idCliente));
	reg.estado = 'A';
	fwrite(&reg, sizeof(reg), 1, ptr);
	fclose(ptr);
}

void agregar_compra()
{
	regCompra reg;
	FILE *ptr;
	ptr = fopen("compra.dat","ab");
	cout << "o-------------------------o" << endl;
	cout << "		AGREGAR COMPRA " << endl;
	cout << "o--------------------------o" << endl;
	reg.idCompra = GenerarIdCompra();
	generar_fecha(reg.fecha);
	reg.cantidad = cantidadCompra();
	cout << "Ingrese id del producto" << endl;
	reg.idProd = leerNumeros();
	if (!existeProducto(reg.idProd))
	{
		cout << "El producto no existe" << endl;
		system("pause");
		system("cls");
		fclose(ptr);
		return;
	}
	AumentaStockProducto(reg.cantidad, reg.idProd);
	reg.estado = 'A';
	fwrite(&reg, sizeof(reg), 1, ptr);
	fclose(ptr);
}

/// Validaciones de existencia e integridad de datos
bool ventaRelacionadaProducto(int idProd)
{
	FILE *ptr = fopen("venta.dat", "rb");
	regVenta reg;
	if (ptr != NULL)
	{
		fread(&reg, sizeof(reg), 1, ptr);
		while (!feof(ptr))
		{
			if (reg.estado == 'A' && reg.idProd == idProd) return true;
			fread(&reg, sizeof(reg), 1, ptr);
		}
		fclose(ptr);
	}
	return false;
}

bool compraRelacionadaProducto(int idProd)
{
	FILE *ptr = fopen("compra.dat", "rb");
	regCompra reg;
	if (ptr != NULL)
	{
		fread(&reg, sizeof(reg), 1, ptr);
		while (!feof(ptr))
		{
			if (reg.estado == 'A' && reg.idProd == idProd) return true;
			fread(&reg, sizeof(reg), 1, ptr);
		}
		fclose(ptr);
	}
	return false;
}

bool ventaRelacionadaCliente(int idCliente)
{
	FILE *ptr = fopen("venta.dat", "rb");
	regVenta reg;
	if (ptr != NULL)
	{
		fread(&reg, sizeof(reg), 1, ptr);
		while (!feof(ptr))
		{
			if (reg.estado == 'A' && reg.idCliente == idCliente) return true;
			fread(&reg, sizeof(reg), 1, ptr);
		}
		fclose(ptr);
	}
	return false;
}

bool ventaRelacionadaVendedor(int idVend)
{
	FILE *ptr = fopen("venta.dat", "rb");
	regVenta reg;
	if (ptr != NULL)
	{
		fread(&reg, sizeof(reg), 1, ptr);
		while (!feof(ptr))
		{
			if (reg.estado == 'A' && reg.idVend == idVend) return true;
			fread(&reg, sizeof(reg), 1, ptr);
		}
		fclose(ptr);
	}
	return false;
}

bool eliminarCompraPosible(int idCompra)
{
	FILE *ptr = fopen("compra.dat", "rb");
	regCompra reg;
	if (ptr != NULL)
	{
		fseek(ptr, (idCompra - 1) * sizeof(reg), SEEK_SET);
		fread(&reg, sizeof(reg), 1, ptr);	
		if (reg.cantidad > obtenerProducto(reg.idProd).stock) return false;
		fclose(ptr);
	}
	return true;
}

/// Anular registros
void eliminar_producto()
{
	int id;
	regProducto reg;
	FILE *ptr = fopen("producto.dat","r+b");
	cout << "Ingrese id del producto" << endl;
	id = leerNumeros();
	if (!existeProducto(id)) 
	{
		cout << "No existe el producto indicado" << endl;
		if (ptr != NULL) fclose(ptr);
		return;
	}
	if (ptr != NULL)
	{
		if (!compraRelacionadaProducto(id) && !ventaRelacionadaProducto(id))
		{
			fseek(ptr, (id - 1) * sizeof(reg), SEEK_SET);
			fread(&reg, sizeof(reg), 1, ptr);
			reg.estado = 'E';
			fseek(ptr, (id - 1) * sizeof(reg), SEEK_SET);
			fwrite(&reg, sizeof(reg), 1, ptr);
			cout << "[Registro eliminado]" << endl;
		}
		else cout << "[No es posible eliminar]" << endl;
		fclose(ptr);
	}
	else cout << "[Archivo no existe]" << endl;
	system("pause");
	system("cls");
}

void eliminar_cliente()
{
	int id;
	regCliente reg;
	FILE *ptr = fopen("cliente.dat","r+b");
	cout << "Ingrese id del cliente" << endl;
	id = leerNumeros();
	if (!existeCliente(id)) 
	{
		cout << "No existe el cliente indicado" << endl;
		if (ptr != NULL) fclose(ptr);
		return;
	}
	if (ptr != NULL)
	{
		if (!ventaRelacionadaCliente(id))
		{
			fseek(ptr, (id - 1) * sizeof(reg), SEEK_SET);
			fread(&reg, sizeof(reg), 1, ptr);
			reg.estado = 'E';
			fseek(ptr, (id - 1) * sizeof(reg), SEEK_SET);
			fwrite(&reg, sizeof(reg), 1, ptr);
			cout << "[Registro eliminado]" << endl;
		}
		else cout << "[No es posible eliminar]" << endl;
		fclose(ptr);
	}
	else cout << "[Archivo no existe]" << endl;
	system("pause");
	system("cls");
}

void eliminar_vendedor()
{
	int id;
	regVendedor reg;
	FILE *ptr = fopen("vendedor.dat","r+b");
	cout << "Ingrese id del vendedor" << endl;
	id = leerNumeros();
	if (!existeVendedor(id)) 
	{
		cout << "No existe el vendedor indicado" << endl;
		if (ptr != NULL) fclose(ptr);
		return;
	}
	if (ptr != NULL)
	{
		if (!ventaRelacionadaVendedor(id))
		{
			fseek(ptr, (id - 1) * sizeof(reg), SEEK_SET);
			fread(&reg, sizeof(reg), 1, ptr);
			reg.estado = 'E';
			fseek(ptr, (id - 1) * sizeof(reg), SEEK_SET);
			fwrite(&reg, sizeof(reg), 1, ptr);
			cout << "[Registro eliminado]" << endl;
		}
		else cout << "[No es posible eliminar]" << endl;
		fclose(ptr);
	}
	else cout << "[Archivo no existe]" << endl;
	system("pause");
	system("cls");
}

void eliminar_venta()
{
	cout << "es"<< endl;
	int id;
	regVenta reg;
	FILE *ptr = fopen("venta.dat","r+b");
	cout << "Ingrese id de la venta" << endl;
	id = leerNumeros();
	if (!existeVenta(id)) 
	{
		cout << "No existe el producto indicado" << endl;
		if (ptr != NULL) fclose(ptr);
		return;
	}
	if (ptr != NULL)
	{
		fseek(ptr, (id - 1) * sizeof(reg), SEEK_SET);
		fread(&reg, sizeof(reg), 1, ptr);
		reg.estado = 'E';
		fseek(ptr, (id - 1) * sizeof(reg), SEEK_SET);
		fwrite(&reg, sizeof(reg), 1, ptr);
		AumentaStockProducto(reg.cantidad, reg.idProd);
		cout << "[Registro eliminado]" << endl;
		fclose(ptr);
	}
	else cout << "[Archivo no existe]" << endl;
	system("pause");
	system("cls");
}

void eliminar_compra()
{
	int id;
	regCompra reg;
	FILE *ptr = fopen("compra.dat","r+b");
	cout << "Ingrese id de la compra" << endl;
	id = leerNumeros();
	if (!existeCompra(id)) 
	{
		cout << "No existe la compra indicada" << endl;
		if (ptr != NULL) fclose(ptr);
		return;
	}
	if (ptr != NULL)
	{
		if (eliminarCompraPosible(id))
		{
			fseek(ptr, (id - 1) * sizeof(reg), SEEK_SET);
			fread(&reg, sizeof(reg), 1, ptr);
			reg.estado = 'E';
			fseek(ptr, (id - 1) * sizeof(reg), SEEK_SET);
			fwrite(&reg, sizeof(reg), 1, ptr);
			ReducirStockProducto(reg.cantidad, reg.idProd);
			cout << "[Registro eliminado]" << endl;	
		}
		else cout << "[No es posible eliminar]" << endl;
		fclose(ptr);
	}
	else cout << "[Archivo no existe]" << endl;
	system("pause");
	system("cls");
}

/// Funciones para modificar registros
void modificar_producto()
{
	int op, id;
	regProducto reg;
	cout << "Especifique el producto a editar" << endl;
	id = leerNumeros();
	if (!existeProducto(id))
	{
		cout << "No existe el producto indicado" << endl;
		return;
	}
	FILE *ptr = fopen("producto.dat","r+b");
	if (ptr != NULL)
	{
		fread(&reg, sizeof(reg), 1, ptr);
		while (!feof(ptr))
		{
			if ((reg.idProd == id) && (reg.estado == 'A'))
			{
				fseek(ptr, (-1)*sizeof(reg), SEEK_CUR);
				nombreProducto(reg.nombre);
				cout << "Precio: ";
				cin >> reg.precio;
				fwrite(&reg, sizeof(reg), 1, ptr);
				break;
			}
			fread(&reg, sizeof(reg), 1, ptr);
		}
		fclose(ptr);
	}
	else cout << "No existe el archivo" << endl;
}

void modificar_cliente()
{
	int op, id;
	regCliente reg;
	id = IdCliente();
	if (!existeCliente(id))
	{
		cout << "No existe el cliente indicado" << endl;
		return;
	}
	FILE *ptr = fopen("cliente.dat", "r+b");
	if(ptr != NULL)
	{
		fread(&reg, sizeof(reg), 1, ptr);
		while (!feof(ptr))
		{
			if ((reg.idCliente == id) && (reg.estado == 'A'))
			{
				fseek(ptr, (-1)*sizeof(reg), SEEK_CUR);
				nombreCliente(reg.nombre);
				emailCliente(reg.email);
				telefonoCliente(reg.telefono);
				nitCliente(reg.nit);
				fwrite(&reg, sizeof(reg), 1 ,ptr);	
				break;
			}
			fread(&reg, sizeof(reg), 1, ptr);
		}
		fclose(ptr);
	}
	else cout << "No existe el archivo" << endl;
}

void modificar_vendedor()
{
	int id;
	regVendedor reg;
	cout << "Ingrese id del vendedor" << endl;
	id = leerNumeros();
	if (!existeVendedor(id))
	{
		cout << "No existe el vendedor indicado" << endl;
		return;
	}
	if (!existeVendedor(id))
	{
		cout << "El vendedor indicado no existe" << endl;
		return;
	}
	FILE *ptr = fopen("vendedor.dat", "r+b");
	if (ptr != NULL)
	{
		fread(&reg, sizeof(reg), 1, ptr);
		while (!feof(ptr))
		{
			if ((reg.idVend == id) && (reg.estado == 'A'))
			{
				fseek(ptr, (-1)*sizeof(reg), SEEK_CUR);
				nombreVendedor(reg.nombre);
				emailVendedor(reg.email);
				telefonoVendedor(reg.telefono);
				fwrite(&reg, sizeof(reg), 1, ptr);
				break;
			}
			fread(&reg, sizeof(reg), 1, ptr);
		}
		fclose(ptr);
	}
	else cout << "No existe el archivo" << endl;
}

void modificar_venta()
{
	regVenta reg;
	int id, ant;
	cout << "Especifique venta a editar" << endl;
	id = leerNumeros();
	if (!existeVenta(id))
	{
		cout << "No existe la venta indicada" << endl;
		return;
	}
	FILE *ptr = fopen("venta.dat", "r+b");
	if(ptr != NULL)
	{
		fread(&reg, sizeof(reg), 1, ptr);
		while (!feof(ptr))
		{
			if ((id == reg.idVenta) && (reg.estado == 'A'))
			{
				fseek(ptr, (-1)*sizeof(reg) ,SEEK_CUR);
				ant = reg.cantidad;
				reg.cantidad = cantidadVenta();
				// Si la nueva cantidad es mayor
				if (reg.cantidad > ant)
				{
					if (obtenerProducto(reg.idProd).stock >  reg.cantidad - ant)
						ReducirStockProducto(reg.cantidad - ant, reg.idProd);
					else 
					{
						cout << "No existe el stock requerido para actualizar esta venta" << endl;
						fclose(ptr);
						return;
					}
				}
				else
					AumentaStockProducto(ant - reg.cantidad, reg.idProd);
				
				do
				{
					reg.idVend = idVendedor();
				 } while (!existeVendedor(reg.idVend));

				do
				{
					reg.idCliente = IdCliente();
				} while(!existeCliente(reg.idCliente) );

				fwrite(&reg, sizeof(reg), 1, ptr);
				break;
			}
			fread(&reg, sizeof(reg), 1, ptr);
		}
		fclose(ptr);
	}
	else cout << "No existe el archivo" << endl; 
}

void modificar_compra()
{
	int id, ant;
	regCompra reg;
	cout << "Especifique compra a editar" << endl;
	id = leerNumeros();
	if (!existeCompra(id))
	{
		cout << "No existe la compra indicada" << endl;
		return;
	}
	FILE *ptr = fopen("compra.dat", "r+b");
	if(ptr != NULL)
	{
		fseek(ptr, (id - 1) * sizeof(reg), SEEK_SET);
		fread(&reg, sizeof(reg), 1, ptr);
		ant = reg.cantidad;
		cout << "Ingrese nueva cantidad de compra" << endl;

		reg.cantidad = leerNumeros();
		if (ant > reg.cantidad)
		{
			if (obtenerProducto(reg.idProd).stock > ant - reg.cantidad)
				ReducirStockProducto(ant - reg.cantidad, reg.idProd);
			else 
			{
				cout << "No existe suficiente stock para actualizar esta compra" << endl;
				system("pause");
				system("cls");
				fclose(ptr);
				return;
			}
		}
		else
			AumentaStockProducto(reg.cantidad - ant, reg.idProd);
		fseek(ptr, (id - 1) * sizeof(reg), SEEK_SET);
		fwrite(&reg, sizeof(reg), 1, ptr);
		fclose(ptr);
	}
	else cout << "El archivo no existe " << endl;
}

/// Funciones para generar reportes
void mostrar_producto()
{
	regProducto reg;
	int c = 0;
	FILE *ptr;
	ptr = fopen("producto.dat", "rb");
	if(ptr != NULL)
	{
		cout << "\n					PRODUCTOS		" << endl; 
		cout << "\n---------------------------------------------------------------------------------------" << endl; 
		cout << "\nIdProd.		Nombre				Stock		Precio	 " << endl; 
		cout << "\n---------------------------------------------------------------------------------------" << endl; 
		fread(&reg, sizeof(reg), 1, ptr);
		while(!feof(ptr))
		{
			if(reg.estado == 'A')
			{
				c++;
				cout << endl << reg.idProd  << "		"<< "		" << reg.nombre << "		" << reg.stock << "		" << reg.precio << endl;	
			}
			fread(&reg, sizeof(reg), 1, ptr);
		}
		fclose (ptr);
		system("pause");
		system("cls");
	}
	else cout << "El archivo no existe" << endl;
}

void mostrar_cliente()
{
	FILE *ptr;
	regCliente reg;
	ptr = fopen("cliente.dat","rb");
	if (ptr != NULL)
	{
		cout<<endl<<"	CLIENTES "<<endl;
		cout << "------------------------------------------------------------------------" << endl;
		cout<<"	CI        Nombre           NIT           Telefono            Correo" << endl;
		cout << "------------------------------------------------------------------------" << endl;
		fread(&reg, sizeof(reg), 1, ptr);

		while (!feof(ptr))
		{
			if(reg.estado == 'A')
			{
				cout << reg.idCliente << "		" << reg.nombre << "		" << reg.nit << "		" << reg.telefono << "		" << reg.email << endl;
			}
			fread(&reg, sizeof(reg), 1, ptr);
		}
		fclose(ptr);
		system("pause");
		system("cls");
	}
	else cout<<"No existe el archivo" << endl;
}	

void mostrar_vendedor()
{
	regVendedor reg;
	FILE *ptr;
	ptr = fopen("vendedor.dat", "rb");
	if (ptr != NULL)
	{
		cout<<endl<<"	VENDEDOR		"<<endl;
		cout << "------------------------------------------------------------------------" << endl;
		cout<<"	ID        Nombre          Telefono           E-mail" << endl;
		cout << "------------------------------------------------------------------------" << endl;
		fread(&reg, sizeof(reg), 1, ptr);
		while (!feof(ptr))
		{
			if(reg.estado == 'A')
			{
				cout << reg.idVend << "			" << reg.nombre << "			" << reg.telefono << "		" << reg.email << endl;
			}
			fread(&reg, sizeof(reg), 1, ptr);
		}
		fclose(ptr);
		system("pause");
		system("cls");
	}
	else cout << "No existe el archivo " << endl;
}

void mostrar_venta()
{
	regVenta reg;
	FILE *ptr = fopen("venta.dat", "rb");
	if (ptr != NULL)
	{
		cout<<endl<<"	VENTA		"<<endl;
		cout << "--------------------------------------------------------------------------------------------------" << endl;
		cout<<"	ID        Fecha          Cantidad        PrecioUnit		Producto		Vendedor		Cliente" << endl;
		cout << "------------------------------------------------------------------------------------------------" << endl;
		fread(&reg, sizeof(reg), 1, ptr);
		while (!feof(ptr))
		{
			if (reg.estado == 'A')
			{
				cout << reg.idVenta << "		" << reg.fecha << "		" << reg.cantidad << "		" << reg.precioUnit << "		" << obtenerProducto(reg.idProd).nombre << "		" <<   obtenerVendedor(reg.idVend).nombre << "		" << obtenerCliente(reg.idCliente).nombre << endl;
			}
			fread(&reg, sizeof(reg), 1, ptr);
		}
		fclose(ptr);
		system("pause");
		system("cls");
	}
	else cout << "No existe el archivo" << endl;
	
}

void mostrar_compra()
{
	regCompra reg;
	FILE*ptr;
	ptr=fopen("compra.dat","rb");
	if(ptr!=NULL)
	{
		cout<<endl<<"	COMPRA		"<<endl;
		cout << "---------------------------------------------------------------------" << endl;
		cout<<"	ID        Fecha          Cantidad        Producto	" << endl;
		cout << "---------------------------------------------------------------------" << endl;
		fread(&reg,sizeof(reg),1,ptr);
		while(!feof(ptr))
		{
			if (reg.estado == 'A')
			{
				cout << reg.idCompra << "		" << reg.fecha << "		" << reg.cantidad << "			" << obtenerProducto(reg.idProd).nombre << endl;
			}
			fread(&reg, sizeof(reg), 1, ptr);
		}
		fclose(ptr);
		system("pause");


		system("cls");
	}
	else cout << "No existe el archivo " << endl;
}

/// Reportes
void ventasEntreFechas()
{
	char fecha1[12], fecha2[12], aux[4], num[1000];
	bool val;
	int anho1, anho2, anho3, mes1, mes2, mes3, dia1, dia2, dia3;
	do {
		val = true;
		cout << "o------------------------o" << endl;
		cout << "   Ventas entre fechas" << endl;
		cout << "o------------------------o" << endl;
		cout << "Ingrese primera fecha " << endl;
		generar_fecha(fecha1);
		cout << "Ingrese segunda fecha " << endl;
		generar_fecha(fecha2);
		aux[0] = fecha1[0]; aux[1] = fecha1[1]; aux[2] = '\0';
		dia1 = atoi(aux);
		aux[0] = fecha2[0]; aux[1] = fecha2[1]; aux[2] = '\0';
		dia2 = atoi(aux);
		aux[0] = fecha1[3]; aux[1] = fecha1[4]; aux[2] = '\0';
		mes1 = atoi(aux);
		aux[0] = fecha2[3]; aux[1] = fecha2[4]; aux[2] = '\0';
		mes2 = atoi(aux);
		aux[0] = fecha1[6]; aux[1] = fecha1[7]; aux[2] = fecha1[8]; aux[3] = fecha1[9];
		anho1 = atoi(aux);
		aux[0] = fecha2[6]; aux[1] = fecha2[7]; aux[2] = fecha2[8]; aux[3] = fecha2[9];
		anho2 = atoi(aux);

		if (anho2 < anho1) {
			cout << "Ingrese las fechas correctamente" << endl;
			val = false;
		}
		else if ( (anho2 == anho1) && (mes2 < mes1) )
		{
			cout << "Ingrese las fechas correctamente" << endl;
			val = false;
		}
		else if ( (anho2 == anho1) && (mes2 == mes1) && (dia2 <= dia1) )
		{
			cout << "Ingrese las fechas correctamente" << endl;
			val = false;
		}
	} while (!val);
	cout << "o-----------------------------------------------------------------------------o" << endl;
	cout<<"		                                VENTA"<<endl;
	cout<<"ID \t Fecha \t\t Cantidad\Precio\tProducto\t\tVendedor\tCliente" << endl;
	cout << "o-----------------------------------------------------------------------------o" << endl;	
	FILE *ptr = fopen("venta.dat", "rb");
	regVenta ventaActual;
	val = false;
	int productosTotales = 0, montoTotal = 0;
	if (ptr != NULL)
	{
		fread(&ventaActual, sizeof(ventaActual), 1, ptr);
		while (!feof(ptr))
		{
			val = true;
			aux[0] = ventaActual.fecha[0]; aux[1] = ventaActual.fecha[1]; aux[2] = '\0';
			dia3 = atoi(aux);
			aux[0] = ventaActual.fecha[3]; aux[1] = ventaActual.fecha[4]; aux[2] = '\0';
			mes3 = atoi(aux);
			aux[0] = ventaActual.fecha[6]; aux[1] = ventaActual.fecha[7]; aux[2] = ventaActual.fecha[8]; aux[3] = ventaActual.fecha[9];
			anho3 = atoi(aux);
			if (ventaActual.estado == 'A')
			{
				if (anho3 < anho1) val = false;
				else if ( (anho3 == anho1) && (mes3 < mes1) ) val = false;
				else if ( (anho3 == anho1) && (mes3 == mes1) && (dia3 < dia1) ) val = false;
				if (anho2 < anho3) val = false;
				else if ( (anho2 == anho3) && (mes2 < mes3) ) val = false;
				else if ( (anho2 == anho3) && (mes2 == mes3) && (dia2 < dia3) ) val = false;

				if (val) 
				{
					cout << ventaActual.idVenta << "\t" << ventaActual.fecha << "\t" << ventaActual.cantidad << "\t\t" << ventaActual.precioUnit << "\t\t" << obtenerProducto(ventaActual.idProd).nombre << "\t\t" <<   obtenerVendedor(ventaActual.idVend).nombre << "\t\t" << obtenerCliente(ventaActual.idCliente).nombre << endl;
					
					cout << "Total en ventas: " << ventaActual.precioUnit * ventaActual.cantidad << " [ ";
					numLiteral( ventaActual.precioUnit * ventaActual.cantidad );
					cout << " ] Bolivianos." << endl << endl;

					montoTotal += ventaActual.precioUnit * ventaActual.cantidad; 
					productosTotales += ventaActual.cantidad;
				}
			}
			fread(&ventaActual, sizeof(ventaActual), 1, ptr);
		}
		cout << endl << "Ventas totales: " << montoTotal << " [ ";
		numLiteral( montoTotal );
		cout << "] Bolivianos." << endl << "Productos vendidos: " << productosTotales << " [ ";
		numLiteral(productosTotales);
		cout << "] " << endl;
		fclose(ptr);
	}
	else cout << "Archivo no existe" << endl;
}

void ventasEntreFechasTexto()
{
	char fecha1[12], fecha2[12], aux[4];
	bool val;
	int anho1, anho2, anho3, mes1, mes2, mes3, dia1, dia2, dia3;
	do {
		val = true;
		cout << "o------------------------o" << endl;
		cout << "   Ventas entre fechas" << endl;
		cout << "o------------------------o" << endl << endl;
		cout << "Reporte para impresion/texto" << endl << endl;
		cout << "Ingrese primera fecha " << endl;
		generar_fecha(fecha1);
		cout << "Ingrese segunda fecha " << endl;
		generar_fecha(fecha2);
		aux[0] = fecha1[0]; aux[1] = fecha1[1]; aux[2] = '\0';
		dia1 = atoi(aux);
		aux[0] = fecha2[0]; aux[1] = fecha2[1]; aux[2] = '\0';
		dia2 = atoi(aux);
		aux[0] = fecha1[3]; aux[1] = fecha1[4]; aux[2] = '\0';
		mes1 = atoi(aux);
		aux[0] = fecha2[3]; aux[1] = fecha2[4]; aux[2] = '\0';
		mes2 = atoi(aux);
		aux[0] = fecha1[6]; aux[1] = fecha1[7]; aux[2] = fecha1[8]; aux[3] = fecha1[9];
		anho1 = atoi(aux);
		aux[0] = fecha2[6]; aux[1] = fecha2[7]; aux[2] = fecha2[8]; aux[3] = fecha2[9];
		anho2 = atoi(aux);
		if (anho2 < anho1) {
			cout << "Ingrese correctamente las fechas" << endl;
			val = false;
		}
		else if ( (anho2 == anho1) && (mes2 < mes1) )
		{
			cout << "Ingrese correctamente las fechas" << endl;
			val = false;
		}
		else if ( (anho2 == anho1) && (mes2 == mes1) && (dia2 <= dia1) )
		{
			cout << "Ingrese correctamente las fechas" << endl;
			val = false;
		}
	} while (!val);


	FILE *ptr = fopen("venta.dat", "rb"), *txt = fopen("reporteVentas.txt", "w");
	regVenta reg;
	char buff[1000];
	fputs("Reporte calculado entre fechas: ", txt);
	fputs(fecha1, txt);
	fputs(" - ", txt);
	fputs(fecha2, txt);
	fputs("\no-----------------------------------------------------------------------------o", txt);
	fputs("\n	Venta		\n", txt);
	fputs("ID \t Fecha \t\t Cantidad\tPrecioUnit\tProducto\tVendedor\tCliente\n", txt);
	fputs("o-----------------------------------------------------------------------------o\n", txt);

	int productosTotales = 0, montoTotal = 0;
	if (ptr != NULL)
	{
		fread(&reg, sizeof(reg), 1, ptr);
		while (!feof(ptr))
		{
			val = true;
			aux[0] = reg.fecha[0]; aux[1] = reg.fecha[1]; aux[2] = '\0';
			dia3 = atoi(aux);

			aux[0] = reg.fecha[3]; aux[1] = reg.fecha[4]; aux[2] = '\0';
			mes3 = atoi(aux);

			aux[0] = reg.fecha[6]; aux[1] = reg.fecha[7]; aux[2] = reg.fecha[8]; aux[3] = reg.fecha[9];
			anho3 = atoi(aux);
			if (reg.estado == 'A')
			{
				if (anho3 < anho1) val = false;
				else if ( (anho3 == anho1) && (mes3 < mes1) ) val = false;
				else if ( (anho3 == anho1) && (mes3 == mes1) && (dia3 < dia1) ) val = false;
				if (anho2 < anho3) val = false;
				else if ( (anho2 == anho3) && (mes2 < mes3) ) val = false;
				else if ( (anho2 == anho3) && (mes2 == mes3) && (dia2 < dia3) ) val = false;
				if (val)
				{
					itoa(reg.idVenta, buff, 10);
					fputs(buff, txt);	fputs("\t", txt);

					fputs(reg.fecha, txt); fputs("\t", txt);

					itoa(reg.cantidad, buff, 10);
					fputs(buff, txt);	 fputs("\t\t", txt);

					itoa((int)reg.precioUnit, buff, 10);
					fputs(buff, txt);	fputs("\t\t", txt);

					fputs(obtenerProducto(reg.idProd).nombre, txt);	fputs("\t\t", txt);
					
					fputs(obtenerVendedor(reg.idVend).nombre, txt);	fputs("\t", txt);
					
					fputs(obtenerCliente(reg.idCliente).nombre, txt); fputs("\n", txt);
					fputs("Total en ventas: ", txt); 
					itoa((int)reg.precioUnit * reg.cantidad, buff, 10);
					fputs (buff, txt); fputs (" [", txt);
					numLiteralChar((int)(reg.precioUnit * reg.cantidad), buff);
					fputs(buff, txt); fputs("] Bolivianos.\n", txt);
					montoTotal += reg.precioUnit * reg.cantidad; 
					productosTotales += reg.cantidad;
				}
			}
			fread(&reg, sizeof(reg), 1, ptr);
		}
		fputs ("\nTotal en ventas: ", txt); 
		itoa(montoTotal, buff, 10);
		fputs(buff, txt);
		fputs(" [", txt);
		numLiteralChar(montoTotal, buff);
		fputs(buff, txt);
		fputs("[ Bolivianos. \nProductos vendidos: ", txt);
		itoa(productosTotales, buff, 10);
		fputs(buff, txt);
		numLiteralChar(productosTotales, buff);
		fputs (" [", txt);
		fputs(buff, txt); 
		fputs("[\n", txt);

		fclose(txt);
		fclose(ptr);
		cout << "Reporte generado" << endl;
		system("pause");
		system("cls");
	}
	else cout << "Archivo no existe" << endl;
}

void ventasEntreFechasProducto(int idProd)
{
	char fecha1[12], fecha2[12], aux[4], num[1000];
	bool val;
	int anho1, anho2, anho3, mes1, mes2, mes3, dia1, dia2, dia3;
	do {
		val = true;
		cout << "o-------------------------------------o" << endl;
		cout << "   Ventas entre fechas por producto" << endl;
		cout << "o-------------------------------------o" << endl;
		cout << "Ingrese primera fecha " << endl;
		generar_fecha(fecha1);
		cout << "Ingrese segunda fecha " << endl;
		generar_fecha(fecha2);
		aux[0] = fecha1[0]; aux[1] = fecha1[1]; aux[2] = '\0';
		dia1 = atoi(aux);
		aux[0] = fecha2[0]; aux[1] = fecha2[1]; aux[2] = '\0';
		dia2 = atoi(aux);
		aux[0] = fecha1[3]; aux[1] = fecha1[4]; aux[2] = '\0';
		mes1 = atoi(aux);
		aux[0] = fecha2[3]; aux[1] = fecha2[4]; aux[2] = '\0';
		mes2 = atoi(aux);
		aux[0] = fecha1[6]; aux[1] = fecha1[7]; aux[2] = fecha1[8]; aux[3] = fecha1[9];
		anho1 = atoi(aux);
		aux[0] = fecha2[6]; aux[1] = fecha2[7]; aux[2] = fecha2[8]; aux[3] = fecha2[9];
		anho2 = atoi(aux);

		if (anho2 < anho1) {
			cout << "Ingrese las fechas correctamente" << endl;
			val = false;
		}
		else if ( (anho2 == anho1) && (mes2 < mes1) )
		{
			cout << "Ingrese las fechas correctamente" << endl;
			val = false;
		}
		else if ( (anho2 == anho1) && (mes2 == mes1) && (dia2 <= dia1) )
		{
			cout << "Ingrese las fechas correctamente" << endl;
			val = false;
		}
	} while (!val);
	
	cout << "o-----------------------------------------------------------------------------o" << endl;
	cout <<"					VENTA		"<<endl;
	cout <<"ID \t Fecha \t\t Cantidad\tPrecioUnit\tProducto\t\tVendedor\tCliente" << endl;
	cout << "o-----------------------------------------------------------------------------o" << endl;
	FILE *ptr = fopen("venta.dat", "rb");
	regVenta ventaActual;
	val = false;
	int productosTotales = 0, montoTotal = 0;
	if (ptr != NULL)
	{
		fread(&ventaActual, sizeof(ventaActual), 1, ptr);
		while (!feof(ptr))
		{
			val = true;
			aux[0] = ventaActual.fecha[0]; aux[1] = ventaActual.fecha[1]; aux[2] = '\0';
			dia3 = atoi(aux);
			aux[0] = ventaActual.fecha[3]; aux[1] = ventaActual.fecha[4]; aux[2] = '\0';
			mes3 = atoi(aux);
			aux[0] = ventaActual.fecha[6]; aux[1] = ventaActual.fecha[7]; aux[2] = ventaActual.fecha[8]; aux[3] = ventaActual.fecha[9];
			anho3 = atoi(aux);
			if (ventaActual.estado == 'A' && ventaActual.idProd == idProd)
			{
				if (anho3 < anho1) val = false;
				else if ( (anho3 == anho1) && (mes3 < mes1) ) val = false;
				else if ( (anho3 == anho1) && (mes3 == mes1) && (dia3 < dia1) ) val = false;
				if (anho2 < anho3) val = false;
				else if ( (anho2 == anho3) && (mes2 < mes3) ) val = false;
				else if ( (anho2 == anho3) && (mes2 == mes3) && (dia2 < dia3) ) val = false;

				if (val) 
				{
					cout << ventaActual.idVenta << "\t" << ventaActual.fecha << "\t" << ventaActual.cantidad << "\t\t" << ventaActual.precioUnit << "\t\t" << obtenerProducto(ventaActual.idProd).nombre << "\t\t" <<   obtenerVendedor(ventaActual.idVend).nombre << "\t\t" << obtenerCliente(ventaActual.idCliente).nombre << endl;
					
					cout << "Total: " << ventaActual.precioUnit * ventaActual.cantidad << " [ ";
					numLiteral( ventaActual.precioUnit * ventaActual.cantidad );
					cout << "] Bolivianos." << endl << endl;

					montoTotal += ventaActual.precioUnit * ventaActual.cantidad; 
					productosTotales += ventaActual.cantidad;
				}
			}
			fread(&ventaActual, sizeof(ventaActual), 1, ptr);
		}
		cout << endl << "Total en ventas: " << montoTotal << " [ ";
		numLiteral( montoTotal );
		cout << "] Bolivianos." << endl << "Productos: " << productosTotales << " [ ";
		numLiteral(productosTotales);
		cout << "] Productos" << endl;
		fclose(ptr);
	}
	else cout << "Archivo no existe" << endl;
}

void ventasEntreFechasProductoTexto(int idProd)
{
	char fecha1[12], fecha2[12], aux[4];
	bool val;
	int anho1, anho2, anho3, mes1, mes2, mes3, dia1, dia2, dia3;
	do {
		val = true;
		cout << "o-------------------------------------o" << endl;
		cout << "   Ventas entre fechas por producto" << endl;
		cout << "o-------------------------------------o" << endl << endl;
		cout << "Reporte para impresion/texto" << endl << endl;
		cout << "Ingrese primera fecha " << endl;
		generar_fecha(fecha1);
		cout << "Ingrese segunda fecha " << endl;
		generar_fecha(fecha2);
		aux[0] = fecha1[0]; aux[1] = fecha1[1]; aux[2] = '\0';
		dia1 = atoi(aux);
		aux[0] = fecha2[0]; aux[1] = fecha2[1]; aux[2] = '\0';
		dia2 = atoi(aux);
		aux[0] = fecha1[3]; aux[1] = fecha1[4]; aux[2] = '\0';
		mes1 = atoi(aux);
		aux[0] = fecha2[3]; aux[1] = fecha2[4]; aux[2] = '\0';
		mes2 = atoi(aux);
		aux[0] = fecha1[6]; aux[1] = fecha1[7]; aux[2] = fecha1[8]; aux[3] = fecha1[9];
		anho1 = atoi(aux);
		aux[0] = fecha2[6]; aux[1] = fecha2[7]; aux[2] = fecha2[8]; aux[3] = fecha2[9];
		anho2 = atoi(aux);
		if (anho2 < anho1) {
			cout << "Ingrese correctamente las fechas" << endl;
			val = false;
		}
		else if ( (anho2 == anho1) && (mes2 < mes1) )
		{
			cout << "Ingrese correctamente las fechas" << endl;
			val = false;
		}
		else if ( (anho2 == anho1) && (mes2 == mes1) && (dia2 <= dia1) )
		{
			cout << "Ingrese correctamente las fechas" << endl;
			val = false;
		}
	} while (!val);


	FILE *ptr, *txt; 
	ptr = fopen("venta.dat", "rb"); 
	txt = fopen("reporteVentasProducto.txt", "w");
	regVenta ventaActual;
	char buff[1000];
	fputs("Producto: ", txt);
	fputs(obtenerProducto(idProd).nombre, txt);	fputs("\n", txt);
	fputs("Reporte calculado entre fechas: ", txt);
	fputs(fecha1, txt);
	fputs(" - ", txt);
	fputs(fecha2, txt);
	fputs("\no-----------------------------------------------------------------------------o", txt);
	fputs("\n						Venta		\n", txt);
	fputs("ID \t Fecha \t\t Cantidad\tPrecioUnit\tProducto\tVendedor\tCliente\n", txt);
	fputs("o-----------------------------------------------------------------------------o\n", txt);
	int productosTotales = 0, montoTotal = 0;
	if (ptr != NULL)
	{
		fread(&ventaActual, sizeof(ventaActual), 1, ptr);
		while (!feof(ptr))
		{
			val = true;
			aux[0] = ventaActual.fecha[0]; aux[1] = ventaActual.fecha[1]; aux[2] = '\0';
			dia3 = atoi(aux);

			aux[0] = ventaActual.fecha[3]; aux[1] = ventaActual.fecha[4]; aux[2] = '\0';
			mes3 = atoi(aux);

			aux[0] = ventaActual.fecha[6]; aux[1] = ventaActual.fecha[7]; aux[2] = ventaActual.fecha[8]; aux[3] = ventaActual.fecha[9];
			anho3 = atoi(aux);
			if (ventaActual.estado == 'A' && ventaActual.idProd == idProd)
			{
				if (anho3 < anho1) val = false;
				else if ( (anho3 == anho1) && (mes3 < mes1) ) val = false;
				else if ( (anho3 == anho1) && (mes3 == mes1) && (dia3 < dia1) ) val = false;
				if (anho2 < anho3) val = false;
				else if ( (anho2 == anho3) && (mes2 < mes3) ) val = false;
				else if ( (anho2 == anho3) && (mes2 == mes3) && (dia2 < dia3) ) val = false;
				if (val)
				{
					itoa(ventaActual.idVenta, buff, 10);
					fputs(buff, txt);	fputs("\t", txt);

					fputs(ventaActual.fecha, txt); fputs("\t", txt);

					itoa(ventaActual.cantidad, buff, 10);
					fputs(buff, txt);	 fputs("\t\t", txt);

					itoa((int)ventaActual.precioUnit, buff, 10);
					fputs(buff, txt);	fputs("\t\t", txt);

					fputs(obtenerProducto(ventaActual.idProd).nombre, txt);	fputs("\t\t", txt);
					
					fputs(obtenerVendedor(ventaActual.idVend).nombre, txt);	fputs("\t", txt);
					
					fputs(obtenerCliente(ventaActual.idCliente).nombre, txt); fputs("\n", txt);
					fputs("Total: ", txt); 
					itoa((int)ventaActual.precioUnit * ventaActual.cantidad, buff, 10);
					fputs (buff, txt); fputs (" [", txt);
					numLiteralChar((int)(ventaActual.precioUnit * ventaActual.cantidad), buff);
					fputs(buff, txt); fputs("] Bolivianos.\n", txt);
					montoTotal += ventaActual.precioUnit * ventaActual.cantidad; 
					productosTotales += ventaActual.cantidad;
				}
			}
			fread(&ventaActual, sizeof(ventaActual), 1, ptr);
		}
		fputs ("\nTotal en ventas: ", txt); 
		itoa(montoTotal, buff, 10);
		fputs(buff, txt);
		fputs(" [", txt);
		numLiteralChar(montoTotal, buff);
		fputs(buff, txt);
		fputs("] Bolivianos. \nProductos: ", txt);
		itoa(productosTotales, buff, 10);
		fputs(buff, txt);
		numLiteralChar(productosTotales, buff);
		fputs (" [", txt);
		fputs(buff, txt); 
		fputs("]", txt);

		fclose(txt);
		fclose(ptr);
		cout << "[Reporte generado en direccion del programa (reporteVentasProducto.txt)]" << endl;
		system("pause");
		system("cls");
	}
	else cout << "[Atencion! : Archivo Inexistente]" << endl;
}

void comprasEntreFechasProducto(int idProd)
{
	char fecha1[12], fecha2[12], aux[4], num[1000];
	bool val;
	int anho1, anho2, anho3, mes1, mes2, mes3, dia1, dia2, dia3;
	do {
		val = true;
		cout << "o-------------------------------------o" << endl;
		cout << "   Compras entre fechas por producto" << endl;
		cout << "o-------------------------------------o" << endl;
		cout << "Ingrese primera fecha " << endl;
		generar_fecha(fecha1);
		cout << "Ingrese segunda fecha " << endl;
		generar_fecha(fecha2);
		aux[0] = fecha1[0]; aux[1] = fecha1[1]; aux[2] = '\0';
		dia1 = atoi(aux);
		aux[0] = fecha2[0]; aux[1] = fecha2[1]; aux[2] = '\0';
		dia2 = atoi(aux);
		aux[0] = fecha1[3]; aux[1] = fecha1[4]; aux[2] = '\0';
		mes1 = atoi(aux);
		aux[0] = fecha2[3]; aux[1] = fecha2[4]; aux[2] = '\0';
		mes2 = atoi(aux);
		aux[0] = fecha1[6]; aux[1] = fecha1[7]; aux[2] = fecha1[8]; aux[3] = fecha1[9];
		anho1 = atoi(aux);
		aux[0] = fecha2[6]; aux[1] = fecha2[7]; aux[2] = fecha2[8]; aux[3] = fecha2[9];
		anho2 = atoi(aux);

		if (anho2 < anho1) {
			cout << "Ingrese las fechas correctamente" << endl;
			val = false;
		}
		else if ( (anho2 == anho1) && (mes2 < mes1) )
		{
			cout << "Ingrese las fechas correctamente" << endl;
			val = false;
		}
		else if ( (anho2 == anho1) && (mes2 == mes1) && (dia2 <= dia1) )
		{
			cout << "Ingrese las fechas correctamente" << endl;
			val = false;
		}
	} while (!val);
	cout << "o-----------------------------------------------------------------------------o" << endl;
	cout<<endl<<"					COMPRA		"<<endl;
	cout<<"ID \t Fecha \t\t Cantidad \t Producto" << endl;
	cout << "o-----------------------------------------------------------------------------o" << endl;
	FILE *ptr = fopen("compra.dat", "rb");
	regCompra compraActual;
	val = false;
	int productosTotales = 0, montoTotal = 0;
	if (ptr != NULL)
	{
		fread(&compraActual, sizeof(compraActual), 1, ptr);
		while (!feof(ptr))
		{
			val = true; 
			aux[0] = compraActual.fecha[0]; aux[1] = compraActual.fecha[1]; aux[2] = '\0';
			dia3 = atoi(aux);
			aux[0] = compraActual.fecha[3]; aux[1] = compraActual.fecha[4]; aux[2] = '\0';
			mes3 = atoi(aux);
			aux[0] = compraActual.fecha[6]; aux[1] = compraActual.fecha[7]; aux[2] = compraActual.fecha[8]; aux[3] = compraActual.fecha[9];
			anho3 = atoi(aux);
			if (compraActual.estado == 'A' && compraActual.idProd == idProd)
			{
				if (anho3 < anho1) val = false;
				else if ( (anho3 == anho1) && (mes3 < mes1) ) val = false;
				else if ( (anho3 == anho1) && (mes3 == mes1) && (dia3 < dia1) ) val = false;
				if (anho2 < anho3) val = false;
				else if ( (anho2 == anho3) && (mes2 < mes3) ) val = false;
				else if ( (anho2 == anho3) && (mes2 == mes3) && (dia2 < dia3) ) val = false;

				if (val) 
				{
					cout << compraActual.idCompra << "\t" << compraActual.fecha << "\t" << compraActual.cantidad;
					cout << "\t\t" << obtenerProducto(compraActual.idProd).nombre << endl;

					productosTotales += compraActual.cantidad;
				}
			}
			fread(&compraActual, sizeof(compraActual), 1, ptr);
		}
		cout  << endl << "Productos comprados: " << productosTotales << " [ ";
		numLiteral(productosTotales);
		cout << "]" << endl;
		fclose(ptr);
	}
	else cout << "Archivo no existe" << endl;
}

void comprasEntreFechasProductoTexto(int idProd)
{
	char fecha1[12], fecha2[12], aux[4];
	bool val;
	int anho1, anho2, anho3, mes1, mes2, mes3, dia1, dia2, dia3;
	do {
		val = true;
		cout << "o-------------------------------------o" << endl;
		cout << "   Ventas entre fechas por producto" << endl;
		cout << "o-------------------------------------o" << endl << endl;
		cout << "Reporte para impresion/texto" << endl << endl;
		cout << "Ingrese primera fecha " << endl;
		generar_fecha(fecha1);
		cout << "Ingrese segunda fecha " << endl;
		generar_fecha(fecha2);
		aux[0] = fecha1[0]; aux[1] = fecha1[1]; aux[2] = '\0';
		dia1 = atoi(aux);
		aux[0] = fecha2[0]; aux[1] = fecha2[1]; aux[2] = '\0';
		dia2 = atoi(aux);
		aux[0] = fecha1[3]; aux[1] = fecha1[4]; aux[2] = '\0';
		mes1 = atoi(aux);
		aux[0] = fecha2[3]; aux[1] = fecha2[4]; aux[2] = '\0';
		mes2 = atoi(aux);
		aux[0] = fecha1[6]; aux[1] = fecha1[7]; aux[2] = fecha1[8]; aux[3] = fecha1[9];
		anho1 = atoi(aux);
		aux[0] = fecha2[6]; aux[1] = fecha2[7]; aux[2] = fecha2[8]; aux[3] = fecha2[9];
		anho2 = atoi(aux);
		if (anho2 < anho1) {
			cout << "Ingrese correctamente las fechas" << endl;
			val = false;
		}
		else if ( (anho2 == anho1) && (mes2 < mes1) )
		{
			cout << "Ingrese correctamente las fechas" << endl;
			val = false;
		}
		else if ( (anho2 == anho1) && (mes2 == mes1) && (dia2 <= dia1) )
		{
			cout << "Ingrese correctamente las fechas" << endl;
			val = false;
		}
	} while (!val);


	FILE *ptr, *txt; 
	ptr = fopen("compra.dat", "rb"); 
	txt = fopen("reporteComprasProducto.txt", "w");
	regCompra compraActual;
	char buff[1000];
	fputs("Producto: ", txt);
	fputs(obtenerProducto(idProd).nombre, txt);	fputs("\n", txt);
	fputs("Reporte calculado entre fechas: ", txt);
	fputs(fecha1, txt);
	fputs(" - ", txt);
	fputs(fecha2, txt);
	fputs("\no-----------------------------------------------------------------------------o", txt);
	fputs("\n	Compra \n", txt);
	fputs("ID \t Fecha \t\t Cantidad \t Producto\n", txt);
	fputs("o-----------------------------------------------------------------------------o\n", txt);
	int productosTotales = 0;
	if (ptr != NULL)
	{
		fread(&compraActual, sizeof(compraActual), 1, ptr);
		while (!feof(ptr))
		{
			val = true;
			aux[0] = compraActual.fecha[0]; aux[1] = compraActual.fecha[1]; aux[2] = '\0';
			dia3 = atoi(aux);

			aux[0] = compraActual.fecha[3]; aux[1] = compraActual.fecha[4]; aux[2] = '\0';
			mes3 = atoi(aux);

			aux[0] = compraActual.fecha[6]; aux[1] = compraActual.fecha[7]; aux[2] = compraActual.fecha[8]; aux[3] = compraActual.fecha[9];
			anho3 = atoi(aux);
			if (compraActual.estado == 'A' && compraActual.idProd == idProd)
			{
				if (anho3 < anho1) val = false;
				else if ( (anho3 == anho1) && (mes3 < mes1) ) val = false;
				else if ( (anho3 == anho1) && (mes3 == mes1) && (dia3 < dia1) ) val = false;
				if (anho2 < anho3) val = false;
				else if ( (anho2 == anho3) && (mes2 < mes3) ) val = false;
				else if ( (anho2 == anho3) && (mes2 == mes3) && (dia2 < dia3) ) val = false;
				if (val)
				{
					itoa(compraActual.idCompra, buff, 10);
					fputs(buff, txt);	fputs("\t", txt);

					fputs(compraActual.fecha, txt); fputs("\t", txt);

					itoa(compraActual.cantidad, buff, 10);
					fputs(buff, txt);	 fputs("\t\t", txt);

					fputs(obtenerProducto(compraActual.idProd).nombre, txt);	fputs("\n", txt);
				
					productosTotales += compraActual.cantidad;
				}
			}
			fread(&compraActual, sizeof(compraActual), 1, ptr);
		}
		fputs("\nProductos comprados: ", txt);
		itoa(productosTotales, buff, 10);
		fputs(buff, txt);
		numLiteralChar(productosTotales, buff);
		fputs (" [", txt);
		fputs(buff, txt); 
		fputs("]", txt);

		fclose(txt);
		fclose(ptr);
		cout << "Reporte generado" << endl;
		system("pause");
		system("cls");
	}
	else cout << "Archivo no existe" << endl;
}

void comprasEntreFechas()
{
	char fecha1[12], fecha2[12], aux[4], num[1000];
	bool val;
	int anho1, anho2, anho3, mes1, mes2, mes3, dia1, dia2, dia3;
	do {
		val = true;
		cout << "o--------------------------o" << endl;
		cout << "   Compras entre fechas " << endl;
		cout << "o--------------------------o" << endl;
		cout << "Ingrese primera fecha " << endl;
		generar_fecha(fecha1);
		cout << "Ingrese segunda fecha " << endl;
		generar_fecha(fecha2);
		aux[0] = fecha1[0]; aux[1] = fecha1[1]; aux[2] = '\0';
		dia1 = atoi(aux);
		aux[0] = fecha2[0]; aux[1] = fecha2[1]; aux[2] = '\0';
		dia2 = atoi(aux);
		aux[0] = fecha1[3]; aux[1] = fecha1[4]; aux[2] = '\0';
		mes1 = atoi(aux);
		aux[0] = fecha2[3]; aux[1] = fecha2[4]; aux[2] = '\0';
		mes2 = atoi(aux);
		aux[0] = fecha1[6]; aux[1] = fecha1[7]; aux[2] = fecha1[8]; aux[3] = fecha1[9];
		anho1 = atoi(aux);
		aux[0] = fecha2[6]; aux[1] = fecha2[7]; aux[2] = fecha2[8]; aux[3] = fecha2[9];
		anho2 = atoi(aux);

		if (anho2 < anho1) {
			cout << "Ingrese las fechas correctamente" << endl;
			val = false;
		}
		else if ( (anho2 == anho1) && (mes2 < mes1) )
		{
			cout << "Ingrese las fechas correctamente" << endl;
			val = false;
		}
		else if ( (anho2 == anho1) && (mes2 == mes1) && (dia2 <= dia1) )
		{
			cout << "Ingrese las fechas correctamente" << endl;
			val = false;
		}
	} while (!val);

	cout << "o-----------------------------------------------------------------------------o" << endl;
	cout<<endl<<"				COMPRA		"<<endl;
	cout<<"ID \t Fecha \t\t Cantidad \t Producto" << endl;
	cout << "o-----------------------------------------------------------------------------o" << endl;
	FILE *ptr = fopen("compra.dat", "rb");
	regCompra compraActual;
	val = false;
	int productosTotales = 0, montoTotal = 0;
	if (ptr != NULL)
	{
		fread(&compraActual, sizeof(compraActual), 1, ptr);
		while (!feof(ptr))
		{
			val = true; 
			aux[0] = compraActual.fecha[0]; aux[1] = compraActual.fecha[1]; aux[2] = '\0';
			dia3 = atoi(aux);
			aux[0] = compraActual.fecha[3]; aux[1] = compraActual.fecha[4]; aux[2] = '\0';
			mes3 = atoi(aux);
			aux[0] = compraActual.fecha[6]; aux[1] = compraActual.fecha[7]; aux[2] = compraActual.fecha[8]; aux[3] = compraActual.fecha[9];
			anho3 = atoi(aux);
			if (compraActual.estado == 'A')
			{
				if (anho3 < anho1) val = false;
				else if ( (anho3 == anho1) && (mes3 < mes1) ) val = false;
				else if ( (anho3 == anho1) && (mes3 == mes1) && (dia3 < dia1) ) val = false;
				if (anho2 < anho3) val = false;
				else if ( (anho2 == anho3) && (mes2 < mes3) ) val = false;
				else if ( (anho2 == anho3) && (mes2 == mes3) && (dia2 < dia3) ) val = false;

				if (val) 
				{
					cout << compraActual.idCompra << "\t" << compraActual.fecha << "\t" << compraActual.cantidad;
					cout << "\t\t" << obtenerProducto(compraActual.idProd).nombre << endl;

					productosTotales += compraActual.cantidad;
				}
			}
			fread(&compraActual, sizeof(compraActual), 1, ptr);
		}
		cout  << endl << "Productos comprados: " << productosTotales << " [ ";
		numLiteral(productosTotales);
		cout << "]" << endl;
		fclose(ptr);
		system("pause");
		system("cls");
	}
	else cout << "Archivo no existe" << endl;
}

void comprasEntreFechasTexto()
{
	char fecha1[12], fecha2[12], aux[4];
	bool val;
	int anho1, anho2, anho3, mes1, mes2, mes3, dia1, dia2, dia3;
	do {
		val = true;
		cout << "o--------------------------o" << endl;
		cout << "   Compras entre fechas " << endl;
		cout << "o--------------------------o" << endl << endl;
		cout << "Reporte para impresion/texto" << endl << endl;
		cout << "Ingrese primera fecha " << endl;
		generar_fecha(fecha1);
		cout << "Ingrese segunda fecha " << endl;
		generar_fecha(fecha2);
		aux[0] = fecha1[0]; aux[1] = fecha1[1]; aux[2] = '\0';
		dia1 = atoi(aux);
		aux[0] = fecha2[0]; aux[1] = fecha2[1]; aux[2] = '\0';
		dia2 = atoi(aux);
		aux[0] = fecha1[3]; aux[1] = fecha1[4]; aux[2] = '\0';
		mes1 = atoi(aux);
		aux[0] = fecha2[3]; aux[1] = fecha2[4]; aux[2] = '\0';
		mes2 = atoi(aux);
		aux[0] = fecha1[6]; aux[1] = fecha1[7]; aux[2] = fecha1[8]; aux[3] = fecha1[9];
		anho1 = atoi(aux);
		aux[0] = fecha2[6]; aux[1] = fecha2[7]; aux[2] = fecha2[8]; aux[3] = fecha2[9];
		anho2 = atoi(aux);
		if (anho2 < anho1) {
			cout << "Ingrese correctamente las fechas" << endl;
			val = false;
		}
		else if ( (anho2 == anho1) && (mes2 < mes1) )
		{
			cout << "Ingrese correctamente las fechas" << endl;
			val = false;
		}
		else if ( (anho2 == anho1) && (mes2 == mes1) && (dia2 <= dia1) )
		{
			cout << "Ingrese correctamente las fechas" << endl;
			val = false;
		}
	} while (!val);


	FILE *ptr, *txt; 
	ptr = fopen("compra.dat", "rb"); 
	txt = fopen("reporteCompras.txt", "w");
	regCompra compraActual;
	char buff[1000];
	fputs("Reporte calculado entre fechas: ", txt);
	fputs(fecha1, txt);
	fputs(" - ", txt);
	fputs(fecha2, txt);
	fputs("\no-----------------------------------------------------------------------------o", txt);
	fputs("\n							Compra \n", txt);
	fputs("ID \t Fecha \t\t Cantidad \t Producto\n", txt);
	fputs("o-----------------------------------------------------------------------------o\n", txt);
	int productosTotales = 0;
	if (ptr != NULL)
	{
		fread(&compraActual, sizeof(compraActual), 1, ptr);
		while (!feof(ptr))
		{
			val = true;
			aux[0] = compraActual.fecha[0]; aux[1] = compraActual.fecha[1]; aux[2] = '\0';
			dia3 = atoi(aux);

			aux[0] = compraActual.fecha[3]; aux[1] = compraActual.fecha[4]; aux[2] = '\0';
			mes3 = atoi(aux);

			aux[0] = compraActual.fecha[6]; aux[1] = compraActual.fecha[7]; aux[2] = compraActual.fecha[8]; aux[3] = compraActual.fecha[9];
			anho3 = atoi(aux);
			if (compraActual.estado == 'A')
			{
				if (anho3 < anho1) val = false;
				else if ( (anho3 == anho1) && (mes3 < mes1) ) val = false;
				else if ( (anho3 == anho1) && (mes3 == mes1) && (dia3 < dia1) ) val = false;
				if (anho2 < anho3) val = false;
				else if ( (anho2 == anho3) && (mes2 < mes3) ) val = false;
				else if ( (anho2 == anho3) && (mes2 == mes3) && (dia2 < dia3) ) val = false;
				if (val)
				{
					itoa(compraActual.idCompra, buff, 10);
					fputs(buff, txt);	fputs("\t", txt);

					fputs(compraActual.fecha, txt); fputs("\t", txt);

					itoa(compraActual.cantidad, buff, 10);
					fputs(buff, txt);	 fputs("\t\t", txt);

					fputs(obtenerProducto(compraActual.idProd).nombre, txt);	fputs("\n", txt);
				
					productosTotales += compraActual.cantidad;
				}
			}
			fread(&compraActual, sizeof(compraActual), 1, ptr);
		}
		fputs("\nProductos comprados: ", txt);
		itoa(productosTotales, buff, 10);
		fputs(buff, txt);
		numLiteralChar(productosTotales, buff);
		fputs (" [", txt);
		fputs(buff, txt); 
		fputs("] Productos.", txt);

		fclose(txt);
		fclose(ptr);
		cout << "Reporte generado" << endl;
		system("pause");
		system("cls");
	}
	else cout << "Archivo no existe" << endl;
}

void ventasEntreFechasCliente(int idCliente)
{
	char fecha1[12], fecha2[12], aux[4], num[1000];
	bool val;
	int anho1, anho2, anho3, mes1, mes2, mes3, dia1, dia2, dia3;
	do {
		val = true;
		cout << "o--------------------------------------o" << endl;
		cout << "   Compras entre fechas por cliente" << endl;
		cout << "o--------------------------------------o" << endl;
		cout << "Ingrese primera fecha " << endl;
		generar_fecha(fecha1);
		cout << "Ingrese segunda fecha " << endl;
		generar_fecha(fecha2);
		aux[0] = fecha1[0]; aux[1] = fecha1[1]; aux[2] = '\0';
		dia1 = atoi(aux);
		aux[0] = fecha2[0]; aux[1] = fecha2[1]; aux[2] = '\0';
		dia2 = atoi(aux);
		aux[0] = fecha1[3]; aux[1] = fecha1[4]; aux[2] = '\0';
		mes1 = atoi(aux);
		aux[0] = fecha2[3]; aux[1] = fecha2[4]; aux[2] = '\0';
		mes2 = atoi(aux);
		aux[0] = fecha1[6]; aux[1] = fecha1[7]; aux[2] = fecha1[8]; aux[3] = fecha1[9];
		anho1 = atoi(aux);
		aux[0] = fecha2[6]; aux[1] = fecha2[7]; aux[2] = fecha2[8]; aux[3] = fecha2[9];
		anho2 = atoi(aux);

		if (anho2 < anho1) {
			cout << "Ingrese las fechas correctamente" << endl;
			val = false;
		}
		else if ( (anho2 == anho1) && (mes2 < mes1) )
		{
			cout << "Ingrese las fechas correctamente" << endl;
			val = false;
		}
		else if ( (anho2 == anho1) && (mes2 == mes1) && (dia2 <= dia1) )
		{
			cout << "Ingrese las fechas correctamente" << endl;
			val = false;
		}
	} while (!val);
	cout << "o-----------------------------------------------------------------------------o" << endl;
	cout<<endl<<"					VENTA		"<<endl;
	cout<<"ID \t Fecha \t\t Cantidad\tPrecioUnit\tProducto\t\tVendedor\tCliente" << endl;
	cout << "o-----------------------------------------------------------------------------o" << endl;
	FILE *ptr = fopen("venta.dat", "rb");
	regVenta ventaActual;
	val = false;
	int productosTotales = 0, montoTotal = 0;
	if (ptr != NULL)
	{
		fread(&ventaActual, sizeof(ventaActual), 1, ptr);
		while (!feof(ptr))
		{
			val = true;
			aux[0] = ventaActual.fecha[0]; aux[1] = ventaActual.fecha[1]; aux[2] = '\0';
			dia3 = atoi(aux);
			aux[0] = ventaActual.fecha[3]; aux[1] = ventaActual.fecha[4]; aux[2] = '\0';
			mes3 = atoi(aux);
			aux[0] = ventaActual.fecha[6]; aux[1] = ventaActual.fecha[7]; aux[2] = ventaActual.fecha[8]; aux[3] = ventaActual.fecha[9];
			anho3 = atoi(aux);
			if (ventaActual.estado == 'A' && ventaActual.idCliente == idCliente)
			{
				if (anho3 < anho1) val = false;
				else if ( (anho3 == anho1) && (mes3 < mes1) ) val = false;
				else if ( (anho3 == anho1) && (mes3 == mes1) && (dia3 < dia1) ) val = false;
				if (anho2 < anho3) val = false;
				else if ( (anho2 == anho3) && (mes2 < mes3) ) val = false;
				else if ( (anho2 == anho3) && (mes2 == mes3) && (dia2 < dia3) ) val = false;

				if (val) 
				{
					cout << ventaActual.idVenta << "\t" << ventaActual.fecha << "\t" << ventaActual.cantidad << "\t\t" << ventaActual.precioUnit << "\t\t" << obtenerProducto(ventaActual.idProd).nombre << "\t\t" <<   obtenerVendedor(ventaActual.idVend).nombre << "\t\t" << obtenerCliente(ventaActual.idCliente).nombre << endl;
					
					cout << "Total en venta: " << ventaActual.precioUnit * ventaActual.cantidad << " [";
					numLiteral( ventaActual.precioUnit * ventaActual.cantidad );
					cout << " ] Bolivianos." << endl << endl;

					montoTotal += ventaActual.precioUnit * ventaActual.cantidad; 
					productosTotales += ventaActual.cantidad;
				}
			}
			fread(&ventaActual, sizeof(ventaActual), 1, ptr);
		}
		cout << endl << "Total en ventas: " << montoTotal << " [ ";
		numLiteral( montoTotal );
		cout << "] Bolivianos." << endl << "Productos vendidos: " << productosTotales << " [ ";
		numLiteral(productosTotales);
		cout << "]" << endl;
		fclose(ptr);
	}
	else cout << "Archivo no existe" << endl;
}

void ventasEntreFechasClienteTexto(int idCliente)
{
	char fecha1[12], fecha2[12], aux[4];
	bool val;
	int anho1, anho2, anho3, mes1, mes2, mes3, dia1, dia2, dia3;
	do {
		val = true;
		cout << "o--------------------------------------o" << endl;
		cout << "   Compras entre fechas por cliente" << endl;
		cout << "o--------------------------------------o" << endl << endl;
		cout << "Reporte para impresion/texto" << endl << endl;
		cout << "Ingrese primera fecha " << endl;
		generar_fecha(fecha1);
		cout << "Ingrese segunda fecha " << endl;
		generar_fecha(fecha2);
		aux[0] = fecha1[0]; aux[1] = fecha1[1]; aux[2] = '\0';
		dia1 = atoi(aux);
		aux[0] = fecha2[0]; aux[1] = fecha2[1]; aux[2] = '\0';
		dia2 = atoi(aux);
		aux[0] = fecha1[3]; aux[1] = fecha1[4]; aux[2] = '\0';
		mes1 = atoi(aux);
		aux[0] = fecha2[3]; aux[1] = fecha2[4]; aux[2] = '\0';
		mes2 = atoi(aux);
		aux[0] = fecha1[6]; aux[1] = fecha1[7]; aux[2] = fecha1[8]; aux[3] = fecha1[9];
		anho1 = atoi(aux);
		aux[0] = fecha2[6]; aux[1] = fecha2[7]; aux[2] = fecha2[8]; aux[3] = fecha2[9];
		anho2 = atoi(aux);
		if (anho2 < anho1) {
			cout << "Ingrese correctamente las fechas" << endl;
			val = false;
		}
		else if ( (anho2 == anho1) && (mes2 < mes1) )
		{
			cout << "Ingrese correctamente las fechas" << endl;
			val = false;
		}
		else if ( (anho2 == anho1) && (mes2 == mes1) && (dia2 <= dia1) )
		{
			cout << "Ingrese correctamente las fechas" << endl;
			val = false;
		}
	} while (!val);


	FILE *ptr, *txt; 
	ptr = fopen("venta.dat", "rb"); 
	txt = fopen("reporteVentasCliente.txt", "w");
	regVenta ventaActual;
	char buff[1000];
	fputs("Cliente: ", txt);
	fputs(obtenerCliente(idCliente).nombre, txt);	fputs("\n", txt);
	fputs("Reporte calculado entre fechas: ", txt);
	fputs(fecha1, txt);
	fputs(" - ", txt);
	fputs(fecha2, txt);
	fputs("\no-----------------------------------------------------------------------------o", txt);
	fputs("\n							Venta		\n", txt);
	fputs("ID \t Fecha \t\t Cantidad\tPrecioUnit\tProducto\tVendedor\tCliente\n", txt);
	fputs("o-----------------------------------------------------------------------------o\n", txt);

	int productosTotales = 0, montoTotal = 0;
	if (ptr != NULL)
	{
		fread(&ventaActual, sizeof(ventaActual), 1, ptr);
		while (!feof(ptr))
		{
			val = true;
			aux[0] = ventaActual.fecha[0]; aux[1] = ventaActual.fecha[1]; aux[2] = '\0';
			dia3 = atoi(aux);

			aux[0] = ventaActual.fecha[3]; aux[1] = ventaActual.fecha[4]; aux[2] = '\0';
			mes3 = atoi(aux);

			aux[0] = ventaActual.fecha[6]; aux[1] = ventaActual.fecha[7]; aux[2] = ventaActual.fecha[8]; aux[3] = ventaActual.fecha[9];
			anho3 = atoi(aux);
			if (ventaActual.estado == 'A' && ventaActual.idCliente == idCliente)
			{
				if (anho3 < anho1) val = false;
				else if ( (anho3 == anho1) && (mes3 < mes1) ) val = false;
				else if ( (anho3 == anho1) && (mes3 == mes1) && (dia3 < dia1) ) val = false;
				if (anho2 < anho3) val = false;
				else if ( (anho2 == anho3) && (mes2 < mes3) ) val = false;
				else if ( (anho2 == anho3) && (mes2 == mes3) && (dia2 < dia3) ) val = false;
				if (val)
				{
					itoa(ventaActual.idVenta, buff, 10);
					fputs(buff, txt);	fputs("\t", txt);

					fputs(ventaActual.fecha, txt); fputs("\t", txt);

					itoa(ventaActual.cantidad, buff, 10);
					fputs(buff, txt);	 fputs("\t\t", txt);

					itoa((int)ventaActual.precioUnit, buff, 10);
					fputs(buff, txt);	fputs("\t\t", txt);

					fputs(obtenerProducto(ventaActual.idProd).nombre, txt);	fputs("\t\t", txt);
					
					fputs(obtenerVendedor(ventaActual.idVend).nombre, txt);	fputs("\t", txt);
					
					fputs(obtenerCliente(ventaActual.idCliente).nombre, txt); fputs("\n", txt);
					fputs("Total en ventas: ", txt); 
					itoa((int)ventaActual.precioUnit * ventaActual.cantidad, buff, 10);
					fputs (buff, txt); fputs (" [", txt);
					numLiteralChar((int)(ventaActual.precioUnit * ventaActual.cantidad), buff);
					fputs(buff, txt); fputs("] Bolivianos.\n", txt);
					montoTotal += ventaActual.precioUnit * ventaActual.cantidad; 
					productosTotales += ventaActual.cantidad;
				}
			}
			fread(&ventaActual, sizeof(ventaActual), 1, ptr);
		}
		fputs ("\nVentas totales: ", txt); 
		itoa(montoTotal, buff, 10);
		fputs(buff, txt);
		fputs(" [", txt);
		numLiteralChar(montoTotal, buff);
		fputs(buff, txt);
		fputs("] Bolivianos. \nProductos vendidos: ", txt);
		itoa(productosTotales, buff, 10);
		fputs(buff, txt);
		numLiteralChar(productosTotales, buff);
		fputs (" [", txt);
		fputs(buff, txt); 
		fputs("]", txt);

		fclose(txt);
		fclose(ptr);
		cout << "Reporte generado" << endl;
		system("pause");
		system("cls");
	}
	else cout << "Archivo no existe" << endl;
}


/// Menus 
void menu_producto()
{
	char opcion[20];
	int op,nro;
	do
	{
		do
		{
			cout << "o----------------------o" << endl;
			cout << "     Menu Productos     " << endl;
			cout << "o----------------------o" << endl << endl;
			cout << " 1. Nuevo producto." << endl;
			cout << " 2. Borrar." << endl;
			cout << " 3. Editar." << endl;
			cout << " 4. Mostrar." << endl;
			cout << " 5. Limpiar Archivo." << endl;
			cout << " 0. Volver al Menu principal." << endl << endl;
			cout << "Ingrese la opcion: " ;
			gets(opcion);
			system("cls");
		} while (!verif_solo_numeros(opcion));
		op = atoi(opcion);
		switch(op)
		{
		case 5: archivo_producto();
				break;
		case 1: agregar_producto();
				break;
		case 2: mostrar_producto();
				eliminar_producto();
				break;
		case 3: mostrar_producto();
				modificar_producto();
				break;
		case 4: mostrar_producto();
				break;
		default: break;
		}
	} while(op != 0);
}

void menu_cliente()
{
	char opcion[20];
	int op, nro;
	do
	{
		do
		{
			cout << "o----------------------o" << endl;
			cout << "      Menu Clientes     " << endl;
			cout << "o----------------------o" << endl << endl;
			cout << " 1. Nuevo cliente." << endl;
			cout << " 2. Borrar." << endl;
			cout << " 3. Editar." << endl;
			cout << " 4. Mostrar." << endl;
			cout << " 5. Limpiar Archivo." << endl;
			cout << " 0. Volver al Menu principal." << endl << endl;
			cout << "Ingrese la opcion: " ;
			gets (opcion);
			system("cls");
		} while (!verif_solo_numeros(opcion));
		op = atoi(opcion);
		switch (op)
		{
		case 5: archivo_cliente(); 
				break;
		case 1: agregar_cliente(); 
				break;
		case 2: mostrar_cliente();
				cout << endl;
				eliminar_cliente();
				break;
		case 3: mostrar_cliente();
				modificar_cliente();
				break;
		case 4: mostrar_cliente();
				break;
		default: break;
		}

	} while (op != 0);
}

void menu_vendedor()
{
	char opcion[20];
	int op;
	do
	{
		do
		{
			cout << "o----------------------o" << endl;
			cout << "     Menu Vendedores     " << endl;
			cout << "o----------------------o" << endl << endl;
			cout << " 1. Nuevo vendedor(a)." << endl;
			cout << " 2. Borrar." << endl;
			cout << " 3. Editar." << endl;
			cout << " 4. Mostrar." << endl;
			cout << " 5. Limpiar Archivo." << endl;
			cout << " 0. Volver al Menu principal." << endl << endl;
			cout << "Ingrese la opcion: " ;
			gets(opcion);
			system("cls");
		} while (!verif_solo_numeros(opcion));
		op = atoi(opcion);
		switch (op)
		{
		case 5: archivo_vendedor();	
				break;
		case 1: agregar_vendedor(); 
				break;
		case 2: mostrar_vendedor();
				eliminar_vendedor();
				break;
		case 3: mostrar_vendedor();
				modificar_vendedor();
				break;
		case 4: mostrar_vendedor();
				break;
		default: break;
		}
	} while (op != 0);
}

void menu_venta()
{
	char opcion[20];
	int op;
	do
	{
		do
		{
			cout << "o-------------------o" << endl;
			cout << "     Menu ventas     " << endl;
			cout << "o-------------------o" << endl << endl;
			cout << " 1. Nueva venta." << endl;
			cout << " 2. Borrar." << endl;
			cout << " 3. Editar." << endl;
			cout << " 4. Mostrar." << endl;
			cout << " 5. Limpiar Archivo." << endl;
			cout << " 0. Volver al Menu principal." << endl << endl;
			cout << "Ingrese la opcion: " ;
			gets(opcion);
			system("cls");
		} while (!verif_solo_numeros(opcion));
		op = atoi(opcion);
		switch (op)
		{
			case 5: archivo_venta();
					break;
			case 1: agregar_venta(); 
					break;
			case 2: mostrar_venta(); 
					eliminar_venta(); 
					break;
			case 3: mostrar_venta();
					modificar_venta();
					break;
			case 4: mostrar_venta();
					break;
			default: break;
		}
	} while (op != 0);
}

void menu_compra()
{
	char opcion[20];
	int op;
	do
	{
		do
		{
			cout << "o-------------------o" << endl;
			cout << "     Menu compra     " << endl;
			cout << "o-------------------o" << endl << endl;
			cout << " 1. Nueva compra." << endl;
			cout << " 2. Borrar." << endl;
			cout << " 3. Editar." << endl;
			cout << " 4. Mostrar." << endl;
			cout << " 5. Limpiar Archivo." << endl;
			cout << " 0. Volver al Menu principal." << endl << endl;
			cout << "Ingrese la opcion: " ;
			gets(opcion);
			system("cls");
		} while(!verif_solo_numeros(opcion));
		op = atoi(opcion);
		switch (op)
		{
		case 5: archivo_compra();
				break;
		case 1: agregar_compra(); 
				break;
		case 2: mostrar_compra();
				eliminar_compra(); 
				break;
		case 3: mostrar_compra();
				modificar_compra(); 
				break;
		case 4: mostrar_compra(); 
				break;
		default: break;
		}
	} while(op != 0);
}

void menu_reportes()
	{
	char opcion[20], aux[20];
	int op, aux2;
	do
	{
		do
		{
			cout << "o----------------------o" << endl;
			cout << "      Menu Reportes    " << endl;
			cout << "o----------------------o" << endl << endl;
			// Pedro
			cout << " 1. Compras en un periodo de fechas por producto" << endl; 
			cout << " 2. Importar a archivo de texto: Compras en un periodo de fechas por producto" << endl << endl;	
			// Leonardo Arteaga
			cout << " 3. Ventas en  un periodo de ventas por producto." << endl;
			cout << " 4. Importar a archivo de texto: Ventas en  un periodo de ventas por producto." << endl << endl;
			//  Leonardo
			cout << " 5. Ventas en un periodo de fechas por cliente." << endl;
			cout << " 6. Importar a archivo de texto: Ventas en un periodo de fechas por cliente." << endl << endl;
			// Stephany
			cout << " 7. Todas las ventas en un periodo de fechas." << endl;
			cout << " 8. Importar a archivo de texto: Todas las ventas en un periodo de fechas." << endl << endl;
			// Yumi
			cout << " 9. Todas las compras en un periodo de fechas." << endl;
			cout << " 10. Importar a archivo de texto: Todas las compras en un periodo de fechas." << endl << endl;
			cout << " 0. Volver al Menu principal." << endl << endl;
			cout << "Ingrese la opcion: " ;
			gets(opcion);
			system("cls");
		} while(!verif_solo_numeros(opcion));
		op = atoi(opcion);
		switch (op)
		{
		case 1: do
				{
					cout << "Ingrese producto a realizar reporte" << endl;
					gets(aux);
					system("CLS");
				} while (!verif_solo_numeros(aux));
				aux2 = atoi(aux);
				if (!existeProducto(aux2))
				{
					cout << "El producto indicado no existe" << endl;
					system("PAUSE");
					system("CLS");
					return;
				}
				comprasEntreFechasProducto(aux2);
				system("PAUSE");
				system("CLS");
				break;
		case 2: do
				{
					cout << "Ingrese producto a realizar reporte" << endl;
					gets(aux);
					system("CLS");
				} while (!verif_solo_numeros(aux));
				aux2 = atoi(aux);
				if (!existeProducto(aux2))
				{
					cout << "El producto indicado no existe" << endl;
					system("PAUSE");
					system("CLS");
					return;
				}
				comprasEntreFechasProductoTexto(aux2);
				system("PAUSE");
				system("CLS");
				break;
		case 3: 
				do
				{
					cout << "Ingrese producto a realizar reporte" << endl;
					gets(aux);
					system("CLS");
				} while (!verif_solo_numeros(aux));
				aux2 = atoi(aux);
				if (!existeProducto(aux2))
				{
					cout << "El producto indicado no existe" << endl;
					system("PAUSE");
					system("CLS");
					return;
				}
				ventasEntreFechasProducto(aux2);
				system("PAUSE");
				system("CLS");
				break;
		case 4: 
				do
				{
					cout << "Ingrese producto a realizar reporte" << endl;
					gets(aux);
					system("cls");
				} while (!verif_solo_numeros(aux));
				aux2 = atoi(aux);
				if (!existeProducto(aux2))
				{
					cout << "El producto indicado no existe" << endl;
					system("PAUSE");
					system("CLS");
					return;
				}
				ventasEntreFechasProductoTexto(aux2);
				system("PAUSE");
				system("CLS");
				break;
		case 5: do
				{
					cout << "Ingrese cliente a realizar reporte" << endl;
					gets(aux);
					system("cls");
				} while (!verif_solo_numeros(aux));
				aux2 = atoi(aux);
				if (!existeCliente(aux2))
				{
					cout << "El producto indicado no existe" << endl;
					system("PAUSE");
					system("CLS");
					return;
				}
				ventasEntreFechasCliente(aux2);
				system("PAUSE");
				system("CLS");
				break;
		case 6: do
				{
					cout << "Ingrese cliente a realizar reporte" << endl;
					gets(aux);
					system("cls");
				} while (!verif_solo_numeros(aux));
				aux2 = atoi(aux);
				if (!existeCliente(aux2))
				{
					cout << "El cliente indicado no existe" << endl;
					system("PAUSE");
					system("CLS");
					return;
				}
				ventasEntreFechasClienteTexto(aux2);
				system("PAUSE");
				system("CLS");
				break;
		case 7: ventasEntreFechas();
				system("PAUSE");
				system("CLS");
				break;
		case 8: ventasEntreFechasTexto();
				system("PAUSE");
				system("CLS");
				break;
		case 9: comprasEntreFechas();
				system("PAUSE");
				system("CLS");
				break;
		case 10: comprasEntreFechasTexto();
				system("PAUSE");
				system("CLS");
				break;
		default: break;
		}
	} while(op != 0);
}
