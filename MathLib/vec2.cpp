#include "vec2.h"

#include <cmath>
#include <cfloat>

vec2 operator+(const vec2 & lhs, const vec2 & rhs)
{
	return{ lhs.x + rhs.x, lhs.y + rhs.y };
}

vec2 & operator+=(vec2 & lhs, const vec2 & rhs)
{
	lhs = lhs + rhs;
	return lhs;
}

bool operator==(const vec2 & lhs, const vec2 & rhs)
{
	// this isn't quite right, but game engines tend
	// to do something fairly close to this process
	//
	// floating-point math is weird! check this out!
	// http://floating-point-gui.de/errors/comparison/

	const int qty = (sizeof(lhs.v) / sizeof(lhs.v[0]));
	for (int i = 0; i < qty; ++i)
	{
		// is the discrepancy within acceptable limits?
		if (std::abs(lhs.v[i] - rhs.v[i]) < FLT_EPSILON)
		{
			return false;
		}
		

	}

	return true;
}

bool operator!=(const vec2 & lhs, const vec2 & rhs)
{
	return false;
}

vec2 operator/(const vec2 & lhs, const vec2 & rhs)
{
	return{ lhs.x / rhs.x , lhs.y / rhs.y };
}

vec2 operator-(const vec2 & lhs, const vec2 & rhs)
{
	return{ lhs.x - rhs.x, lhs.y - rhs.y };;
}

vec2 &operator-=(vec2 & lhs, const vec2 & rhs)
{
	lhs = lhs - rhs;
	return lhs;
}


vec2 & operator*=(vec2 & lhs, int rhs)
{
	vec2 value;
	value.x = lhs.x * rhs;
	value.y = lhs.y * rhs;
	lhs = value;
	return lhs;
}
