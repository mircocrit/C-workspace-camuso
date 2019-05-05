#include <iostream>

using namespace std;

int main(){

  int tris[3][3] { {1,2,3},{4,5,6},{7,8,9} };

  cout << *tris[0] << endl;
  cout << *tris[1] << endl;
  cout << *tris[2] << endl;

  cout << *(tris[0] + 1) << endl;
  cout << *(tris[1] + 1) << endl;
  cout << *(tris[2] + 1) << endl;

  cout << *(tris[0] + 2) << endl;
  cout << *(tris[1] + 2) << endl;
  cout << *(tris[2] + 2) << endl;
  cout << "----------------------\n";

//  int *p = tris[0];
//  while(p<=tris[2]+2)
//  {
//    cout << *p << endl;
//    p++;
//  }

  int *p = tris[0];
  while(p<=tris[2]+2)
    cout << *p++ << endl;

  cout << "----------------------\n";

  for(int *p = tris[0]; p<=tris[2]+2; p++)
    cout << *p << endl;
  system("pause");
  return 0;
}
