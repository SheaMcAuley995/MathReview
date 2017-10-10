#include "mathutils.h"
#include <cmath>

float sqr(float v)
{
	return v*v;
}

float dbl(float v)
{
	return v*2;
}

float cube(float v)
{
	return pow(v, 3);
}

float degToRad(float deg)
{
	return deg*(3.14159/180);
}

float radToDeg(float rad)
{
	return rad*180/3.14159;
}

float Quadratic(int x)
{
	return sqr(x)+(2*x)-7;
}

float Lerp(int s, int e, float t)
{
	return s+t*(e-s);
}

float Distance(int x1, int y1, int x2, int y2)
{
	return sqrt(pow((x1 - x2),2)+pow((y1-y2),2));
}
