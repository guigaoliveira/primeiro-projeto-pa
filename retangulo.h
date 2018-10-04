#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <cmath>
#include <iostream>
#include "poligono.h"

/**
 * @brief A classe Retangulo
 */
class Retangulo: public Poligono {

public:
    Retangulo(float x, float y, float largura, float altura);
    ~Retangulo();
};

#endif // RECTANGLE_H
