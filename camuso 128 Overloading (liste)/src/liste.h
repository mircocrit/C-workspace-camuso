#ifndef LISTE_H_INCLUDED
#define LISTE_H_INCLUDED

#include <string>
#include <memory>
#include <iostream>

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
	  Lista() {}
	  void ins_testa(Elemento_lista *);
	  void ins_testa(std::string dati) {ins_testa(new Elemento_lista(dati));};
	  void stampa();

	  std::string& operator[] (const int index);		//overloading []

	private:
	  Elemento_lista* head=nullptr;
	  int n_ele=0;
};

#endif // LISTE_H_INCLUDED
