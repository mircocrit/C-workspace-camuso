#include <iostream>

using namespace std;

int *filtra(int v[],int num_ele, int minAccettabile, int maxAccettabile, int &filtrati){
	filtrati=0;

	for(int i=0;i<num_ele;i++)
		if(v[i]>=minAccettabile && v[i]<=maxAccettabile)
			filtrati++;

	int *p= new int[filtrati];	//dinamica

	for(int i=0,copiati=0;i<num_ele;i++)
		if(v[i]>=minAccettabile && v[i]<=maxAccettabile)
			p[copiati++]=v[i];

	return p;
}

int main(){
	int vettore[]={6,-78,-59,11,73,-26};

	int quantiFiltrati=0;
	int *filtrati= filtra(vettore, 6, -10,80,quantiFiltrati);	//array

	for(int i=1; i<quantiFiltrati;i++)
		cout<<filtrati[i]<<" ";

	delete[] filtrati;
	system("pause");
	return 0;
}
