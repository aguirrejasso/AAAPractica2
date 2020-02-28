/*
Practica 2 - Equipo #6
Seccion: D05
Calendario: 2020A

Aceves García Carlos Jair
Aguirre Jasso Angel Ernesto
Lizaola Garcia Alma Denisse
Lozano Salinas Miguel Angel
Silva Sanchez Guadalupe Jocelyn
*/

#include <iostream>
#include <fstream>
#include <conio.h>
#include "cliente.h" //Definicion de la clase cliente

using namespace std;

int main()
{

    int numeroCuenta;
    char apellido [15];
    char primerNombre [19];
    double saldo;

    ofstream archivoCreditoSalida;
    archivoCreditoSalida.open("credito.dat", ios::binary); //Abrir el archivo para entrada en modo binario

    //salir del programa si ofstream no pudo abrir el archivo
    if(!archivoCreditoSalida){
        cerr<<"No se pudo abrir el archivo." <<endl;
        exit(1);
    }//fin de if

    Cliente cliente; //Objeto de la clase cliente

    cout << "Escriba el numero de cuenta (De 1 a 100, 0 para terminar la entrada)" << endl << "?";
    cin >> numeroCuenta;

    while (numeroCuenta > 0 and numeroCuenta <=100) {
        cout << "Teclea el apellido, primer nombre, saldo" << endl << "?";
        cin >> apellido;
        cin >> primerNombre;
        cin >> saldo;

        //Establece los valores a los atributos del objeto de la clase Cliente
        cliente.establecerNumeroCuenta(numeroCuenta);
        cliente.establecerApellido(apellido);
        cliente.establecerPrimerNombre(primerNombre);
        cliente.establecerSaldo(saldo);

        //Busca la posicion en el archivo del registroespecificado por el usuario
        archivoCreditoSalida.seekp((cliente.obtenerNumeroCuenta() - 1) * sizeof (Cliente));

        //Mostrar la posicion del puntero del archivo donde se guardara el objeto
        cout << "La direccion es: " << archivoCreditoSalida.tellp() << endl;
        //Tamano del objeto de la clase Cliente
        printf("Tama%co del objeto es: ", 164); //Mostrar la letra ñ mediante el codigo ASCII
        cout << sizeof (Cliente) << endl;

        //Escribir la informacion especificada por el usuario en el archivo
        archivoCreditoSalida.write(reinterpret_cast<const char *>(&cliente), sizeof (Cliente));

        cout << "Escriba el numero de cuenta (De 1 a 100, 0 para terminar la entrada)" << endl << "?";
        cin >> numeroCuenta;
    }//fin de while

    archivoCreditoSalida.close(); //Cerrar archivo

    return 0;
}//fin del main
