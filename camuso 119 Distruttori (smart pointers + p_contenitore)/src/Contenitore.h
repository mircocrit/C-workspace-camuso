#ifndef CONTENITORE_H_
#define CONTENITORE_H_

#include <iostream>
#include <memory>
#include <string>
using namespace std;

class Contenitore{
  public:
    Contenitore(string _id, int valore) : id{_id}{
      cout << "Costruzione di " << id << endl;
      //p=new int[10];
      for(int i=0; i<10; i++)
        p.get()[i]=valore;
    }

    ~Contenitore(){cout << "Distruzione di " << id << endl; }

    Contenitore(const Contenitore& c) : id{c.id}, p{new int[10]}	{
      for(int i=0; i<10; i++)
        p.get()[i]=c.p.get()[i];
    }

    Contenitore& operator=(const Contenitore& da_copiare){
      id=da_copiare.id;
      for(int i=0; i<10; i++)
        p.get()[i]=da_copiare.p.get()[i];
      return *this;
    }

    string get_id() {return id;}
    void set_id(string s) {id=s;};
    void set_valore(int indice, int valore){	 p.get()[indice] = valore;  }

    void stampa(){
      cout << id <<":";
      for(int i=0; i<10; i++)
        cout << p.get()[i] << " ";
      cout << endl;
    }

  private:
    string id {""};
    //int *p {nullptr}; RAW POINTER -> PERICOLO!
    unique_ptr<int> p{new int[10]};
};

#endif /* CONTENITORE_H_ */
