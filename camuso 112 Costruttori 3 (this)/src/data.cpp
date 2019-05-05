#include "data.h"
#include <ctime>

Data::Data() {}
Data::Data(int gg, int mm) : Data(gg, mm, data_corrente()->tm_year+1900 ){ }
Data::Data(int gg) : Data(gg, data_corrente()->tm_mon, data_corrente()->tm_year+1900 ){}
Data::Data(const std::string d) : Data( stoi( d.substr(0,2) ),stoi( d.substr(3,2) ),stoi( d.substr(6,4) ) ){ }
bool Data::valida(int gg, int mm, int aa){		return gg>=1 && gg<=31 && mm>=1 && mm<=12 && anno>=1970;}

Data::Data(int gg, int mm, int aa){
  if ( valida(gg, mm, aa) )	{
    giorno = gg;
    mese = mm;
    anno = aa;
  }
  else
  {
    giorno = oggi->tm_mday;
    mese = oggi->tm_mon;
    anno = oggi->tm_year+1900;
  }
}

std::string Data::formato_breve(){		return std::to_string(giorno) + "/" +std::to_string(mese) + "/" +std::to_string(anno);}
tm* Data::oggi = Data::data_corrente();

tm* Data::data_corrente(){
 time_t tempo_secondi = time(nullptr);
 return localtime(&tempo_secondi);
}
