#include <iostream>
#include <exception>

using namespace std;

int main(){
	char *p;
	while(true){
		try{
			p=new char[500000000];
		}
		catch(bad_alloc){	//bad_alloc	bad_cast	bad_exception	bad_typeid  ios_base::failure
			cout<<"Non posso allocare altra memoria....\n";
			return -1;
		}
		cout<<"Premi invio per continuare..\n";
		string s;
		getline (cin,s);

	}
	system("pause");
	return 0;
}
