#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstring>
#include <cstdlib>
#include "vector.h"

class Component{
public:
	std::string image_path;
	Component(std::string path);
	void render();
	Vector position;
	Vector velocity;
	int radius;
	int hp;
	int ep;
};