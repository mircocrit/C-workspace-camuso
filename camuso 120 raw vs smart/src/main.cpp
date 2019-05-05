#include <iostream>
#include <memory>

using namespace std;

class C{
  public:
  C() {cout << "costruttore di C\n";}
  ~C() {cout << "distruttore di C\n";}
  int a=9;
};

void f(unique_ptr<C> obj  ){}

int main(){
    unique_ptr<C> sp(new C());
    f( move(sp) ) ;
    cout << "tornato da f...\n";
    system("pause");
    return 0;
}
