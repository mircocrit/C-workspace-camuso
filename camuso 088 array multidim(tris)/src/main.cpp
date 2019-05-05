#include <iostream>

using namespace std;

int main(){
  int tris[3][3] { {1,2,3},{4,5,6},{7,8,9} };
  for(int r=0; r<3; r++){
    for(int c=0;c<3; c++)
      cout << tris[r][c] <<" ";
    cout << endl;
  }
  cout << "----------------------\n";
  for(int c=0; c<3; c++){
    for(int r=0;r<3; r++)
      cout << tris[r][c] <<" ";
    cout << endl;
  }
  cout << "----------------------\n";

  //elaborazione di una riga particolare
  int riga=1;
  //stampa degli elementi pari su questa riga
  for(int c=0; c<3; c++)
    if(tris[riga][c]%2==0)
      cout << tris[riga][c] << " ";
  cout << "\n----------------------\n";

 //elaborazione di una colonna particolare
  int colonna=2;
  //stampa degli elementi dispari su questa colonna
  for(int r=0; r<3; r++)
    if(tris[r][colonna]%2==1)
      cout << tris[r][colonna] << " ";
    system("pause");
    return 0;
}
