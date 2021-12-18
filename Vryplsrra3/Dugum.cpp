#include <iostream>
#include "Dugum.h"
#include <math.h>
using namespace std;
Dugum::Dugum(int x, int y, int z) {
	sonraki = 0;
	this->x = x;
	this->y = y;
	this->z = z;
}
void Dugum::veriAtama() {

	this->veri =pow((this->x),2) + pow((this->y),2) + pow((this->z) ,2);


}
Dugum::~Dugum() {
}

