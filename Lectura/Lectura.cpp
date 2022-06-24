//Lectura o entrada de datos.
#include <iostream>
using namespace std;

/*
Esto es fascinante, puedes usar este tipo de comentarios, con el /+,
es muy interesante y muy aplicativo :D
*/

int main()
{
	int numero; //Definiendo la variable de tipo de dato entera.
	float numero2; //Definiendo la variable de tipo de dato flotante.

	cout << "Digite un primer numero: " << endl;
	cin >> numero; //Guardando la primera variable.
	cout << "Digite un segundo numero de tipo de dato flotante: " << endl;
	cin >> numero2; //Gardando la segunda variable.

	cout << "\n El primer numero que digito es:" << numero;
	cout << "\n El segundo numero que digito es:" << numero2;

	return 0;
}