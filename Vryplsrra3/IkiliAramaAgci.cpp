#include "IkiliAramaAgci.h"
#include <iostream>
#include "DogruKuyrugu.h"
#include "agacDugum.h"
using namespace std;

IkiliAramaAgci::IkiliAramaAgci() {

	kok = 0;

}

void IkiliAramaAgci::ekle(dogruKuyrugu* veri,agacDugum*aktifDogru) {

	if (aktifDogru ==NULL) {
		kok = new agacDugum(veri);
		aktifDogru = new agacDugum(veri);
		cout << "aktifDogru->veri-> "<< aktifDogru->veri->toplamUzaklik<<"veri->toplamUzaklik-> " << veri->toplamUzaklik << endl;
	}

	else if (aktifDogru->veri->toplamUzaklik > veri->toplamUzaklik)
	{
		cout << "dfghjklþi";
		if (aktifDogru->sol)
		{
			ekle(veri, aktifDogru->sol);
		}
		else
			aktifDogru->sol = new agacDugum(veri);
	}
	else if (aktifDogru->veri->toplamUzaklik < veri->toplamUzaklik)
	{
		cout << "dfghjklþi";
		
		if (aktifDogru->sag)
		{
			ekle(veri, aktifDogru->sag);
		}
		else
			aktifDogru->sag = new agacDugum(veri);
	}
	else if (aktifDogru->veri->toplamUzaklik == veri->toplamUzaklik)
	{
		cout << "dfghjklþi";
		if (aktifDogru->sol)
		{
			ekle(veri, aktifDogru->sol);
		}
		else
			aktifDogru->sol = new agacDugum(veri);
	}


	else return;
}

void  IkiliAramaAgci::postOrder(agacDugum* aktifDugum) {
	if (aktifDugum)
	{		
		postOrder(aktifDugum->sol);
		postOrder(aktifDugum->sag);
		cout << endl;
	 aktifDugum->veri->yazdirma();
	
	}
}