#ifndef DEBUG_H_
#define DEBUG_H_

#include <iostream>
#include <string>

using namespace std;

//questa classe definisce una interfaccia per fornire un servizio di logging durante l'esecuzione
class  Debug {
	public:
	  Debug() : Debug("default_log.txt") {}		//costruttore default debug
	  Debug(const string& nome_file) : nome_file{nome_file} { }	//costruttore con stringa
	  virtual ~Debug() {}
	  virtual string get_file() {return nome_file;}
	  virtual void read() = 0;
	  virtual void write() = 0;
	 private:
	  string nome_file="";
};

#endif /* DEBUG_H_ */
