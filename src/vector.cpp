#ifndef VECTOR_CPP
#define VECTOR_CPP

#include "vector.h"

namespace flatcore
{
	//Ctors
	Vector::Vector()
	{
		X = Y = 0;
	}

	Vector::Vector(double x, double y)
	{
		X = x; 
		Y = y;
	}

	Vector::Vector(const Vector& v)
	{
		X = v.X;
		Y = v.Y;
	}

	//Arithmetic
	Vector Vector::operator+(const Vector& v)
	{
		return Vector(X + v.X, Y + v.Y);
	}

	Vector Vector::operator-(const Vector& v)
	{
		return Vector(X - v.X, Y - v.Y);
	}

	Vector Vector::operator*(const double s)
	{
		return Vector(X * s, Y * s);
	}

	Vector Vector::operator/(const double s)
	{
		return Vector(X / s, Y / s);
	}
}
#endif
