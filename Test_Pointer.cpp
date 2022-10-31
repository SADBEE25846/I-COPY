#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main(){
    struct Student{
        string name;
        int score;
        char subject[4][10]={"Chinese","English","Math","Science"};
    };
    struct Student marco;
    marco.score=100;
    cout<<"After Break";
}
