#include "data.h"
#include <string>

Data::Data() {}

Data::Data(int gg, int mm, int aa){
  if (gg>=1 && gg<=31)
    giorno = gg;
  if (mm>=1 && mm<=12)
    mese = mm;
  if (anno>=1970)
    anno = aa;
}

std::string Data::formato_breve(){
  return std::to_string(giorno) + "/" + std::to_string(mese) + "/" + std::to_string(anno);
}

bool Data::date_uguali(Data d){
    if((this->giorno==d.giorno) && (this->mese== d.mese) && (this->anno=d.anno))
    	return true;
    else
    	return false;
}
