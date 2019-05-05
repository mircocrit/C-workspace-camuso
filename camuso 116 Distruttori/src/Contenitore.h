#ifndef CONTENITORE_H_
#define CONTENITORE_H_

#include <iostream>
#include <string>

using namespace std;

class Contenitore{
  public:
    Contenitore(string _id, int valore) : id{_id}{	//costruttore
      cout << "Costruzione di " << id << endl;
      p=new int[10];
      for(int i=0; i<10; i++)
        p[i]=valore;
    }
    ~Contenitore(){				//distruttore
       cout << "Distruzione di " << id << endl;
       delete[] p;
    }
    Contenitore(const Contenitore& c) : id{c.id}{		//copy constr
      p=new int[10];
      for(int i=0; i<10; i++)
        p[i]=c.p[i];
    }
    Contenitore& operator=(const Contenitore& da_copiare){	//copy assignment
      id=da_copiare.id;
      for(int i=0; i<10; i++)
        p[i]=da_copiare.p[i];
      return *this;
    }
    void set_id(string s) {id=s;};		//setter
    void set_valore(int indice, int valore){ p[indice] = valore; }		//setter

    void stampa(){
      cout << id <<":";
      for(int i=0; i<10; i++)
        cout << p[i] << " ";
      cout << endl;
    }
  private:
    string id {""};
    int *p {nullptr};
};
#endif /* CONTENITORE_H_ */
