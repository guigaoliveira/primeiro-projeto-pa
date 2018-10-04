#ifndef POLIGONO_H
#define POLIGONO_H
#include "ponto.h"

/**
 * @brief A classe Poligono
 */
class Poligono {
private:
    int numVertices = 0;
    Ponto vertices[100];
public:
    Poligono();
    ~Poligono();
    void inserirVertice(Ponto vertice);
    int quantidateDeVertices();
    void transladar(float a, float b);
    void imprimir();
    void rotacionar(float theta, Ponto p0);
    double area();
};


#endif // POLIGONO_H
