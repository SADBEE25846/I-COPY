#include <iostream>
#include <cstdlib>
using namespace std;
int sum(int,int);
int main(){
    int x,y,mod,(*ptr)(int,int);
    cout<<"Input Mode";
    cin>>mod;
    switch (mod)
    {
    case 0:
        ptr=sum;
        break;
    case 1:
        ptr=sub;
    case 2:
        ptr=mul;
    case 3:
        ptr=div;
    default:
        break;
    }
    return 0;
}
int sum(int a,int b){

}
int sub(int a,int b){

}
int mul(int a,int b){

}