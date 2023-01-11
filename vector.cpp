#include "vector.h"

Vector Vector::operator + (Vector w){
	Vector r;
	r.x = this->x + w.x;
	r.y = this->y + w.y;
	return r;
}

Vector Vector::operator - (Vector w){
	Vector r;
	r.x = this->x - w.x;
	r.y = this->y - w.y;
	return r;
}

void Vector::operator += (Vector w){
	this->x += w.x;
	this->y += w.y;
	return;
}

void Vector::operator -= (Vector w){
	this->x -= w.x;
	this->y -= w.y;
	return;
}

std::ostream& operator << (std::ostream& out, Vector w){
	out << "(" << w.x << ","  << w.y << ")";
	return out;
}