#include <iostream>
#include <new>
//
using namespace std;

int main(){
	char* pChar=new char[100];
	int *pInt= new int[100];
	double* pDouble =new double[100];
	long double * plDouble= new long double[100];
	string* pString= new string[100];

	//pDouble= (double*)pChar;

	for(int i=0;i<5;i++){
		pDouble[i]=rand();
		cout<<pDouble[i]<<endl;
	}
	cout<<"-----------------------------\n"<<endl;
	pChar=(char*)pDouble;

	for(int i=0;i<5;i++){
		pChar[i*8+7]^='A';
		cout<<pDouble[i]<<endl;
	}
	/*
	pString[0]=string(1000,'a');
	cout<<pString[0]<<endl;
	*/
	cout<<100* sizeof(char)<<endl;
	cout<<100* sizeof(int)<<endl;
	cout<<100* sizeof(double)<<endl;
	cout<<100* sizeof(long double)<<endl;
	cout<<100* sizeof(string)<<endl;
	cout<<"-----------------------------\n"<<endl;
	cout<<100* sizeof(char*)<<endl;
	cout<<100* sizeof(int*)<<endl;
	cout<<100* sizeof(double*)<<endl;
	cout<<100* sizeof(long double*)<<endl;
	cout<<100* sizeof(string*)<<endl;
	system("pause");
	return 0;
}
