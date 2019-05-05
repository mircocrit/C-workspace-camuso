#ifndef P_CONTENITORE_H_
#define P_CONTENITORE_H_

#include <iostream>
#include <string>
#include <memory>
#include "Contenitore.h"

using namespace std;

class p_Contenitore{
	public:
	  p_Contenitore(string s, int n) : p( new Contenitore(s,n) ) { }
	  ~p_Contenitore(){
		if (p!=nullptr){
		  cout << "Distruggo contenitore di " << p->get_id() << endl;
		  //delete p;
		}
	  }
	  p_Contenitore(const p_Contenitore& c) : p( new Contenitore("", 0) ){}
	  unique_ptr<Contenitore>& get_p() {return p;}
	private:
	  unique_ptr<Contenitore> p;
};

#endif /* P_CONTENITORE_H_ */
