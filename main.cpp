#include <iostream>
#include "retangulo.h"

/**
 * @brief main - Programa para teste das classes criadas.
 * @return
 */
int main() {
    Retangulo rec(0.0, 0.0, 4.0, 3.0);

    Ponto p0(2, 1.5);

    rec.imprimir();

    std::cout << "\n";
    std::cout << "Área do retangulo: " << rec.area() << "\n";

    rec.transladar(-3,4);

    std::cout << "Área do retangulo transladado: " << rec.area() << "\n";


    rec.rotacionar(30, p0);

    std::cout << "Área do retangulo rotacionado: " << rec.area() << "\n";

}
