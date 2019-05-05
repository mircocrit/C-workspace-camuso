#include <iostream>
#include "data.h"

using namespace std;
/*
void test(){
  int a = 3;
  int b = 0;
  int &r = ++b;

  int c = a + ++b;
  cout << "c:" << c << "  b: " << b << endl;

  int d = a++ + b;
  cout << "d:" << d << "  a: " << a << endl;
}
*/
int main(){
    Data d1{13,12,2016};
    Data d2{14, 12, 2016};
	Data d3 = d1++;			//ol ++
	cout << d3.formato_breve() << endl;
	cout << d1.formato_breve() << endl;
	//cout << Data::bisestile(3000);
	cout<<(d3< d1)<<endl<<(d3>d1)<<endl<<(d3==d1)<<endl;
	//test();
	system("pause");
	return 0;
}
