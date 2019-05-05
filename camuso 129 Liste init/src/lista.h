#ifndef LISTE_H_INCLUDED
#define LISTE_H_INCLUDED
#include <string>
#include <memory>
#include <iostream>
#include <initializer_list>

class Elemento_lista{
  public:
    friend class Lista;
    Elemento_lista(const std::string &dati) : dati{dati} {}
  private:
    std::string dati="";
    Elemento_lista*  next = nullptr;
};

class Lista{
	public:
	  Lista() {}										//costruttore
	  Lista(std::initializer_list<Elemento_lista *>);
	  Lista(std::initializer_list<std::string>);

	  void ins_testa(Elemento_lista *);						//setter
	  void ins_testa(std::string dati) {ins_testa(new Elemento_lista(dati));};	//richiama il ins:testa superiore
	  void stampa();

	  std::string& operator[] (const int index);

	private:
	  Elemento_lista* head=nullptr;
	  int n_ele=0;
};

#endif // LISTE_H_INCLUDED
