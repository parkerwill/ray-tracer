#ifndef SHAPE_H
#define SHAPE_H

#include "Vector.h"
#include "Ray.h"
#include "../Rendering/RGBColour.h"

class Shape
{
public:

	Shape();
	Shape(Vector centre, RGBColour colour, double diffuseCoefficient, double reflectionCoefficient, double shininess);
	~Shape();

	virtual Vector SurfaceNormal(Ray ray) = 0;
	virtual double Intersection(Ray ray, double epsilon) = 0;
	Vector Centre();
	void SetColour(RGBColour colour);
	void SetDiffuseCoefficient(double diffuseCoefficient);
	void SetReflectionCoefficient(double reflectiveCoefficient);
	void SetShininess(double shininess);
	RGBColour Colour();
	double DiffuseCoefficient();
	double ReflectionCoefficient();
	double Shininess();

protected:

	Vector _centre;
	RGBColour _colour;
	double _diffuseCoefficient;
	double _reflectionCoefficient;
	double _shininess;
};

#endif
