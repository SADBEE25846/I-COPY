#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
void sum(int*,int*);
int cal(int,int);
int main(){
    int var=10,var2=10,*ptr1=&var,*ptr2=&var2,(*ptr)(int,int);
    struct Student{
        string name;
        int score;
        char subject[4][10]={"Chinese","English","Math","Science"};
    };
    Student marco;
    marco.score=100;
    cout<<"After Break";
}
int cal(int a,int b){
    int sum;
    return a+b;
}