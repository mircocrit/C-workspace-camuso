#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
    srand(time(0));

    fstream f("immagine.bmp", ios::out | ios::in | ios::binary);
    f.seekg(0, ios::end);
    long dimensione = f.tellg();	//restituisce punatore alla posizione

    f.seekg(0, ios::beg);

    char* immagineRAM = nullptr;

    //.... altre istruzioni ...

    immagineRAM = new char[dimensione];
    f.read(immagineRAM, dimensione );

    for(int i=10000; i<dimensione; i++)
      immagineRAM[i] = rand()%256;

    //per leggere i primi due byte dal file che contengono, per i bmp, BM
    //char tipoImmagine[2];
    //f.read(tipoImmagine, 2);

    //creiamo una stringa c++ partendo dal contenuto di un vettore di char
    //string s(tipoImmagine);
    //cout << "tipo immagine: " << s << endl;
    //f.seekp(50000,ios::beg);

//    char v[3];  //rgb
//
//    for(int i=0; i<30000; i++)
//    {
//       v[0] = rand()%256;
//       v[1] = rand()%256;
//       v[2] = rand()%256;
//
//       f.write(v, 3);
//    }

    f.seekp(0, ios::beg);
    f.write(immagineRAM, dimensione);

    f.close(); f.clear();
    delete[] immagineRAM;
    immagineRAM = nullptr;

    //... altre istruzioni

    //immagineRAM = new char[x];

}

