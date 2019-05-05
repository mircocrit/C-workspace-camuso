#include <iostream>
#include <stdio.h>

using namespace std;

class Immagine_full_HD
{
public:
  Immagine_full_HD(string path_file)
  {
     cout << "Invocato il costruttore NON vuoto \n";

     path=path_file;

     //crea lo spazio in memoria per leggere i dati di tutti i 1920*1080 pixel in full HD
     //servono 4 byte per pixel RGB + canale alfa trasparenza
     bitmap = new char[4*1920*1080];

     //immaginate qui istruzioni che leggono i dati dal file indicato come parametro ...
     //...

  }

  Immagine_full_HD()
  {
    cout << "Invocato il costruttore VUOTO \n";
    bitmap = new char[4*1920*1080];
  }

  //copy constructor
  Immagine_full_HD(const Immagine_full_HD& img)
  {
    cout << "Invocato il copy constructor == COPIA\n";
    path=img.path;
    bitmap = new char[4*1920*1080];
    memcpy(bitmap, img.bitmap, 4*1920*1080);
  }

  //assignment operator
  Immagine_full_HD& operator=(const Immagine_full_HD& img)
  {
    cout << "Invocato l'assignment operator == COPIA\n";
    path=img.path;
    memcpy(bitmap, img.bitmap, 4*1920*1080);
    return *this;
  }

 //MOVE constructor
  Immagine_full_HD(Immagine_full_HD&& img)
  {
    cout << "Invocato il MOVE constructor == NIENTE COPIA\n";

    path=move(img.path);
    bitmap = img.bitmap; //NESSUNA ALLOCAZIONE, NESSUNA COPIA!
    img.bitmap = nullptr;
  }

  //MOVE assignment operator
  Immagine_full_HD&  operator=(Immagine_full_HD&& img)
  {
    cout << "Invocato il MOVE assignment operator == NIENTE COPIA\n";

    path=move(img.path);
    delete[] bitmap; //rilascio risorsa pre esistente!

    bitmap = img.bitmap; //NESSUNA ALLOCAZIONE, NESSUNA COPIA!
    img.bitmap = nullptr;

    return *this;
  }

  ~Immagine_full_HD()
  {
    cout << "distruttore Immagine_full_HD\n";
    delete[] bitmap;
  }

  //altri metodi ...

private:
  char *bitmap = nullptr; //la mappa dei pixel
  string path=""; //path e nome file immagine

};

class Usa_immagine
{
public:
  Usa_immagine(Immagine_full_HD img) //NOTA: qui copy constructor
  {

     //NOTA: in questo assegnamento viene richiamato
     //      l'assignment operator di Immagine_full_HD
     this->img = move(img);

  }

  //di questo metodo discuteremo nella terza parte ...
  Immagine_full_HD clona()
  {
    Immagine_full_HD copia = img;
    return copia;
  }

private:
  Immagine_full_HD img;
};

int main()
{
 Usa_immagine x1( Immagine_full_HD("d:\\immagini\\panorama.jpg") );


 //di questo metodo discuteremo nella terza parte ...
 Immagine_full_HD copia = x1.clona();

 //Immagine_full_HD immagine{"d:\\immagini\\panorama.jpg"};
 //Usa_immagine x2( move(immagine) );

return 0;
}













