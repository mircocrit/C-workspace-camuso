#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
	srand(time(0));
	fstream f("immagine.bmp",ios::out| ios::in | ios::binary);	//lettura file

	char tipoImmagine[2];
	f.read(tipoImmagine,2);		//lettura

	string s(tipoImmagine);
	cout<<"tipoImmagine: "<< s <<endl;

	f.seekp(50000,ios::beg);

	char v[3];
	for(int i=0;i<30000;i++){
		v[0]=rand()%256;
		v[1]=rand()%256;
		v[2]=rand()%256;

		f.write(v,3);		//scrittura
	}

	f.close();
	f.clear();
}

