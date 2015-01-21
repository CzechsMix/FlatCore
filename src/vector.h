#ifndef VECTOR_H
#define VECTOR_H

namespace flatcore
{
  class Vector
  {
    public:
      int X;
      int Y;

      //Constructors
      Vector();
      Vector(int x, int y);
      Vector(const Vector& v);

      //Arithmetic
      //Vector addition, subtract
      Vector operator+(const Vector& v);
      Vector operator-(const Vector& v);
      //Scalar multiplication/division
      Vector operator*(const int s);
      Vector operator/(const int s);
  };
}

#endif //VECTOR_H
