#ifndef agacDugum_hpp
#define agacDugum_hpp

#include<iostream>
#include "DogruKuyrugu.h"
#include "Dugum.h"
class agacDugum {

public:
	agacDugum(dogruKuyrugu* veri);
	dogruKuyrugu* veri;
	agacDugum* sag;
	agacDugum* sol;
};


#endif 
