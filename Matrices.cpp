#include <bits/stdc++.h>

using namespace std;
const int yMax = 15, xMax = 15;

void reiniciarMatriz(float mat[yMax][xMax], int y, int x)
{
    for (int i = 0; i < y; ++i)
    {
        for (int j = 0; j < x; ++j)
        {
            mat[i][j] = 0;
        }
    }
}

void cargarMatriz(float mat[yMax][xMax], int y, int x)
{
    for (int i = 0; i < y; ++i)
    {
        for (int j = 0; j < x; ++j)
        {
            cin >> mat[i][j];
            mat[i][j] *= 1.0f;
        }
    }
}

void mostrarMatriz(float mat[yMax][xMax], int y, int x)
{
    for (int i = 0; i < y; ++i)
    {
        for (int j = 0; j < x; ++j)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void calcularInversa(float mat[yMax][xMax], int n)
{
    float id[n][n], rat, a;

    for (int i = 0; i < n; ++i)
    {
        for(int j = n; j < 2*n; ++j)
        {
            if (i == (j-n)) mat[i][j] = 1.0f;
            else mat[i][j] = 0.0f;
        }
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if(i != j)
            {
                rat = float(float(mat[j][i]) / float(mat[i][i]));
                for(int k = 0; k < 2*n; ++k)
                {
                    mat[j][k] -= float (float(rat) * float(mat[i][k]));
                }
            }
        }
    }

    for(int i = 0; i < n; ++i)
    {
        a = mat[i][i];
        for(int j = 0; j < 2*n; ++j)
        {
            mat[i][j] /= float(a);
        }
    }

    cout << endl << "La matriz inversa es: " << endl;
    for (int i = 0; i < n; ++i)
    {
        for (int j = n; j < 2*n; ++j)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

}

void sumarMatrices(float a[yMax][xMax], float b[yMax][xMax], float res[yMax][xMax], int y, int x)
{
    reiniciarMatriz(res, y, x);
    for (int i = 0; i < y; ++i)
    {
        for (int j = 0; j < x; ++j)
        {
            res[i][j] = a[i][j] + b[i][j];
        }
    }
}

void multiplicarMatrices(float a[yMax][xMax], float b[yMax][xMax], float res[yMax][xMax], int yA, int xA, int yB, int xB, int &xC, int &yC)
{
    yC = xA; xC = yB;
    cout << yC << "x" << xC << endl;
    reiniciarMatriz(res, yC, xC);
    for(int i = 0; i < yA; ++i)
    {
        for(int j = 0; j < xB; ++j)
        {
            for(int k = 0; k < yB; ++k)
            {
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void calcularTranspuesta(float a[yMax][xMax], float res[yMax][xMax], int &y, int &x)
{
    for (int i = 0; i < y; ++i)
    {
        for (int j = 0; j < x; ++j)
        {
            res[j][i] = a[i][j];
        }
    }
    swap(y, x);
    cout << y << "x" <<  x <<endl;
}

int main()
{
    cin.sync_with_stdio(false);
    cout.sync_with_stdio(false);
    cin.tie(0);

    float a[yMax][xMax], b[yMax][xMax], res[yMax][xMax];
    int op, n, y, x, yA, xA, yB, xB, yC, xC;

    cout << fixed << setprecision(3);
    do
    {
        cout << "Operaciones con matrices" << endl;
        cout << "1. Suma de matrices" << endl;
        cout << "2. Multiplicación de matrices" << endl;
        cout << "3. Matriz transpuesta" << endl;
        cout << "4. Matriz inversa" << endl;
        cout << "5. Salir del programa" << endl;
        cin >> op;
        switch (op)
        {
            case 1:
                cout << "Ingrese la cantidad de filas y columnas de las matrices a sumar" << endl;
                cin >> y >> x;
                cout << "Cargue la matriz A" << endl;
                cargarMatriz(a, y, x);
                cout << "Cargue la matriz B" << endl;
                cargarMatriz(b, y, x);
                sumarMatrices(a, b, res, y, x);
                cout << "La suma de las matrices es: " << endl;
                mostrarMatriz(res, y, x);
                break;

            case 2:
                cout << "Ingrese la cantidad de filas y columnas de la matriz A" << endl;
                cin >> yA >> xA;
                cout << "Cargue la matriz A" << endl;
                cargarMatriz(a, yA, xA);
                cout << "Ingrese la cantidad de filas y columnas de la matriz B" << endl;
                cin >> yB >> xB;
                cout << "Cargue la matriz B" << endl;
                cargarMatriz(b, yB, xB);
                if (xA != yB)
                {
                    cout << "No es posible realizar la multiplicacion" << endl;
                    continue;
                }
                multiplicarMatrices(a, b, res, yA, xA, yB, xB, yC, xC);
                cout << "La multiplicacion de las matrice es: " << endl;
                mostrarMatriz(res, yC, xC);
                break;

            case 3:
                cout << "Ingrese la cantidad de filas y columnas de la matriz a calcular transpuesta" << endl;
                cin >> y >> x;
                cout << "Cargue la matriz" << endl;
                cargarMatriz(a, y, x);
                calcularTranspuesta(a, res, y, x);
                cout << "La matirz transpuesta es: " << endl;
                mostrarMatriz(res, y, x);
                break;

            case 4:
                cout << "Ingrese el orden de la matriz a calcular inversa" << endl;
                cin >> n;
                cout << "Cargue la matriz" << endl;
                cargarMatriz(a, n, n);
                calcularInversa(a, n);
                break;

            case 5:
                cout << "Saliendo del programa" << endl;
                break;

            default:
                cout << "Opcion invalida" << endl;
                break;
        }
    } while (op != 5);
    return 0;
}
