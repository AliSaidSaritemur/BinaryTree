#include "TextIslemleri.h"
#include <iostream>
#include <fstream>
#include "Dugum.h"
#include <string>
#include "DogruKuyrugu.h"
#include"IkiliAramaAgci.h"

using namespace std;
string satir;
void TextIslemleri::veriAtama() {
	int sayi = 0;
	int deger = 0;
	int a = 0;
	ifstream veriGirme;
	veriGirme.open("Veri.txt");

	IkiliAramaAgci* aramAgci = new  IkiliAramaAgci();
	while (getline(veriGirme, satir)) {
		dogruKuyrugu* dogrukuyrugu = new dogruKuyrugu();

		Dugum* yeni = new Dugum(0, 0, 0);
		for (char item : satir) {
			deger = item - '0';

			if (item == ' ') {
				a++;
				if (a == 3) {
					cout << "x degeri " << yeni->x << " y degeri " << yeni->y << " z degeri " << yeni->z << endl;
					dogrukuyrugu->ekle(yeni->x, yeni->y, yeni->z);
					yeni->x = 0;  yeni->y = 0;  yeni->z = 0;  a = 0;
				}
				continue;
			}

			if (a == 0) {
				yeni->x *= 10;
				yeni->x += deger;

			}
			if (a == 1) {
				yeni->y *= 10;
				yeni->y += deger;
			}
			if (a == 2) {
				yeni->z *= 10;
				yeni->z += deger;
			}
			
		}
		cout << "x degeri " << yeni->x << " y degeri " << yeni->y << " z degeri " << yeni->z << endl;
			dogrukuyrugu->ekle(yeni->x, yeni->y, yeni->z);
			yeni->x = 0;  yeni->y = 0;  yeni->z = 0;  a = 0;
	

			dogrukuyrugu->uzaklikAtama();
			dogrukuyrugu->kuyrugSirala();
			dogrukuyrugu->uzaklikAtama();
			dogrukuyrugu->toplamUzaklikAtama();
			aramAgci->ekle(dogrukuyrugu, aramAgci->kok);
	}
	aramAgci->postOrder(aramAgci->kok);
	veriGirme.close();
};