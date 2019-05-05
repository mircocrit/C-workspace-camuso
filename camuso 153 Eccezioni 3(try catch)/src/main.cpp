#include <iostream>
#include <vector>

using namespace std;

class C
{
public:
  C()
  {
    p = new char[1000];
  };

  ~C()
  {
    cout << "Rilascio la memoria!\n";
    delete[] p;
  }

private:
  char *p;
};

int liv4_1( string s )
{
  int n=0;

  try {
    C obj{}; //alloca memoria

    int n = stoi( s );

    vector<int> v(10);
    v.at(5) = 1000; //OK
    v.at(30) = 2000; //out of range!
  }


 catch (logic_error eccezione)
  {
    cout << eccezione.what() << endl;
    cout << "Dove: funzione liv4_1\n";
  }


/*  catch (out_of_range eccezione)
  {
    cout << eccezione.what() << endl;
    cout <<"Tentativo di accedere ad un elemento non esistente di un vector\n";
    cout << "Dove: funzione liv4_1\n";
  }

  catch (invalid_argument eccezione) {
    cout << eccezione.what() << " ha generato un errore "
         << "nel tentativo di elaborare il dato " << s << endl;

    //possibile log su un file di testo

    //se si decide che l'errore è troppo grave per continuare, si blocca l'esecuzione
    //exit(3);
  }
*/

  //altre istruzioni ...

  return n;
}

int liv3_2(string s )
{
  int esito = liv4_1( s );
  return esito;
}

int liv2_1( string s)
{
  int esito = liv3_2( s );
  return esito;
}

int main()
{
  cout << liv2_1("w34") << endl;

  return 0;
}
