#include "cliente.h"

//Constructor Cliente
Cliente::Cliente(int valorNumeroCuenta, string valorApellido, string valorPrimerNombre, double valorSaldo)
{
    establecerNumeroCuenta(valorNumeroCuenta);
    establecerApellido(valorApellido);
    establecerPrimerNombre(valorPrimerNombre);
    establecerSaldo(valorSaldo);
}//fin de constructor Cliente

//Establece el valor a numeroCuenta
void Cliente::establecerNumeroCuenta(int valorNumeroCuenta)
{
    numeroCuenta = valorNumeroCuenta;
}//fin de establecerNumeroCuenta

//Obtiene el valor de numeroCuenta
int Cliente::obtenerNumeroCuenta()
{
    return numeroCuenta;
}//fin de obtenerNumeroCuenta

//Establece el valor a apellido
void Cliente::establecerApellido(string valorApellido)
{
    size_t longitud = valorApellido.size();//longitud de valorApellido
    //Maximo se pueden asignar 15 caracteres
    longitud = longitud < 15 ? longitud : 14;
    //Asigna los n caracteres de valorApellido a apellido
    valorApellido.copy(apellido, longitud);
    //Agrega el caracter nulo o fin de cadena
    apellido[longitud] = '\0';

}//fin de establecerApellido

//Obtiene el valor de apellido
string Cliente::obtenerApellido()
{
    return apellido;
}//fin de obtenerApellido

//Establece el valor a primerNombre
void Cliente::establecerPrimerNombre(string valorPrimerNombre)
{
   size_t longitud = valorPrimerNombre.size(); //longitud de valorPrimernombre
   //Maximo se pueden asignar 19 caracteres
   longitud = longitud < 19 ? longitud : 18;
   //Asigna los n caracteres de valorPrimerNombre a primerNombre
   valorPrimerNombre.copy(primerNombre, longitud);
   //Agrega el caracter nulo o fin de cadena
   primerNombre[longitud] = '\0';

}//fin de establecerPrimerNombre

//Obtiene el valor de primerNombre
string Cliente::obtenerPrimerNombre()
{
    return primerNombre;
}//fin de obtenerPrimerNombre

//Establece el valor a saldo
void Cliente::establecerSaldo(double valorSaldo)
{
    saldo = valorSaldo;
}//fin de establecerSaldo

//Obtiene el valor de saldo
double Cliente::obtenerSaldo()
{
    return saldo;
}//fin de obtenerSaldo
