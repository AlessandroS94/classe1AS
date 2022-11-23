#include <iostream>

using namespace std;

int main(){


    int base1;
    cout<<"inserisci base1"<<endl;
    cin>>base1;
    int altezza1;
    cout<<"inserisci altezza1"<<endl;
    cin>>altezza1;
    int base2;
    cout<<"inserisci base2"<<endl;
    cin>>base2;
    int altezza2;
    cout<<"inserisci altezza2"<<endl;
    cin>>altezza2;
    int area1;
    area1 = altezza1 * base1;
    int area2;
    area2 = altezza2 * base2;
    if(area1>area2){
        cout<<"Il primo rettangolo ha l'area max"<<endl;
    }
    else{
        cout<<"Il secondo rettangolo ha l'area max"<<endl;
    }
    return 0;
}
