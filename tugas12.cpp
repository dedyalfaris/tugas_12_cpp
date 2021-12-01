#include<iostream>
using namespace std;
int main(){

int x[3] = {1,5,4};
int y[3] = {3,2,5};
int penjumlahan[3];

int a;

for(a=0;a<3;a++){
    cout<<"Array x "<<a<<" : "<<a[x]<<endl;
}cout<<endl;

for(a=0;a<3;a++){
    cout<<"Array y "<<a<<" : "<<a[y]<<endl;
}cout<<endl;
for(a=0;a<3;a++){
    }for(a=0;a<3;a++){
           penjumlahan[a]=a[x]+a[y];
            cout<<"Array Penjumlahan "<<a<<" : "<<a[penjumlahan]<<endl;
    } cout<<endl;
           
}