#ifndef IkiliAramaAgci_hpp
#define IkiliAramaAgci_hpp
#include <iostream>
#include "DogruKuyrugu.h"
#include "Dugum.h"
#include "agacDugum.h"
class IkiliAramaAgci {

public:
	
	IkiliAramaAgci();
	~IkiliAramaAgci();
	void ekle(dogruKuyrugu* veri, agacDugum*aktifDugum);
	void postOrder(agacDugum* aktifDugum);
	int yukseklik(agacDugum*baslangic);
agacDugum* kok ;
private:
	
};


#endif 

