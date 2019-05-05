#include <iostream>

using namespace std;

int main(){
	int v[10]={100,-80,56,9};
	cout<<v<<endl;
	cout<<&v[0]<<endl;

	int *pInt=v;
	cout<<pInt<<endl;

	cout<<pInt[2]<<endl;
	cout<<*v<<endl;
	cout<<*(v+2)<<endl;
	cout<<*(pInt+2)<<endl;

	pInt=pInt+1;
	pInt++;
	pInt+=1;
	cout<<*pInt<<endl;
	pInt--;
	cout<<*pInt<<endl;

	//v++;

	int *p=v;

	for(int i=0;i<10;i++,p++)
		cout<<*p<<" ";
	cout<<endl;

	int *p1,*p2,*p3;
	//p1=p2+p3; errore

	p1=v;
	p2=v+3;
	cout<<p2-p1<<endl;
	system("pause");
	return 0;
}
