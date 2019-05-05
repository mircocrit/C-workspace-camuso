#include <iostream>

using namespace std;

int main(){
	int * pInt=new int[100];
	for(int i=0;i<100;i++)
		pInt[i]=i;

	int *temp=new int[200];

	for(int i=0;i<100;i++)
		temp[i]=pInt[i];

	delete[] pInt;	//delete di array
	pInt=nullptr;

	//malloc free realloc
	//
	int *p= (int*)malloc(sizeof(int)*100);
	free(p);


	int f(int x);
	int f(int* p);

	system("pause");
	//f(nullptr);
}
