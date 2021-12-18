
#ifndef DogruKuyrugu_hpp
#define DogruKuyrugu_hpp

#include "Dugum.h"

class dogruKuyrugu {

public:
	dogruKuyrugu();
	~dogruKuyrugu();
	void ekle(int x, int y, int z);
	void cikar();
	bool bosmu();
	int getir();
	void kuyrugSirala();
	void veriAtama();
	void uzaklikAtama();
	void toplamUzaklikAtama();
	void yazdirma();
	int toplamUzaklik;
private:
	Dugum* ilk;
	Dugum* son;
};


#endif 

