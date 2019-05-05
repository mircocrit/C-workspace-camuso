#include <iostream>
#include <string>
#include "data.h"

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
