#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int add_num(int*);
int main(){
    int p1_ls[10],p2_ls[10];
    add_num(p1_ls);
    cout<<p1_ls[0];
    return 0;
}
int add_num(int *ls){
    *ls.append(2);
    return 0;
}