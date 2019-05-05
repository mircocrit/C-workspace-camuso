#include "data.h"
#include <ctime>
#include <exception>
#include <iostream>

using namespace std;

Data::Data(int gg, int mm, int aa){
  std::cout << "Costruttore classe madre\n";
  if ( valida(gg, mm, aa) ){
    giorno = gg;
    mese = mm;
    anno = aa;
  }
  else{
    giorno = oggi->tm_mday;
    mese = oggi->tm_mon + 1;
    anno = oggi->tm_year+1900;
  }
}

Data::Data(int gg, int mm) : Data(gg, mm, data_corrente()->tm_year+1900 ){}
Data::Data(int gg) : Data(gg, data_corrente()->tm_mon, data_corrente()->tm_year+1900 ){}
Data::Data(const std::string d) : Data( stoi( d.substr(0,2) ),stoi( d.substr(3,2) ),stoi( d.substr(6,4) ) ){ }
Data::Data() : Data(0,0,0) { std::cout << "Default della classe madre\n";}

bool Data::operator==(const Data& altra){	  return giorno==altra.giorno && mese==altra.mese && anno==altra.anno;}
bool Data::operator==(std::string s){	  return Data{s} == *this;}

bool Data::operator<(const Data& altra){
  if ( !valida(altra.get_giorno(), altra.get_mese(), altra.get_anno()) )
    throw std::runtime_error("Data non valida con l'operatore minore di ...");
  if(anno<altra.anno)
    return true;
  else
    if (anno==altra.anno)
      if (mese<altra.mese)
        return true;
      else
        if(mese==altra.mese)
          if (giorno<altra.giorno)
            return true;
  return false;
}

bool Data::operator>(const Data& altra){  return !(*this<altra || *this==altra);}
std::ostream& operator<<(std::ostream& stream, const Data& d){
  stream << d.giorno << " - " << d.mese << " - " << d.anno;
  return stream;
}

Data::operator std::string() const{  return formato_breve();}

Data Data::operator++(int non_usato){
  Data d = *this;
  giorno++;
  if ( giorno>giorni_mese(mese, anno) ){
    mese++;
    giorno=1;
  }
  if ( mese>12 ){
    anno++;
    giorno=1;
    mese=1;
  }
  return d;
}

Data& Data::operator++(){
  giorno++;
  if ( giorno>giorni_mese(mese, anno) ){
    mese++;
    giorno=1;
  }
  if ( mese>12 ){
    anno++;
    giorno=1;
    mese=1;
  }
  return *this;
}

bool Data::uguale_a(Data altra){  return giorno==altra.giorno && mese==altra.mese && anno==altra.anno;}
bool Data::bisestile(int _anno){  return ((_anno % 4 == 0 && _anno % 100 != 0) || ( _anno % 400 == 0));}

int Data::giorni_mese(int _mese, int _anno){
  switch (_mese){
  case 1:  case 3:  case 5:  case 7:  case 8:  case 10:  case 12:
    return 31;
    break;
  case 4:  case 6:  case 9:  case 11:
	  return 30;
	  break;
  case 2:
    return Data::bisestile(_anno) ? 29 : 28;
    break;
  default:
    return 0;
    break;
  }
}


bool Data::valida(int gg, int mm, int aa){  return gg>=1 && gg<=31 && mm>=1 && mm<=12 && anno>=1970;}

std::string Data::formato_breve() const{
  return std::to_string(giorno) + "/" +  std::to_string(mese) + "/" + std::to_string(anno);}

tm* Data::oggi = Data::data_corrente();
tm* Data::data_corrente(){
	time_t tempo_secondi = time(nullptr);
	return localtime(&tempo_secondi);
}
