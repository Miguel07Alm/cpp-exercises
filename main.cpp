#include <cstdlib>
#include <fstream>
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <type_traits>
using namespace std;

void printEj(int n, int pag) {
	cout << "-------------Ejercicio " << n << " de la pagina " << pag
		 << "-------------" << endl;
}

void ej1() {
	printEj(1, 128);
	int tabla[4];
	for (int i = 0; i < 4; i++) {
		int n;
		cout << "Escribe un numero: ";
		cin >> n;
		tabla[i] = n;
	  }
	int media = 0;
	cout << "Los números memorizados son: ";
	for (int j = 0; j < 4; j++) {
		cout << tabla[j] << " ";
		media += tabla[j];
	  }
	cout << endl;
	cout << "La media es: " << media / 4.0 << endl;
}

void ej2() {
	printEj(2, 128);
	int dias_mes[12];
	for (int i = 0; i < 12; i++) {
		if (i == 1)
			dias_mes[i] = 28;
		else if (i == 3 || i == 5 || i == 8 || i == 10)
			dias_mes[i] = 30;
		else
			dias_mes[i] = 31;
	  }
	int mes;
	cout << "Elige un mes poniendo los numeros del intervalo [1, 12]" << endl;
	cin >> mes;
	cout << "El mes " << mes << " tiene " << dias_mes[mes - 1] << " dias"
		 << endl;
}

void ej3() {
	printEj(3, 128);
	int dias_mes[12];
	int n_to_365 = 0;
	int dias_365[12];
	for (int i = 0; i < 12; i++) {
		if (i == 1)
			dias_mes[i] = 28;
		else if (i == 3 || i == 5 || i == 8 || i == 10)
			dias_mes[i] = 30;
		else
			dias_mes[i] = 31;

		n_to_365 += dias_mes[i];
		dias_365[i] = n_to_365;
	  }
	int mes, dia_mes;
	cout << "Elige un mes" << endl;
	cin >> mes;
	cout << "Elige el dia del mes " << mes << endl;
	cin >> dia_mes;

	if (dia_mes > dias_mes[mes - 1] || dia_mes <= 0)
		cout << "El dia elegido no existe en el mes";
	else
		cout << "Es el dia "
			 << dias_365[mes - 1] - (dias_mes[mes - 1] - dia_mes)
			 << " respecto a los 365 dias" << endl;
}

void ej4() {
	printEj(4, 128);
	int n, lista[10];

	int length = 10;
	for (int i = 0; i < 10; i++) {
		cout << "Elige un numero" << endl;
		cin >> n;
		lista[i] = n;
	}

	// Algoritmo "Bubble Sort"
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length - i - 1; j++) {
			if (lista[j] > lista[j + 1]) {
				int nn[2] = {lista[j], lista[j + 1]};
				lista[j] = nn[1];
				lista[j + 1] = nn[0];
			}
		}
	}
	cout << "El numero mas grande de la lista es: " << lista[length - 1] << endl;
}

void ej5() {
	printEj(5, 128);
	int v[2][2];
	int n;
	int n_v;
	int axis;
	for (int i = 1; i < 5; i++) {
		if (i == 1 || i == 2)
			n_v = 0;
		else
			n_v = 1;
		if (i % 2 != 0) {
			cout << "Escoge el elemento para el eje x para el vector numero "
				 << n_v + 1 << endl;
			cin >> n;
			axis = 0;
			v[n_v][axis] = n;

		} else {
			cout << "Escoge el elemento para el eje y para el vector numero "
				 << n_v + 1 << endl;
			cin >> n;
			axis = 1;
			v[n_v][axis] = n;
		}
	}
	cout << "La diferencia entre los dos vectores es: "
		 << " para el eje x es " << v[0][0] - v[1][0] << " y para el eje y es "
		 << v[0][1] - v[1][1] << endl;
}
void ej6() {
	printEj(6, 128);
	int v[2][3];
	int n;
	int n_v;
	int axis;

	for (int r = 0; r < 6; r++) {
		if (r == 0 || r == 1 || r == 2)
			n_v = 0;
		else
			n_v = 1;

		axis %= 3;
		if (axis == 0) {
			cout << "Escoge el elemento para el eje x para el vector numero "
				 << n_v + 1 << endl;
			cin >> n;
			v[n_v][axis] = n;
		} else if (axis == 1) {
			cout << "Escoge el elemento para el eje y para el vector numero "
				 << n_v + 1 << endl;
			cin >> n;
			v[n_v][axis] = n;
		} else {
			cout << "Escoge el elemento para el eje z para el vector numero "
				 << n_v + 1 << endl;
			cin >> n;
			v[n_v][axis] = n;
		}
		axis += 1;
	}
	int producto_escalar =
		(v[0][0] * v[1][0]) + (v[0][1] * v[1][1]) + (v[0][2] * v[1][2]);
	cout << "El producto escalar entre los dos vectores es: "
		 << producto_escalar << endl;
}

void ej7() {
	printEj(7, 128);
	int v[2][2];
	int n;
	int n_v;
	int axis;
	// EJEMPLO: [1,2], v1[1,3]; v2[2,4]
	//         [3,4]
	// Mediante determinantes colocando los vectores en columnas, aplicando la
	// regla de sarrus si da 0 el det, son vectores linealmente dependientes

	for (int i = 1; i < 5; i++) {
		if (i == 1 || i == 2)
			n_v = 0;
		else
			n_v = 1;
		if (i % 2 != 0) {
			cout << "Escoge el elemento para el eje x para el vector numero "
				 << n_v + 1 << endl;
			cin >> n;
			axis = 0;
			v[n_v][axis] = n;

		} else {
			cout << "Escoge el elemento para el eje y para el vector numero "
				 << n_v + 1 << endl;
			cin >> n;
			axis = 1;
			v[n_v][axis] = n;
		}
	}
	if ((v[0][0] / v[1][0]) != (v[0][1] / v[1][1]))
		cout << "No son vectores linealmente dependientes" << endl;
	else
		cout << "Si son vectores linealmente dependientes" << endl;
}
void ej8() {
	printEj(8, 128);
	int Matrix[2][2];
	int n;
	int fila = 0, col = 0;
	for (int i = 1; i < 5; i++) {
		if (i == 3)
			col = 1;
		fila %= 2;
		cout << "Introduce un elemento en la fila " << fila + 1
			 << " y en la columna " << col + 1 << endl;
		cin >> n;
		Matrix[col][fila] = n;
		fila += 1;
	}
	int xs[2] = {Matrix[0][0], Matrix[1][0]},
		ys[2] = {Matrix[0][1], Matrix[1][1]};

	cout << "La matriz(2x2) seria: "
		 << "[" << Matrix[0][0] << " " << Matrix[1][0] << "]" << endl;
	cout << "                      "
		 << "[" << Matrix[0][1] << " " << Matrix[1][1] << "]" << endl;

	// Transpuesta
	Matrix[1][0] = ys[0];
	Matrix[0][1] = xs[1];

	cout << "La matriz(2x2) transpuesta seria: "
		 << "[" << Matrix[0][0] << " " << Matrix[1][0] << "]" << endl;
	cout << "                                  "
		 << "[" << Matrix[0][1] << " " << Matrix[1][1] << "]" << endl;
}
void ej9() {
	printEj(9, 128);
	int Matrix[3][3];
	int n;
	int n_v = 0;
	int axis = 0;

	for (int r = 1; r < 10; r++) {
		axis %= 3;
		cout << "Escoge el elemento de la fila " << axis + 1 << " y la columna "
			 << n_v + 1 << endl;
		cin >> n;
		Matrix[n_v][axis] = n;
		if (r % 3 == 0)
			n_v += 1;
		axis += 1;
	}
	cout << "La matriz(3x3) seria: [" << Matrix[0][0] << " " << Matrix[1][0]
		 << " " << Matrix[2][0] << "]" << endl;
	cout << "                      [" << Matrix[0][1] << " " << Matrix[1][1]
		 << " " << Matrix[2][1] << "]" << endl;
	cout << "                      [" << Matrix[0][2] << " " << Matrix[1][2]
		 << " " << Matrix[2][2] << "]" << endl;

	// Se le aplica la regla de sarrus
  float determinante = ((Matrix[0][0] * Matrix[1][1] * Matrix[2][2]) +
			 (Matrix[1][0] * Matrix[2][1] * Matrix[0][2]) +
			 (Matrix[0][1] * Matrix[1][2] * Matrix[2][0])) -
			((Matrix[2][0] * Matrix[1][1] * Matrix[0][2]) +
			 (Matrix[2][2] * Matrix[1][0] * Matrix[0][1]) +
			 (Matrix[0][0] * Matrix[2][1] * Matrix[1][2])) ;
	cout << "El determinante resultante de esta matriz es: " << determinante << endl;
}

void ej10() {
	printEj(10, 128);
	int lista[10];
	int length = 10;
	int n;
	for (int i = 0; i < length; i++) {
		cout << "Elige un numero entero" << endl;
		cin >> n;
		lista[i] = n;
	}
	cout << "La lista sin aplicar el algoritmo es: [" << lista[0] << ","
		 << lista[1] << "," << lista[2] << "," << lista[3] << "," << lista[4]
		 << "," << lista[5] << "," << lista[6] << "," << lista[7] << ","
		 << lista[8] << "," << lista[9] << "]" << endl;
	// Algoritmo "Bubble Sort"
	for (int i = 0; i < length; i++) {
		// Hace un bucle a través del siguiente elemento
		for (int j = 0; j < length - i - 1; j++) {
			// De 0 a length - i - 1 el valor de la lista necesita ser
			// sobrepasado
			// cuando un elemento es mayor que el siguiente entonces el elemento
			// necesita ser intercambiado por ese
			if (lista[j] > lista[j + 1]) {
				int nn[2] = {lista[j], lista[j + 1]};
				lista[j] = nn[1];
				lista[j + 1] = nn[0];
			}
		}
	}

	cout << "La lista aplicando el algoritmo es: [" << lista[0] << ","
		 << lista[1] << "," << lista[2] << "," << lista[3] << "," << lista[4]
		 << "," << lista[5] << "," << lista[6] << "," << lista[7] << ","
		 << lista[8] << "," << lista[9] << "]" << endl;
}

void ej11() {
	printEj(1, 132);
	string nombre;

	ofstream fichero("numeros.txt");
	int num = 5;
	while (num != 0) {
		cout << "Escribe un numero: ";
		cin >> num;
		fichero << num << endl;
	}
	fichero.close();
}
void ej12() {
	printEj(2, 132);
	string nombre;
	cout << "Di el nombre del fichero que quieras leer: ";
	cin >> nombre;
	ifstream fichero(nombre);
  if(fichero.fail())
    cout << "No existe ese archivo" << endl;
  else{
    string linea;
    int num_linea = 1;
    while (!fichero.eof()) {
      getline(fichero, linea);
      cout << num_linea << ": " << linea << endl;
      int n;
      if (num_linea != 0 && num_linea % 24 == 0){
        cout << "Escribe 1 para continuar: ";
        cin >> n;
        if(n != 1) break;
      }
      num_linea += 1;
    }
  }

	fichero.close();
}
void ej13() {
	printEj(3, 132);

	ifstream fichero("numeros.txt");

	string linea;
	int num;
	int length = 0;
	while (!fichero.eof()) {
		getline(fichero, linea);
		if (!fichero.eof()) {
			length += 1;
		}
	}
	fichero.close();
	ifstream fichero2("numeros.txt");
	int nums[length];
	for (int i = 0; i < length; i++) {
		getline(fichero2, linea);
		nums[i] = stoi(linea);
	}
	fichero2.close();
	int suma = 0;
	for (int c = 0; c < length; c++) {
		suma += nums[c];
	}
	cout << "La suma total es de " << suma << endl;
}

void ej14() {
	printEj(4, 132);

	string nombre;

	cout << "Escriba el nombre del fichero que te gustaría ver que muestre su "
			"último byte: ";
	cin >> nombre;
	ifstream fichero(nombre.c_str(), ifstream::binary);

	if (fichero.fail()) {
		cout << "No existe el fichero" << endl;
		exit(1);
	}
	int len = 0;

	while (!fichero.eof()) {
		int n = fichero.get();
		len += 1;
	}
	fichero.close();
	int bytes[len];
	ifstream target(nombre.c_str(), ifstream::binary);
	for (int i = 0; i < len; i++) {
		bytes[i] = target.get();
	}
	cout << "El ultimo byte es: " << bytes[len - 2] << endl;
	target.close();
}
void ej15() {
	printEj(5, 132);
	string nombre;

	cout << "Escriba el nombre del fichero que te gustaría ver que muestre su "
			"último byte: ";
	cin >> nombre;

	ifstream fichero(nombre.c_str(), ifstream::binary);
	if (fichero.fail()) {
		cout << "No existe el fichero" << endl;
		exit(1);
	}
	int target_byte;
	cout << "Elige el byte que quieres buscar y te mostrare en cuantas lineas "
			"aparece: ";
	cin >> target_byte;
	int byte_count = 0;
	while (!fichero.eof()) {
		int n = fichero.get();
		if (n == target_byte)
			byte_count += 1;
	}
	fichero.close();
	cout << "El byte: " << target_byte << " aparece " << byte_count << " veces"
		 << endl;
}
void saludarVariasVeces(int n) {
	for (int i = 0; i < n; i++) {
		if (i == 0)
			cout << "Hola ";
		else
			cout << " Hola";
	}
}

void ej16() {
	printEj(1, 135);

	int n_holas;
	cout << "¿Cuantos holas quieres?" << endl;
	cin >> n_holas;
	saludarVariasVeces(n_holas);
}
void tablaDeMultiplicar(int n) {
	cout << "La tabla de multiplicar del " << n << " es: " << endl;
	for (int i = 0; i < 11; i++) {
		cout << " | " << n * i << " | " << endl;
	}
}
void ej17() {
	printEj(2, 135);

	int n;
	cout << "Escribe un numero: ";
	cin >> n;
	tablaDeMultiplicar(n);
}

void suma(int n_veces, int numeros[]) {
	int sumaTotal = 0;
	for (int i = 0; i < n_veces; i++) {
		sumaTotal += numeros[i];
	}
	cout << "La suma total entre los " << n_veces
		 << " numeros fue de: " << sumaTotal << endl;
}

void ej18() {
	printEj(1, 136);

	int n1, n2, n3;
	cout << "Escribe los numeros para hacer su suma total: ";
	cin >> n1 >> n2 >> n3;
	int numeros[3] = {n1, n2, n3};
	suma(3, numeros);
}
int esPrimo(int n) {
	if (n < 2)
		return 0;
	if (n == 2 || n == 3)
		return 1;
	int c = n % 6;
	if (c != 1 || c != 5)
		return 0;
	for (int i = 3; i < floor(sqrt(n)) + 1; i++) {
		if (n % i == 0)
			return 0;
		return 1;
	}
}
void ej19() {
	printEj(2, 136);

	int n;
	cout << "Escribe un numero y te digo si es primo: ";
	cin >> n;
	int valor = esPrimo(n);
	if (valor == 1)
		cout << n << " es un numero primo" << endl;
	else
		cout << n << " no es un numero primo" << endl;
}
void intercambiarNumeros(int &n1, int &n2) {
	int nums[2] = {n1, n2};
	n1 = nums[1];
	n2 = nums[0];
}
void ej20() {
	printEj(1, 137);
	int a, b;
	cout << "Escribe dos numeros e intercambiare sus variables: ";
	cin >> a >> b;
	cout << "El valor de la variable 'a' es " << a
		 << " y el valor de la variable 'b' es " << b << "\n\n";

	cout << "Intercambio las variables"
		 << "\n\n";
	intercambiarNumeros(a, b);

	cout << "El valor de la variable 'a' es " << a
		 << " y el valor de la variable 'b' es " << b << endl;
}
void ej21() {
	printEj(13, 139);
	ofstream file("registroDeUsuario.txt");

	string text = "";
	cout
		<< "Escribe frases y se introduciran en el archivo "
		   "'registroDeUsuario.txt', para finalizar el programa escribe 'fin' o 'Fin': "
		<< endl;
	while (text != "Fin" && text != "fin") {
		getline(cin, text);
		cout << "La frase escrita es: " << text << endl;
		if (text != "Fin" && text != "fin")
      file << text << endl;
	}
	file.close();
}
void ej22() {
	printEj(18, 139);
	cout << "Ejercicio para adivinar el numero del 1 al 1000" << endl;
	srand((unsigned)time(NULL));
	int n_secret = rand() % 1001;
	int n;
  int intentos = 10;
	while (intentos > 0) {
    cout << "Te quedan " << intentos << " intentos" << endl;
    cout << "Elige un numero: ";
		cin >> n;
    
    if (n < n_secret && n_secret - n < 10){
			cout << "Te quedaste corto por poco" << endl;
      intentos -= 1;
    }

		else if (n < n_secret && n_secret - n > 10){
			cout << "Te quedaste corto" << endl;
      intentos -= 1;
    }
		else if (n > n_secret && n - n_secret < 10){
			cout << "Te pasaste por poco" << endl;
      intentos -= 1;
    }
		else if (n > n_secret && n - n_secret > 10){
			cout << "Te pasaste" << endl;
      intentos -= 1;
    }
		else if (n == n_secret) {
			cout << "ACERTASTE!" << endl;
			break;

		} else
			cout << "Te quedaste cerca" << endl;
	}
  cout << endl;
  if(intentos == 0){
    cout << "Perdiste" << endl;
    cout << "El numero era: " << n_secret << endl;
  }
}
int main() {
	int ejercicio;
	cout << "Elige el ejercicio que quieras corregir en orden de arriba hacia "
			"abajo de los que pusistes en classroom: [1, 22]"
		 << endl;
	cin >> ejercicio;
	switch (ejercicio) {
	case 1: {
		ej1();
		break;
	}
	case 2: {
		ej2();
		break;
	}
	case 3: {
		ej3();
		break;
	}
	case 4: {
		ej4();
		break;
	}
	case 5: {
		ej5();
		break;
	}
	case 6: {
		ej6();
		break;
	}
	case 7: {
		ej7();
		break;
	}
	case 8: {
		ej8();
		break;
	}
	case 9: {
		ej9();
		break;
	}
	case 10: {
		ej10();
		break;
	}
	case 11: {
		ej11();
		break;
	}
	case 12: {
		ej12();
		break;
	}
	case 13: {
		ej13();
		break;
	}
	case 14: {
		ej14();
		break;
	}
	case 15: {
		ej15();
		break;
	}
	case 16: {
		ej16();
		break;
	}
	case 17: {
		ej17();
		break;
	}
	case 18: {
		ej18();
		break;
	}
	case 19: {
		ej19();
		break;
	}
	case 20: {
		ej20();
		break;
	}
	case 21: {
		ej21();
		break;
	}
	case 22: {
		ej22();
		break;
	}
	}

	return 0;
}

https://fancygrid.com/samples/form/grid