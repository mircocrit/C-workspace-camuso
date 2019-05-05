#include "data.h"
#include <ctime>

Data::Data() {}

Data::Data(int gg, int mm, int aa){
  initialization(gg, mm, aa);
}

Data::Data(int gg, int mm){
  tm* oggi = data_corrente();
  int aa = oggi->tm_year+1900;
  initialization(gg, mm, aa);
}

Data::Data(int gg){
  tm* oggi = data_corrente();
  int aa = oggi->tm_year+1900;
  int mm = oggi->tm_mon;
  initialization(gg, mm, aa);
}

tm* Data::data_corrente(){
 time_t tempo_secondi = time(nullptr);
 return localtime(&tempo_secondi);
}

void Data::initialization(int gg, int mm, int aa){
  if (valida(gg, mm, aa)){
    giorno = gg;
    mese = mm;
    anno = aa;
  }else{
    tm* oggi = data_corrente();				//impostiamo la data corrente
    giorno = oggi->tm_mday;
    mese = oggi->tm_mon;
    anno = oggi->tm_year+1900;
  }
}


Data::Data(const std::string d){		//per semplicita' imponiamo il formato fisso gg-mm-aaaa
  int gg = stoi( d.substr(0,2) );
  int mm = stoi( d.substr(3,2) );
  int aa = stoi( d.substr(6,4) );
  initialization(gg, mm, aa);
}

std::string Data::formato_breve(){
  return std::to_string(giorno) + "/" + std::to_string(mese) + "/" + std::to_string(anno);
}

bool Data::valida(int gg, int mm, int aa){
  return gg>=1 && gg<=31 && mm>=1 && mm<=12 && anno>=1970;
}
