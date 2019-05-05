#include <iostream>
#include <memory>
#include "data.h"

using namespace std;

bool operator==(string s, Data d){  return Data{s} == d;}

void stampa_messaggio(string s){  cout << s << endl;}

string operator+(const char s[], const Data& d){  return string(s) + (string)d;}

int main(){
    Data d1{7,1,2017};
    cout << d1 << endl;

    string s = "Oggi e' il " + d1;
    cout << s << endl;

    string s2 = (string)d1;
    stampa_messaggio( (string) d1);

    string s3 = "13-01-2017";
    Data d2 = Data {s3};
    cout << d2 << endl;

    Data d3 = s3;
    Data d4 = "13-01-2017";
    system("pause");
    return 0;
}

