#include <iostream>
#include <cmath>
#include "poligono.h"

#define _USE_MATH_DEFINES
#define MAX_NUM_VERTICES 100

/**
 * @brief Poligono::Poligono
 */
Poligono::Poligono() {}

/**
 * @brief Poligono::~Poligono
 */
Poligono::~Poligono() {}

/**
 * @brief Poligono::inserirVertice - metódo para criar inserir um novo vértice de um polígono.
 * @param _vertice
 */
void Poligono::inserirVertice(Ponto _vertice) {
    if(numVertices <= MAX_NUM_VERTICES) {
        vertices[numVertices].setXY(_vertice.getX(), _vertice.getY());
        numVertices++;
    } else {
        std::cout << "[Debug - Classe Poligono] Erro: Número máximo de vértices foi atigido! \n";
    }
}

/**
 * @brief Poligono::quantidateDeVertices - método que retorna a quantidade de vértices de um polígono.
 * @return quantidade de vértices de um polígono
 */
int Poligono::quantidateDeVertices() {
    return numVertices;
}

/**
 * @brief Poligono::area - método que retorna o valor da área de um polígono.
 * @return valor da área
 * @details fonte: https://en.wikipedia.org/wiki/Shoelace_formula
 */
double Poligono::area()
{
    // Calcula o valor da fórma de Shoelace
    double area = 0.0;
    int j = numVertices - 1;
    for (int i = 0; i < numVertices; i++)
    {
        Ponto vj = vertices[j];
        Ponto vi = vertices[i];
        area += (vj.getX() + vi.getX()) * (vj.getY() - vi.getY());
        j = i;
    }
    return 0.5 * fabs(area);
}

/**
 * @brief Poligono::transladar - método para transladar um polígono.
 * @param a
 * @param b
 */
void Poligono::transladar(float a, float b) {
    for(int i = 0; i < numVertices; i++) {
        vertices[i].translada(a,b);
    }
}

/**
 * @brief Poligono::rotacionar - método para rotacionar um polígono.
 * @param theta
 * @param p0
 */
void Poligono::rotacionar(float theta, Ponto p0) {
    float novoX, novoY;
    float anguloRadiano = (theta * 180.0) / M_PI;
    float cosAng = cos(anguloRadiano);
    float sinAng = sin(anguloRadiano);

    for(int i = 0; i < numVertices; i++) {
        vertices[i].translada(-p0X, -p0Y);

        novoX = vertices[i].getX() * cosAng - vertices[i].getY() * sinAng;
        novoY = vertices[i].getX() * sinAng + vertices[i].getY() * cosAng;

        vertices[i].setXY(novoX + p0.getX(), novoY + p0.getY());
    }
}

/**
 * @brief Poligono::imprimir -  método que imprime os vértices de um polígono no formato (x0, y0) -> (x1, y1) ->  ... -> (xN-1, yN-1) -> (x0, y0).
 */
void Poligono::imprimir() {
    if(numVertices < 3) {
        std::cout << "[Debug - Classe Poligono] Erro: Poligono com numero de vertices invalido\n";
        return;
    }

    for(int i = 0; i < numVertices; i++)
    {
        vertices[i].imprime();
        std::cout << " -> ";
    }
    vertices[0].imprime();
    std::cout << std::endl;
}
