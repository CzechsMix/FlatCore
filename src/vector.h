#ifndef VECTOR_H
#define VECTOR_H

namespace flatcore
{
	class Vector
	{
		public:
			double X;
			double Y;

			//Constructors
			Vector();
			Vector(double x, double y);
			Vector(const Vector& v);

			//Arithmetic
			//Vector addition, subtract
			Vector operator+(const Vector& v);
			Vector operator-(const Vector& v);
			//Scalar multiplication/division
			Vector operator*(const double s);
			Vector operator/(const double s);
	};
}

#endif //VECTOR_H
