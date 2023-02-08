#include <iostream>

using namespace std; 

int main() {

    //Declarando variables
    int clave, encontrado, n, i, j; 
    //Pedir tamaño del arreglo
    cout << "Ingrese dimensión del arreglo: "; 
    cin >> n; 
    cout << endl; 

    //Crear la variable para ele arreglo dinámico
    int* arreglo = new int[n];

    //Llenar el arreglo
    for (i = 0;i < n;i++)
    {
        cout << "Ingrese dato [" << i << "]: "; 
        cin >> arreglo[i];
    }
        //Pedir dato o clave a buscar
        cout << "Ingrese dato que desea buscar: " <<endl;
        cin >> clave;
        //Declarar variable de éxito de búsqueda 
        encontrado = 0;

        //Buscar clave o dato en el arreglo
        for (j = 0;j < n;j++)
        {
            /* Si el elemento de la posición 
            actual del arreglo es 
            similar a la clave de búsqueda, 
            despliega mensaje de encontrado. */

            if (arreglo[j] == clave)
            {
                cout << "Se encontro el " << clave << " en la posicion [" << j << "]" << endl;
                encontrado = 1; 
            }

        }

        //Libreria arreglo dinámico en memoria
        delete[] arreglo; 
        //Si no se encontro la clave despliega el mensaje de no encontrado
        if (encontrado != 1)
            cout << "No se encotro el dato" << endl; 
        system("pause"); 
        return 0; 
}
