#include <cmath>
#include <iostream>
#include "retangulo.h"
#include "poligono.h"
#include "ponto.h"


using namespace std;

/**
 * @brief Retangulo::Retangulo - Classe para criar um retângulo.
 * @param x
 * @param y
 * @param largura
 * @param altura
 */
Retangulo::Retangulo(float x, float y, float largura, float altura) {
    Ponto coordenadas[4];

    coordenadas[0].setXY(x, y);
    coordenadas[1].setXY(x, y - altura);
    coordenadas[2].setXY(x + largura, y - altura);
    coordenadas[3].setXY(x + largura, y);

    for(int i=0; i < 4;i++) {
        inserirVertice(coordenadas[i]);
    }
}

/**
 * @brief Retangulo::~Retangulo
 */
Retangulo::~Retangulo() {}
