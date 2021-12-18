#ifndef Dugum_hpp
#define Dugum_hpp
#include <iostream>
using namespace std;

class Dugum {

public:
	Dugum(int x, int y, int z);
	~Dugum();
	int x;
	int y;
	int z;
	int veri;
	void veriAtama();
	Dugum* sonraki;
};

#endif

