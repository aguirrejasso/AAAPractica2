#ifndef CLIENTE_H
#define CLIENTE_H
#include <string>

using namespace std;

class Cliente
{
//Atributos de la clase
private:
    int numeroCuenta;
    char apellido [15];
    char primerNombre [19];
    double saldo;
//Metodos de la clase
public:
    //Constructor
    Cliente(int = 0, string = "", string = "", double = 0.0);

    //Metodos para accesar a numeroCuenta
    void establecerNumeroCuenta(int);
    int obtenerNumeroCuenta();

    //Metodos para accesar a apellido
    void establecerApellido(string);
    string obtenerApellido();

    //Metodos para accesar a primerNombre
    void establecerPrimerNombre(string);
    string obtenerPrimerNombre();

    //Metodos para accesar a saldo
    void establecerSaldo(double);
    double obtenerSaldo();
};//fin de la clase Cliente

#endif // CLIENTE_H
