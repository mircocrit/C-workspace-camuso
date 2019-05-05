#include <iostream>

using namespace std;

void scambia(int &a, int &b){
	int temp=a;
	a=b;
	b=temp;
}

int main(){
	int n1=100;
	int n2=200;

	scambia(n1,n2);
	system("pause");
	return 0;
}
