#include <bits/stdc++.h>
using namespace std;

const int yMax = 50, xMax = 50;
struct datos
{
    int m[yMax][xMax];
};

void reiniciar(int m[yMax][xMax])
{
    for (int i = 0; i < yMax; ++i)
    {
        for (int j = 0; j < xMax; ++j) m[i][j] = -1;
    }
}

void generarEspiral(int m[yMax][xMax], int n, int &s)
{
    /** Estados || Sentidos
        1 = Derecha
        2 = Abajo
        3 = Izquierda
        4 = Arriba
    **/
    int sentido = 1, y = 0, x = 0, i, j;
    reiniciar(m);
    for (int k = 0; k < 2*n; ++k)
    {
        cout << y << " " << x << endl;
        if (sentido == 1)
        {
            for (i = x; i < n; ++i)
            {
                if (m[y][i] == -1) m[y][i] = s;
                else break;
                ++s;
            }
            x = i-1;
            ++y;
            ++sentido;
        }
        else if (sentido == 2)
        {
            for (j = y; j < n; ++j)
            {
                if (m[j][x] == -1) m[j][x] = s;
                else break;
                ++s;
            }
            y = j-1;
            --x;
            ++sentido;
        }
        else if (sentido == 3)
        {
            for (i = x; i >= 0; --i)
            {
                if (m[y][i] == -1) m[y][i] = s;
                else break;
                ++s;
            }
            x = i+1;
            --y;
            ++sentido;
        }
        else
        {
            for (j = y; j >= 0; --j)
            {
                if (m[j][x] == -1) m[j][x] = s;
                else break;
                ++s;
            }
            y = j+1;
            ++x;
            sentido = 1;
        }
    }
}

void espirales(datos v[], int n, int orden)
{
    int seed = 1;
    for (int i = 0; i < n; ++i)
        generarEspiral(v[i].m, orden, seed);
}

void mostrarEstrucutra(datos v[], int n, int orden)
{
    for (int k = 0; k < n; ++k)
    {
        cout << "Estructura: " << k+1 << endl;
        for (int i = 0; i < orden; ++i)
        {
            for (int j = 0; j < orden; ++j)
            {
                cout << v[k].m[i][j] << " ";
            }
            cout << endl;
        }
    }
}

int main()
{W
    datos dat[xMax];
    int n, orden;
    cout << "Ingrese la cantidad de elementos de la estructura" << endl;
    cin >> n;
    cout << "Ingrese el orden de las matrices" << endl;
    cin >> orden;
    espirales(dat, n, orden);
    mostrarEstrucutra(dat, n, orden);
    return 0;
}

/** Leonardo Arteaga dos Santos **/
