#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>

class Vector{
public:
	double x;
	double y;
	Vector operator + (Vector w);
	Vector operator - (Vector w);
	void operator += (Vector w);
	void operator -= (Vector w);
};