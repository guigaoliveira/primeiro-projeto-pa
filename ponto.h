#ifndef PONTO_H
#define PONTO_H

/**
 * @brief A classe Ponto
 */
class Ponto
{
private:
  float x, y;
public:
   Ponto(float _x=0, float _y=0);
   ~Ponto();
   void setX(float _x);
   void setY(float _y);
   void setXY(float _x, float _y);
   void translada(float a, float b);
   void imprime();
   float getX();
   float getY();
   float norma();
   Ponto add(Ponto p);
   Ponto sub(Ponto p1);
};

#endif // PONTO_H
