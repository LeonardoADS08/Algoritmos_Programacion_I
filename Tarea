/// Solo si usa compilador GNU GCC
//#include <bits/stdc++.h>
///

#include <iostream>
#include <algorithm>
#include <cmath>
#include <map>
#include <ctime>
#include <cstring>
#include <cstdio>
using namespace std;

const int MAXN = 10000;
int fib[MAXN];
typedef unsigned long long i64;
int digitos (i64 a) { return i64( log10( float(a) ) ) + 1; }

int invertir (int a)
{
    int res = 0;
    while (a)
    {
        res = res*10 + a%10;
        a /= 10;
    }
    return res;
}

int concatenar(int a, int b)
{
    if (a > b) swap(a, b);
    return a*pow( 10.0, digitos(b) ) + b;
}

int eliminarRepetidos(int a)
{
    int res = 0, aux = a;
    map<int, int> rep;
    while (aux)
    {
        ++rep[aux%10];
        aux /= 10;
    }
    aux = a;
    while (aux)
    {
        if (rep[aux%10] == 1) res = res*10 +  aux%10;
        aux /= 10;
    }
    return invertir(res);
}

int eliminarMayorDigito(int a)
{
    int may = a%10, aux = a/10, res = 0;
    while (aux)
    {
        if (aux%10 > may) may = aux%10;
        aux /= 10;
    }
    aux = a;
    for (int i = 0; i < digitos(a); ++i)
    {
        if (aux%10 != may) res = res*10 + aux%10;
        aux /= 10;
    }
    return invertir(res);
}

bool esCapicua(int a)
{
    if (a == invertir(a)) return true;
    return false;
}

int insertarDigito(int a, int dig)
{
    if (a%10 < dig) return a*10 + dig;
    if (invertir(a)%10 > dig) return invertir( invertir(a)*10 + dig );
    int partA = a/10, partB = a%10;
    while (partA)
    {
        if (dig > partA%10 && partB%10 > dig)
        {
            partB = invertir(partB);
            return (partA*10 + dig) * pow(10.0, digitos(partB)) + partB;
        }
        else
        {
            partB = partB*10 + partA%10;
            partA /= 10;
        }
    }
}

int tiluchiSueldos(int a)
{
    int res = 0, h;
    for (int i = 0; i < a; ++i)
    {
        cout << "Ingrese las horas trabajadas del obrero N." << i+1 << endl;
        cin >> h;
        res += h*20;
    }
    return res;
}

void adivinarNumero()
{
    srand((unsigned)time(NULL));
    int aleatorio = rand()%100 + 1, a;
    cout << "Adivine el numero aleatorio, ingrese un numero natural entre el 1 y el 100" << endl;
    do
    {
        cin >> a;
        if (a > aleatorio) cout << "Muy grande" << endl;
        else if (a < aleatorio) cout << "Muy pequenho" << endl;
        else cout << "Correcto!" << endl;
        system("PAUSE");
        system("CLS");
    } while (a != aleatorio);

}

int sumarDigitos(int a)
{
    int res = 0;
    while (a)
    {
        res += a%10;
        a /= 10;
    }
    return res;
}

int crapulo (int a)
{
    int res = sumarDigitos(a);
    while (res > 9)
        res = sumarDigitos(res);
    return res;
}

void automorficos()
{
    int atm, pot;
    for (int i = 1; i <= 1000; ++i)
    {
        atm = pow(float(i), 2 );
        pot = pow(10.0, digitos(i));
        atm = atm % pot;
        if (i == atm) cout << i << " Automorfico con " << atm << endl;
    }
}

void invertirCadena(char v[])
{
    int aux, n = strlen(v);
    for (int i = 0; i < n/2; ++i)
    {
        swap(v[i], v[n-i-1]);
    }
}

bool palindrome(char v[])
{
    char aux[MAXN];
    strcpy(aux, v);
    invertirCadena(aux);
    if (strcmp(v, aux) == 0) return true;
    else return false;
}

int minusculas(char v[])
{
    int res = 0;
    for (int i = 0; i < strlen(v); ++i)
    {
        if (islower(v[i])) ++res;
    }
    return res;
}

int mayusculas(char v[])
{
    int res = 0;
    for (int i = 0; i < strlen(v); ++i)
    {
        if (isupper(v[i])) ++res;
    }
    return res;
}

int frecuenciaCadena(char v[], char a)
{
    int freq = 0;
    for (int i = 0; i < strlen(v); ++i)
        if (v[i] == a) ++freq;
    return freq;
}

void convertirMinusculas(char v[])
{
    for (int i = 0; i < strlen(v); ++i)
        v[i] = tolower(v[i]);
}

int charToInt(char a)
{
    char tabla[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int i = 0; i <= 16; ++i)
        if (a == tabla[i]) return i;
    return 0;
}

char intToChar(int a) {
    char tabla[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    return tabla[a];
}

void convertirBase(char v[], i64 a, int b)
{
    int i = 0;
    while (a >= b)
    {
        v[i] = intToChar(a%b);
        a /= b;
        ++i;
    }
    v[i] = intToChar(a);
    v[i+1] = '\0';
    invertirCadena(v);
}

void cambioBase(char v[], int b, int o)
{
    i64 temp = 0;
    int n = strlen(v);
    if (b == o) return;
    if (b != 10)
    {
        for (int i = 0; i < n; ++i)
        {
            temp = temp + charToInt(v[i]) * pow(b, n-i-1);
        }
    }
    else
    {
        for (int i = 0; i < n; ++i)
        {
            temp = temp*10 + charToInt(v[i]);
        }
    }
    memset(v, 0, sizeof(v));
    convertirBase(v, temp, o);
}

void numLiteral(char v[], int n)
{
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
		case 1: if (n == 0) strcat(v, "cien ");
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
	aux = n / 10;
	n %= 10;
	switch (aux)
	{
		case 1: if (n > 5) strcat(v, "diez ");
				else
				{
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
	switch (aux)
	{
		case 1: strcat(v, "y uno "); break;
		case 2: strcat(v, "y dos "); break;
		case 3: strcat(v, "y tres "); break;
		case 4: strcat(v, "y cuatro "); break;
		case 5: strcat(v, "y cinco "); break;
		case 6: strcat(v, "y seis "); break;
		case 7: strcat(v, "y siete "); break;
		case 8: strcat(v, "y ocho "); break;
		case 9: strcat(v, "y nueve "); break;
		default: break;
	}
}

int valorMensaje(char v[])
{
    int costo = 0;
    for (int i = 0; i < strlen(v); ++i)
    {
        if ((v[i] >= 65 && v[i] <= 89) || (v[i] >= 97 && v[i] <= 122)) costo += 10;
        else if (v[i] >= 48 && v[i] <= 57) costo += 20;
        else if (v[i] != ' ') costo += 30;
    }
    return costo;
}

void serieUno(int n)
{
    int el = 3;
    for (int i = 0; i < n; ++i)
    {
        cout << el << " ";
        el += 3;
    }
    cout << endl;
}

void serieDos(int n)
{
    for (int i = 1; i <= n; ++i)
    {
        cout << invertir( pow( float(i), 2 ) ) << " ";
    }
    cout << endl;
}

void serieTres(int n)
{
    int serie = 1;
    cout << 1 << " ";
    for (int i = 1; i < n; ++i)
    {
        cout << serie << " ";
        serie += sumarDigitos(serie);
    }
    cout << endl;
}

void serieCuatro(int n)
{
    int serie = 1;
    cout << 1 << " ";
    for (int i = 1; i < n; ++i)
    {
        cout << sumarDigitos(serie) << " ";
        serie += sumarDigitos(serie);
    }
    cout << endl;
}

void cargarVector(int v[], int n)
{
    cout << "Ingrese los elementos del vector" << endl;
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
}

void mostrarVector(int v[], int n)
{
    for (int i = 0; i < n; ++i) cout << v[i] << " ";
    cout << endl;
}

int frecuenciaVector(int v[], int n, int o)
{
    int freq = 0;
    for (int i = 0; i < n; ++i)
    {
        if (v[i] == o) ++freq;
    }
    return freq;
}

void insertionSort(int v[], int n)
{
    int j, temp;
	for (int i = 0; i < n; i++)
    {
		j = i;
		while (j > 0 && v[j] < v[j-1])
		{
            temp = v[j];
            v[j] = v[j-1];
            v[j-1] = temp;
            j--;
        }
    }
}

void eliminarElemento(int v[], int &n, int pos)
{
    for (int i = pos; i < n; ++i)
    {
        v[i] = v[i+1];
    }
    --n;
}

int busquedaLineal(int v[], int n, int obj)
{
    for (int i = 0; i < n; ++i)
    {
        if (v[i] == obj) return i;
    }
    return -1;
}

bool existe(int v[], int n, int obj)
{
    for (int i = 0; i < n; ++i)
    {
        if (v[i] == obj) return true;
    }
    return false;
}

void sumarVectores(int a[], int b[], int c[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        c[i] = a[i] + b[n-i-1];
    }
}

void recorrerVectorArriba(int v[], int n)
{
    int aux = v[0];
    for (int i = 0; i < n; ++i)
    {
        v[i] = v[i+1];
    }
    v[n-1] = aux;
}

void recorrerVectorAbajo(int v[], int n)
{
    int aux = v[n-1];
    for (int i = n-1; i > 0; --i)
    {
        v[i] = v[i-1];
    }
    v[0] = aux;
}

void unionConjuntos(int a[], int b[], int c[], int tamA, int tamB, int &tamC)
{
    tamC = 0;
    for (int i = 0; i < tamA; ++i)
    {
        if (!existe(c, tamC, a[i]))
        {
            c[tamC] = a[i];
            ++tamC;
        }
    }

    for (int i = 0; i < tamB; ++i)
    {
        if (!existe(c, tamC, b[i]))
        {
            c[tamC] = b[i];
            ++tamC;
        }
    }

}

bool esPrimo(int n)
{
    if (n == 0) return false;
    if (n == 1) return true;
    for (int i = 2; i < n; ++i)
        if (n%i == 0) return false;
    return true;
}

int enesimoPrimo(int n)
{
    int c = 0, i;
    for (i = 1; c != n; ++i)
    {
        if (esPrimo(i)) ++c;
    }
    return i - 1;
}

int calcularFib(int n)
{
    if (n == 0 || n == 1) return 1;
    if (fib[n] != -1) return fib[n];
    fib[n] = calcularFib(n-1) + calcularFib(n-2);
    return fib[n];
}

void invertirVector(int v[], int n)
{
    for (int i = 0; i < n/2; ++i)
    {
        swap(v[i], v[n-i-1]);
    }
}

void unirVectores(int a[], int b[], int c[], int tamA, int tamB, int &tamC)
{
    tamC = 0;
    for (int i = 0; i < tamA; ++i)
    {
        c[tamC] = a[i];
        ++tamC;
    }
    for (int i = 0; i < tamB; ++i)
    {
        c[tamC] = b[i];
        ++tamC;
    }
}

void fibPrimosVector(int v[], int n)
{
    int a[MAXN], tamA = n/2, b[MAXN], tamB = n - tamA;
    for (int i = 0; i < tamA; ++i)
    {
        a[i] = calcularFib(i);
    }
    for (int i = 0; i < tamB; ++i)
    {
        b[i] = enesimoPrimo(i+1);
    }
    invertirVector(a, tamA);
    invertirVector(b, tamB);
    unirVectores(b, a, v, tamA, tamB, n);

}

void operaciones(int a[], int b[], int n)
{
    int aux;
    for (int i = 0; i < n; ++i)
    {
        aux = a[i];
        b[i] = 0;
        while (aux)
        {
            if (aux%10 == 1 || aux%10 == 3 || aux%10 == 5) b[i] = b[i]*10 + aux%10;
            aux /= 10;
        }
        b[i] = invertir(b[i]);
    }
}

int main()
{
    memset(fib, -1, sizeof(fib));
    cin.sync_with_stdio(false);
    cout.sync_with_stdio(false);
    int op, a, b, c, g[MAXN], h[MAXN], i[MAXN];
    char d;
    char s[MAXN];
    do
    {
        memset(s, 0, sizeof(s));
        cout << "Tarea 1 || IS120 - Algoritmos y programacion I" << endl;
        cout << "Numeros naturales" << endl;
        cout << "1. Concatenacion de dos numeros naturales" << endl;
        cout << "2. Eliminar numeros repetidos" << endl;
        cout << "3. Invertir un numero" << endl;
        cout << "4. Eliminar el mayor digito" << endl;
        cout << "5. Insertar digito" << endl;
        cout << "6. Verificar numeros capicuas" << endl;
        cout << "7. Planilla de cancelacion - Constructura TILUCHI" << endl;
        cout << "8. Adivinar numeros" << endl;
        cout << "9. Obtener crapulo de un numero" << endl;
        cout << "10. Numeros automorfico del 1 al 1000" << endl;
        cout << endl << "Cadenas de caracteres " << endl;
        cout << "11. Invertir cadena" << endl;
        cout << "12. Verificar si una palabra es palindrome" << endl;
        cout << "13. Cantidad de minusculas" << endl;
        cout << "14. Cantidad de mayusculas" << endl;
        cout << "15. Frecuencia de un caracter" << endl;
        cout << "16. Convertir a minusculas" << endl;
        cout << "17. Cambio de base" << endl;
        cout << "18. Numeros a literal" << endl;
        cout << "19. Costo de enviar mensajes" << endl;
        cout << endl << "Secuencias - Series - Sucesiones" << endl;
        cout << "20. Generar serie tipo: 3, 6, 9, 12, 15, 18....." << endl;
        cout << "21. Generar serie tipo: 1, 4, 9, 61, 52, 63....." << endl;
        cout << "22. Generar serie tipo: 1, 1, 2, 4, 8, 16....." << endl;
        cout << "23. Generar serie tipo: 1, 1, 2, 4, 8, 7....." << endl;
        cout << endl << "Arrays - Vectores y matrices" << endl;
        cout << "24. Frecuencia de un numero" << endl;
        cout << "25. Insertion sort" << endl;
        cout << "26. Eliminar un elemento de un vector" << endl;
        cout << "27. Buscar un elemento en un vector" << endl;
        cout << "28. Suma de dos vectores" << endl;
        cout << "29. Recorrer una posicion el vector hacia arriba" << endl;
        cout << "30. Recorrer una posicion el vector hacia abajo" << endl;
        cout << "31. Union de dos conjuntos" << endl;
        cout << "32. Rellenar vector (Fib y Primos)" << endl;
        cout << "33. Conjunto de operaciones en un vector" << endl;
        cout << "34. Salir del programa" << endl;
        cin >> op;
        cin.ignore();
        switch (op)
        {
            case 1:
                cout << "Ingrese dos numeros naturales" << endl;
                cin >> a >> b;
                cout << "El resultado de concatenar es: " << concatenar(a, b) << endl;
                break;
            case 2:
                cout << "Ingrese un numero natural" << endl;
                cin >> a;
                cout << "Los numeros sin repetir son: " << eliminarRepetidos(a) << endl;
                break;
            case 3:
                cout << "Ingrese un numero natural" << endl;
                cin >> a;
                cout << "El numero invertido es: " << invertir(a);
                break;
            case 4:
                cout << "Ingrese un numero natural" << endl;
                cin >> a;
                cout << "El numero sin el mayor digito es: " << eliminarMayorDigito(a) << endl;
                break;
            case 5:
                cout << "Ingrese un numero natural" << endl;
                cin >> a;
                cout << "Ingrese el numero a insertar" << endl;
                cin >> b;
                cout << "El resultado de insertar el numero es: " << insertarDigito(a, b) << endl;
                break;
            case 6:
                cout << "Ingrese un numero natural" << endl;
                cin >> a;
                if (esCapicua(a)) cout << "El numero es capicua" << endl;
                else cout << "El numero no es capicua" << endl;
                break;
            case 7:
                cout << "Ingrese la cantidad de obreros" << endl;
                cin >> a;
                cout << "El total a pagar es: " << tiluchiSueldos(a) << " Bs." << endl;
                break;
            case 8:
                adivinarNumero();
                break;
            case 9:
                cout << "Ingrese un numero natural" << endl;
                cin >> a;
                cout << "El crapulo es: " << crapulo(a) << endl;
                break;
            case 10:
                automorficos();
                break;
            case 11:
                cout << "Ingrese una cadena de texto" << endl;
                gets(s);
                invertirCadena(s);
                cout << "La cadena invertida es: " << s << endl;
                break;
            case 12:
                cout << "Ingrese una cadena de texto" << endl;
                gets(s);
                if (palindrome(s)) cout << "Es palindrome" << endl;
                else cout << "No es palindrome" << endl;
                break;
            case 13:
                cout << "Ingrese una cadena de texto" << endl;
                gets(s);
                cout << "La cantidad de minusculas son: " << minusculas(s) << endl;
                break;
            case 14:
                cout << "Ingrese una cadena de texto" << endl;
                gets(s);
                cout << "La cantidad de mayusculas son: " << mayusculas(s) << endl;
                break;
            case 15:
                cout << "Ingrese una cadena de texto" << endl;
                gets(s);
                cout << "Ingrese caracter a verificar frecuencia" << endl;
                cin >> d;
                cout << "La cantidad de veces que se repite el digito es: " << frecuenciaCadena(s, d) << endl;
                break;
            case 16:
                cout << "Ingrese una cadena de texto" << endl;
                gets(s);
                convertirMinusculas(s);
                cout << "La cadena en minusculas es: " << s << endl;
                break;
            case 17:
                cout << "Ingrese un numero que sea de base entre 2 al 35" << endl;
                gets(s);
                cout << "Especifique su base numerica" << endl;
                cin >> a;
                cout << "Ingrese a que base desea convertir" << endl;
                cin >> b;
                cambioBase(s, a, b);
                cout << "El numero en la nueva base es: " << s << endl;
                break;
            case 18:
                cout << "Ingrese un numero entre el 1 y el 10.000" << endl;
                cin >> a;
                numLiteral(s, a);
                cout << "El numero en literal es: " << s << endl;
                break;
            case 19:
                cout << "Ingrese una cadena de texto" << endl;
                gets(s);
                cout << "El costo de enviar la carta es: " << valorMensaje(s) << endl;
                break;
            case 20:
                cout << "Ingresar hasta que elemento de la serie desea calcular" << endl;
                cin >> a;
                serieUno(a);
                break;
            case 21:
                cout << "Ingresar hasta que elemento de la serie desea calcular" << endl;
                cin >> a;
                serieDos(a);
                break;
            case 22:
                cout << "Ingresar hasta que elemento de la serie desea calcular" << endl;
                cin >> a;
                serieTres(a);
                break;
            case 23:
                cout << "Ingresar hasta que elemento de la serie desea calcular" << endl;
                cin >> a;
                serieCuatro(a);
                break;
            case 24:
                cout << "Ingrese la cantidad de elementos en el vector" << endl;
                cin >> a;
                cargarVector(g, a);
                cout << "Ingrese el numero a calcular frecuencia" << endl;
                cin >> b;
                cout << "La frecuencia del numero en el vector es: " << frecuenciaVector(g, a, b) << endl;
                break;
            case 25:
                cout << "Ingrese la cantidad de elementos en el vector" << endl;
                cin >> a;
                cargarVector(g, a);
                insertionSort(g, a);
                cout << "El vector ordenado es: ";
                mostrarVector(g, a);
                cout << endl;
                break;
            case 26:
                cout << "Ingrese la cantidad de elementos en el vector" << endl;
                cin >> a;
                cargarVector(g, a);
                cout << "Ingrese la posicion del vector a eliminar" << endl;
                cin >> b;
                eliminarElemento(g, a, b);
                mostrarVector(g, a);
                break;
            case 27:
                cout << "Ingrese la cantidad de elementos en los dos vectores" << endl;
                cin >> a;
                cargarVector(g, a);
                cout << "Ingrese elemento a buscar" << endl;
                cin >> b;
                if (busquedaLineal(g, a, b) != -1) cout << "El elemento se encuentra en la posicion: " << busquedaLineal(g, a, b) << endl;
                else cout << "El elemento no existe" << endl;
                break;
            case 28:
                cout << "Ingrese la cantidad de elementos en los dos vectores" << endl;
                cin >> a;
                cargarVector(g, a);
                cargarVector(h, a);
                sumarVectores(g, h, i, a);
                cout << "La suma cruzada de los dos vectores es: " << endl;
                mostrarVector(i, a);
                cout << endl;
                break;
            case 29:
                cout << "Ingrese la cantidad de elementos del vector" << endl;
                cin >> a;
                cargarVector(g, a);
                recorrerVectorArriba(g, a);
                cout << "El vector recorrido es: " << endl;
                mostrarVector(g, a);
                cout << endl;
                break;
            case 30:
                cout << "Ingrese la cantidad de elementos del vector" << endl;
                cin >> a;
                cargarVector(g, a);
                recorrerVectorAbajo(g, a);
                cout << "El vector recorrido es: " << endl;
                mostrarVector(g, a);
                cout << endl;
                break;
            case 31:
                cout << "Ingrese la cantidad de elementos del vector A" << endl;
                cin >> a;
                cargarVector(g, a);
                cout << "Ingrese la cantidad de elementos del vector B" << endl;
                cin >> b;
                cargarVector(h, b);
                unionConjuntos(g, h, i, a, b, c);
                cout << "El resultado de la union es: " << endl;
                mostrarVector(i, c);
                cout << endl;
                break;
            case 32:
                cout << "Ingrese la cantidad de elementos del vector" << endl;
                cin >> a;
                fibPrimosVector(g, a);
                cout << "El vector rellenado es: "<< endl;
                mostrarVector(g, a);
                cout << endl;
                break;
            case 33:
                cout << "Ingrese la cantidad de elementos del vector" << endl;
                cin >> a;
                cargarVector(g, a);
                operaciones(g, h, a);
                cout << "El nuevo vector es: " << endl;
                mostrarVector(h, a);
                break;
            case 34:
                cout << "Saliendo del programa" << endl;
                break;
            default:
                cout << "Opcion invalida" << endl;
                break;
        }
        system("PAUSE");
        system("CLS");
    } while (op != 34);
    return 0;
}



