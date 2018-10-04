#include <iostream>
#include <cmath>
#include "ponto.h"

/**
 * @brief Ponto::Ponto - Classe para criar um ponto
 * @param _x
 * @param _y
 */
Ponto::Ponto(float _x, float _y) {
    x = _x;
    y = _y;
}

/**
 * @brief Ponto::~Ponto
 */
Ponto::~Ponto() {}

/**
 * @brief Ponto::setX - método para setar o valor de X do ponto.
 * @param _x
 */
void Ponto::setX(float _x) {
    x = _x;
}

/**
 * @brief Ponto::setY - método para setar o valor de Y do ponto.
 * @param _y
 */
void Ponto::setY(float _y) {
    y = _y;
}

/**
 * @brief Ponto::setXY - método para setar o valor de X e de o valor de Y do ponto.
 * @param _x
 * @param _y
 */
void Ponto::setXY(float _x, float _y) {
    x = _x;
    y = _y;
}

/**
 * @brief Ponto::getX - método para pegar o valor de X do ponto.
 * @return valor de x do ponto
 */
float Ponto::getX() {
    return x;
}

/**
 * @brief Ponto::getY - método para pegar o valor de Y do ponto.
 * @return valor de y do ponto
 */
float Ponto::getY() {
    return y;
}

/**
 * @brief Ponto::add - método para 'somar' um ponto com outro ponto, somando as coordenadas do ponto com as coordenadas do outro ponto.
 * @param p1
 * @return novo ponto
 */
Ponto Ponto::add(Ponto p1) {
    Ponto novoPonto;
    novoPonto.x = x + p1.x;
    novoPonto.y = y + p1.y;
    return novoPonto;
}

/**
 * @brief Ponto::sub - método para 'subtrair' um ponto com outro ponto, subtraindo as coordenadas do ponto com as coordenadas do outro ponto.
 * @param p1
 * @return novo ponto
 */
Ponto Ponto::sub(Ponto p1) {
    Ponto novoPonto;
    novoPonto.x = x - p1.x;
    novoPonto.y = y - p1.y;
    return novoPonto;
}

/**
 * @brief Ponto::norma - método que retorna a norma do ponto.
 * @return valor da norma
 */
float Ponto::norma() {
    return sqrt(x*x + y*y);
}

/**
 * @brief Ponto::translada - método que translada o ponto, somando a coordenada X um valor a e a coordenada Y um valor b.
 * @param a
 * @param b
 */
void Ponto::translada(float a, float b) {
    x += a;
    y += b;
}

/**
 * @brief Ponto::imprime - método que imprime um ponto no formato (x, y).
 */
void Ponto::imprime() {
    std::cout << "(" << x << "," << y << ")";
}
