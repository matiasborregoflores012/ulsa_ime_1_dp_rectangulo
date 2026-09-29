// ¿Recuerdas qué hace iostream?
#include <iostream>
using namespace std;

// ¿Por qué este include usa comillas y no < >?
#include "utilerias.h"

// ¿por qué debe existir la función main()?
int main() {
    // 1. Variables (siempre inicializadas)
std::cout << "Area y perimetro de un rectangulo\n";
//    TODO: ¿qué variables necesitas? ¿De qué tipo? ¿Con qué valor empiezan?

    double base;
    double altura;
    double multiplicar = 0.0;
    double suma = 0.0;
    // 2. Entrada: el ancho
        std:: cout << "ingresa base";
        std:: cin >> base;
        std:: cout << "introduce altura";
        std:: cin >> altura;

        suma = base + base + altura + altura;
        multiplicar = base * altura;

        std:: cout << "El perímetro es: " << suma << endl;
   std::cout << "El área es: " << multiplicar << endl;

    



    //    TODO: lee el ancho con leerDecimal("...")



    //    TODO: ¿qué haces si es 0 o negativo? ¿Cuántas veces lo vuelves a pedir?

    // 3. Entrada: el alto
    //    TODO: mismo criterio que el ancho

    // 4. Proceso
    //    TODO: calcula el área y el perímetro
    //    ¿Estás seguro(a) del orden en que C++ hace las operaciones?

    // 5. Salida
    //    TODO: muestra el área y el perímetro, con sus unidades

    // ¿Qué significa return 0;?
    return 0;
}