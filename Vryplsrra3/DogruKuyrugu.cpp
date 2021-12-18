#include "DogruKuyrugu.h"
#include <iostream>
#include <math.h>
using namespace std;

bool dogruKuyrugu::bosmu() {

	if (ilk == 0) return true;
	return false;
};

dogruKuyrugu::dogruKuyrugu() {

	ilk = son = 0;
}

dogruKuyrugu::~dogruKuyrugu() {

	while (ilk != 0)
	{
		Dugum* gec = ilk;
	}
}

int dogruKuyrugu::getir() {

	if (ilk != 0) return ilk->veri;
	throw out_of_range("Kuyruk bos");
}
void dogruKuyrugu::ekle(int x, int y, int z) {

	if (ilk == 0) {
		ilk = new Dugum(x, y, z);
		son = ilk;
	}
	else {
		Dugum* yeni = new Dugum(x, y, z);
		son->sonraki = yeni;
		son = yeni;
	}
}

void dogruKuyrugu::cikar() {
	if (ilk != 0) {
		Dugum* gec = ilk->sonraki;
		delete ilk;
		ilk = gec;
		if (ilk == 0) son = 0;
	}
}
void dogruKuyrugu::veriAtama() {
	Dugum* gec;
	gec = ilk;
	while (gec != 0)
	{
		gec->veriAtama();
	}
};



void dogruKuyrugu::kuyrugSirala() {
	
	int veri =0;
	Dugum* temp = new Dugum(0, 0, 0);
	Dugum* gec;
	Dugum* gec2;
	Dugum* enYakin;
	enYakin = ilk;
	gec = ilk;
	gec2 = ilk;
		while (gec != 0)
	{		
		while (gec2  != 0) {

			if (gec2->veri < enYakin->veri) {
				enYakin = gec2;
			}
			gec2 = gec2->sonraki;
		}

		temp->x = gec->x;
		temp->y = gec->y;
		temp->z = gec->z;
		temp->veri = gec->veri;

		gec->x = enYakin->x;
		gec->y = enYakin->y;
		gec->z = enYakin->z;
		gec->veri = enYakin->veri;

		enYakin->x = temp->x;
		enYakin->y = temp->y;
		enYakin->z = temp->z;
		enYakin->veri = temp->veri;

		gec = gec->sonraki;	
		gec2 = gec;
		enYakin = gec2;
	}
};

void dogruKuyrugu::uzaklikAtama() {
	Dugum* gec;
	gec = ilk;
	while (gec != 0)
	{
		gec->veriAtama();
		cout << gec->veri << endl;;
		gec = gec->sonraki;
	}
};

void dogruKuyrugu::toplamUzaklikAtama() {
	Dugum* gec;
	gec = ilk;
	 toplamUzaklik = 0;
	while (gec->sonraki !=0)
	{
		toplamUzaklik += pow((gec->sonraki->x - gec->x), 2) + pow((gec->sonraki->y - gec->y), 2) + pow((gec->sonraki->z - gec->z), 2);
		gec = gec->sonraki;
	}
	this->toplamUzaklik = toplamUzaklik;
};

void dogruKuyrugu::yazdirma() {

	Dugum* gec;
	gec = ilk;
	while (gec != 0)
	{ 
		int veri1 = sqrt(gec->veri);
		cout << "  " << veri1 <<"  " ;
		gec = gec->sonraki;
	}
}