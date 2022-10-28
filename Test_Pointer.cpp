#include <iostream>
#include <cstdlib>
using namespace std;
void sum(int*,int*);
int main(){
    int var=10,var2=10,*ptr1=&var,*ptr2=&var2;
    sum(ptr1,ptr2);
    cout<<var;
    return 0;
}
void sum(int *a,int *b){
    *a=(*a)+(*b);
}